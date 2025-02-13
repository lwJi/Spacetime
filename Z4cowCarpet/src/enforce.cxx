#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#include <array>
#include <cmath>

#include "../wolfram/powerinline.hxx"

namespace Z4cowCarpet {
using namespace std;

extern "C" void Z4cowCarpet_Enforce(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_Enforce;
  DECLARE_CCTK_PARAMETERS;

  const int istart = cctk_nghostzones[0];
  const int jstart = cctk_nghostzones[1];
  const int kstart = cctk_nghostzones[2];

  const int iend = cctk_lsh[0] - cctk_nghostzones[0];
  const int jend = cctk_lsh[1] - cctk_nghostzones[1];
  const int kend = cctk_lsh[2] - cctk_nghostzones[2];

  // Output grid functions
  const array<CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                      gammatyy, gammatyz, gammatzz};
  const array<CCTK_REAL *, 6> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  CCTK_REAL *gf_alpha = alphaG;

  // Parameters
  const CCTK_REAL cWfloor = W_floor;
  const CCTK_REAL calphafloor = alphaG_floor;

  // Loop
#include "../wolfram/Z4cowCarpet_enforce.hxx"
}

} // namespace Z4cowCarpet
