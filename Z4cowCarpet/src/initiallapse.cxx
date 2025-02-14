#include <cctk.h>
#include <cctk_Arguments.h>

namespace Z4cowCarpet {

extern "C" void Z4cowCarpet_InitialLapse(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_InitialLapse;

  const int istart = cctk_nghostzones[0];
  const int jstart = cctk_nghostzones[1];
  const int kstart = cctk_nghostzones[2];

  const int iend = cctk_lsh[0] - cctk_nghostzones[0];
  const int jend = cctk_lsh[1] - cctk_nghostzones[1];
  const int kend = cctk_lsh[2] - cctk_nghostzones[2];

#pragma omp parallel for collapse(3)
  for (int k = kstart; k < kend; k++) {
    for (int j = jstart; j < jend; j++) {
      for (int i = istart; i < iend; i++) {
        const int ijk = CCTK_GFINDEX3D(cctkGH, i, j, k);

        alphaG[ijk] = W[ijk];
      }
    }
  }
}

} // namespace Z4cowCarpet
