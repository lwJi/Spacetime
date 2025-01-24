#include <cctk.h>
#include <cctk_Arguments.h>

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

#include <array>
#include <cmath>

#include "../wolfram/derivsinline.hxx"

namespace Z4cowCarpet {
using namespace std;

extern "C" void Z4cowCarpet_Initial1(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_Initial1;

  const vector<CCTK_REAL, 3> idx{1. / CCTK_DELTA_SPACE(0),
                                 1. / CCTK_DELTA_SPACE(1),
                                 1. / CCTK_DELTA_SPACE(2)};

  istart = 1;
  jstart = 1;
  kstart = 1;

  iend = cctk_lsh[0] - 1;
  jend = cctk_lsh[1] - 1;
  kend = cctk_lsh[2] - 1;

  // Input grid functions
  const array<CCTK_REAL *, 6> gf_ADMgam{gxx, gxy, gxz, gyy, gyz, gzz};
  const array<CCTK_REAL *, 6> gf_ADMK{kxx, kxy, kxz, kyy, kyz, kzz};
  const CCTK_REAL *gf_ADMalpha = alp;
  const array<CCTK_REAL *, 3> gf_ADMbeta{betax, betay, betaz};

  // Output grid functions
  const array<CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                      gammatyy, gammatyz, gammatzz};
  const CCTK_REAL *gf_exKh = Kh;
  const array<CCTK_REAL *, 6> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  const CCTK_REAL *gf_alpha = alphaG;
  const array<CCTK_REAL *, 3> gf_beta{betaGx, betaGy, betaGz};

#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("Z4cowCarpet_Initial1::initial1");
#endif

#include "../wolfram/Z4cowCarpet_initial1.hxx"

#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif
}

} // namespace Z4cowCarpet
