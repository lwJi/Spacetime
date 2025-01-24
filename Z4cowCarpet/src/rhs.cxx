#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#ifdef __CUDACC__
// Disable CCTK_DEBUG since the debug information takes too much
// parameter space to launch the kernels
#ifdef CCTK_DEBUG
#undef CCTK_DEBUG
#endif
#endif

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

#include <cmath>

#include "../wolfram/derivsinline.hxx"

namespace Z4cowCarpet {

extern "C" void Z4cowCarpet_RHS(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_Z4cowCarpet_RHS;
  DECLARE_CCTK_PARAMETERS;

  for (int d = 0; d < 3; ++d)
    if (cctk_nghostzones[d] < deriv_order / 2)
      CCTK_VERROR("Need at least %d ghost zones", deriv_order / 2);

  const vect<CCTK_REAL, dim> dx{
      CCTK_DELTA_SPACE(0),
      CCTK_DELTA_SPACE(1),
      CCTK_DELTA_SPACE(2),
  };

  // Input grid functions
  const array<CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                      gammatyy, gammatyz, gammatzz};
  const CCTK_REAL *gf_exKh = Kh;
  const array<CCTK_REAL *, 6> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  const array<CCTK_REAL *, 3> gf_trGt{Gamtx, Gamty, Gamtz};
  const CCTK_REAL *gf_alpha = alphaG;
  const array<CCTK_REAL *, 3> gf_beta{betaGx, betaGy, betaGz};

  // More input grid functions
  const array<CCTK_REAL *, 3> gf_eTt{eTtx, eTty, eTtz};
  const array<CCTK_REAL *, 6> gf_eT{eTxx, eTxy, eTxz, eTyy, eTyz, eTzz};

  // Output grid functions
  const CCTK_REAL *gf_dtW = W_rhs;
  const array<CCTK_REAL *, 6> gf_dtgamt{gammatxx_rhs, gammatxy_rhs,
                                        gammatxz_rhs, gammatyy_rhs,
                                        gammatyz_rhs, gammatzz_rhs};
  const CCTK_REAL *gf_dtexKh = Kh_rhs;
  const array<CCTK_REAL *, 6> gf_dtexAt{Atxx_rhs, Atxy_rhs, Atxz_rhs,
                                        Atyy_rhs, Atyz_rhs, Atzz_rhs};
  const array<CCTK_REAL *, 3> gf_dttrGt{Gamtx_rhs, Gamty_rhs, Gamtz_rhs};
  const CCTK_REAL *gf_dtTheta = Theta_rhs;
  const CCTK_REAL *gf_dtalpha = alphaG_rhs;
  const array<CCTK_REAL *, 3> gf_dtbeta{betaGx_rhs, betaGy_rhs, betaGz_rhs};

  // parameters
  const CCTK_REAL cpi = M_PI;
  const CCTK_REAL ckappa1 = kappa1;
  const CCTK_REAL ckappa2 = kappa2;
  const CCTK_REAL cmuL = f_mu_L;
  const CCTK_REAL cmuS = f_mu_S;
  const CCTK_REAL ceta = eta;

  // Loop
#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("Z4cowCarpet_RHS::rhs");
#endif

#include "../wolfram/Z4cowCarpet_set_rhs.hxx"

#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif

#if 0
  // Upwind and dissipation terms

  const auto apply_diss = [&](const GF3D2<const CCTK_REAL> &gf_,
                              const GF3D2<CCTK_REAL> &gf_rhs_) {
    switch (diss_order) {
    case 3: {
      grid.loop_int_device<0, 0, 0, vsize>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
            const vreal rhs_old = gf_rhs_(mask, p.I);
            const vreal rhs_new =
                rhs_old + epsdiss * Derivs::calc_diss<2>(gf_, mask, p.I, dx);
            gf_rhs_.store(mask, p.I, rhs_new);
          });
      break;
    }
    case 5: {
      grid.loop_int_device<0, 0, 0, vsize>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
            const vreal rhs_old = gf_rhs_(mask, p.I);
            const vreal rhs_new =
                rhs_old + epsdiss * Derivs::calc_diss<4>(gf_, mask, p.I, dx);
            gf_rhs_.store(mask, p.I, rhs_new);
          });
      break;
    }
    case 7: {
      grid.loop_int_device<0, 0, 0, vsize>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
            const vreal rhs_old = gf_rhs_(mask, p.I);
            const vreal rhs_new =
                rhs_old + epsdiss * Derivs::calc_diss<6>(gf_, mask, p.I, dx);
            gf_rhs_.store(mask, p.I, rhs_new);
          });
      break;
    }
    case 9: {
      grid.loop_int_device<0, 0, 0, vsize>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
            const vreal rhs_old = gf_rhs_(mask, p.I);
            const vreal rhs_new =
                rhs_old + epsdiss * Derivs::calc_diss<8>(gf_, mask, p.I, dx);
            gf_rhs_.store(mask, p.I, rhs_new);
          });
      break;
    }
    default:
      assert(0);
    }
  };

  apply_diss(gf_W, gf_dtW);
  for (int a = 0; a < 3; ++a)
    for (int b = a; b < 3; ++b)
      apply_diss(gf_gamt(a, b), gf_dtgamt(a, b));
  apply_diss(gf_exKh, gf_dtexKh);
  for (int a = 0; a < 3; ++a)
    for (int b = a; b < 3; ++b)
      apply_diss(gf_exAt(a, b), gf_dtexAt(a, b));
  for (int a = 0; a < 3; ++a)
    apply_diss(gf_trGt(a), gf_dttrGt(a));
  if (!set_Theta_zero)
    apply_diss(gf_Theta, gf_dtTheta);
  apply_diss(gf_alpha, gf_dtalpha);
  for (int a = 0; a < 3; ++a)
    apply_diss(gf_beta(a), gf_dtbeta(a));
#endif
}

} // namespace Z4cowCarpet
