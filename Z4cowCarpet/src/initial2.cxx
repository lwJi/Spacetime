#include <derivs.hxx>
#include <loop_device.hxx>
#include <simd.hxx>

#include <cctk.h>
#include <cctk_Arguments.h>

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

#include "../wolfram/derivsinline.hxx"

namespace Z4cowGPU {
using namespace Arith;
using namespace Loop;

// Gammal_abc
template <typename T, int D>
ARITH_INLINE ARITH_DEVICE ARITH_HOST constexpr vec<smat<T, D>, D>
calc_gammal(const smat<vec<T, D>, D> &dg) {
  return vec<smat<T, D>, D>([&](int a) ARITH_INLINE {
    return smat<T, D>([&](int b, int c) ARITH_INLINE {
      return (dg(a, b)(c) + dg(a, c)(b) - dg(b, c)(a)) / 2;
    });
  });
}

// Gamma^a_bc
template <typename T, int D>
ARITH_INLINE ARITH_DEVICE ARITH_HOST constexpr vec<smat<T, D>, D>
calc_gamma(const smat<T, D> &gu, const vec<smat<T, D>, D> &Gammal) {
  return vec<smat<T, D>, D>([&](int a) ARITH_INLINE {
    return smat<T, D>([&](int b, int c) ARITH_INLINE {
      return sum<D>([&](int x)
                        ARITH_INLINE { return gu(a, x) * Gammal(x)(b, c); });
    });
  });
}

extern "C" void Z4cowGPU_Initial2(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_Z4cowGPU_Initial2;
  DECLARE_CCTK_PARAMETERS;

  // Input grid functions
  const smat<GF3D2<const CCTK_REAL>, 3> gf_gamt{gammatxx, gammatxy, gammatxz,
                                                gammatyy, gammatyz, gammatzz};

  // Output grid functions
  const vec<GF3D2<CCTK_REAL>, 3> gf_trGt{Gamtx, Gamty, Gamtz};

#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("Z4cowGPU_Initial2::initial2");
#endif

#include "../wolfram/Z4cowGPU_initial2.hxx"

  // grid.loop_int_device<0, 0, 0>(
  //     grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
  //       // Load
  //       const smat<CCTK_REAL, 3> gammat(
  //           [&](int i, int j) ARITH_INLINE { return gf_gammat(i, j)(p.I); });

  //      // Calculate Z4c variables (only Gamt)
  //      const smat<CCTK_REAL, 3> gammatu = calc_inv(gammat, CCTK_REAL(1));

  //      const smat<vec<CCTK_REAL, 3>, 3> dgammat([&](int i, int j) {
  //        return vec<CCTK_REAL, 3>{fd_1st<1>(gf_gammat(i, j), p),
  //                                 fd_1st<2>(gf_gammat(i, j), p),
  //                                 fd_1st<3>(gf_gammat(i, j), p)};
  //      });

  //      const vec<smat<CCTK_REAL, 3>, 3> Gammatl = calc_gammal(dgammat);
  //      const vec<smat<CCTK_REAL, 3>, 3> Gammat = calc_gamma(gammatu,
  //      Gammatl); const vec<CCTK_REAL, 3> Gamt([&](int a) ARITH_INLINE {
  //        return sum_symm<3>([&](int x, int y) ARITH_INLINE {
  //          return gammatu(x, y) * Gammat(a)(x, y);
  //        });
  //      });

  //      // Store
  //      for (int i; i < 3; ++i) {
  //        gf_Gamt(i)(p.I) = Gamt(i);
  //      }
  //    });
#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif
}

} // namespace Z4cowGPU
