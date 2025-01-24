#include <cctk.h>
#include <cctk_Arguments.h>

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

#include <array>

#include "../wolfram/derivsinline.hxx"

namespace Z4cowCarpet {
using namespace std;

extern "C" void Z4cowCarpet_Initial2(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_Initial2;

  const array<CCTK_REAL, 3> idx{1. / CCTK_DELTA_SPACE(0),
                                1. / CCTK_DELTA_SPACE(1),
                                1. / CCTK_DELTA_SPACE(2)};

  const int istart = 1;
  const int jstart = 1;
  const int kstart = 1;

  const int iend = cctk_lsh[0] - 1;
  const int jend = cctk_lsh[1] - 1;
  const int kend = cctk_lsh[2] - 1;

  // Input grid functions
  const array<const CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                            gammatyy, gammatyz, gammatzz};

  // Output grid functions
  const array<CCTK_REAL *, 3> gf_trGt{Gamtx, Gamty, Gamtz};

#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("Z4cowCarpet_Initial2::initial2");
#endif

#include "../wolfram/Z4cowCarpet_initial2.hxx"

#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif
}

} // namespace Z4cowCarpet
