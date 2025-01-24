#include <loop_device.hxx>
#include <mat.hxx>
#include <simd.hxx>
#include <vec.hxx>

#include <cctk.h>
#include <cctk_Arguments.h>

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

#include <cmath>

#include "../wolfram/derivsinline.hxx"

namespace Z4cowGPU {
using namespace Arith;
using namespace Loop;

extern "C" void Z4cowGPU_Initial1(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_Z4cowGPU_Initial1;

  // Input grid functions
  const smat<GF3D2<const CCTK_REAL>, 3> gf_ADMgam{gxx, gxy, gxz,
                                                    gyy, gyz, gzz};
  const smat<GF3D2<const CCTK_REAL>, 3> gf_ADMK{kxx, kxy, kxz, kyy, kyz, kzz};
  const GF3D2<const CCTK_REAL> &gf_ADMalpha = alp;
  const vec<GF3D2<const CCTK_REAL>, 3> gf_ADMbeta{betax, betay, betaz};

  // Output grid functions
  const smat<GF3D2<CCTK_REAL>, 3> gf_gamt{gammatxx, gammatxy, gammatxz,
                                          gammatyy, gammatyz, gammatzz};
  const GF3D2<CCTK_REAL> &gf_exKh = Kh;
  const smat<GF3D2<CCTK_REAL>, 3> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  const GF3D2<CCTK_REAL> &gf_alpha = alphaG;
  const vec<GF3D2<CCTK_REAL>, 3> gf_beta{betaGx, betaGy, betaGz};

#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("Z4cowGPU_Initial1::initial1");
#endif

#include "../wolfram/Z4cowGPU_initial1.hxx"

  // grid.loop_int_device<0, 0, 0>(
  //     grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
  //       // ADM variables
  //       const smat<CCTK_REAL, 3> g(
  //           [&](int i, int j) ARITH_INLINE { return gf_ADMgamma(i, j)(p.I);
  //           });
  //       const smat<CCTK_REAL, 3> K(
  //           [&](int i, int j) ARITH_INLINE { return gf_ADMexK(i, j)(p.I); });
  //       const CCTK_REAL alpha = gf_ADMalpha(p.I);
  //       const vec<CCTK_REAL, 3> beta(
  //           [&](int i) ARITH_INLINE { return gf_ADMbeta(i)(p.I); });

  //      // Calculate Z4c variables (all except Gammat)
  //      const CCTK_REAL detg = calc_det(g);
  //      const smat<CCTK_REAL, 3> gu = calc_inv(g, detg);

  //      const CCTK_REAL W = 1 / cbrt(sqrt(detg));
  //      const smat<CCTK_REAL, 3> gammat(
  //          [&](int i, int j) ARITH_INLINE { return W * W * g(i, j); });
  //      const CCTK_REAL trK = sum_symm<3>(
  //          [&](int i, int j) ARITH_INLINE { return gu(i, j) * K(i, j); });
  //      const CCTK_REAL Theta = 0;
  //      const CCTK_REAL Kh = trK - 2 * Theta;
  //      const smat<CCTK_REAL, 3> At([&](int i, int j) ARITH_INLINE {
  //        return W * W * (K(i, j) - trK / 3 * g(i, j));
  //      });

  //      // Store
  //      gf_W(p.I) = W;
  //      gf_Theta(p.I) = Theta;
  //      gf_Kh(p.I) = Kh;
  //      gf_alphaG(p.I) = alpha;
  //      for (int i = 0; i < 3; ++i) {
  //        for (int j = i; j < 3; ++j) {
  //          gf_gammat(i, j)(p.I) = gammat(i, j);
  //          gf_At(i, j)(p.I) = At(i, j);
  //        }
  //        gf_betaG(i)(p.I) = beta(i);
  //      }
  //    });

#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif
}

} // namespace Z4cowGPU
