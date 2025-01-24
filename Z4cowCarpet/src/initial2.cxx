#include <cctk.h>
#include <cctk_Arguments.h>

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

#include "../wolfram/derivsinline.hxx"

namespace Z4cowCarpet {

extern "C" void Z4cowCarpet_Initial2(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_Z4cowCarpet_Initial2;
  DECLARE_CCTK_PARAMETERS;

  // Input grid functions
  const array<CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
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
