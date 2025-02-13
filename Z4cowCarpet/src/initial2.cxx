#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#include <array>
#include <cmath>

#include "../wolfram/derivsinline.hxx"
#include "../wolfram/powerinline.hxx"

namespace Z4cowCarpet {
using namespace std;

extern "C" void Z4cowCarpet_Initial2(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_Initial2;
  DECLARE_CCTK_PARAMETERS;

  const array<CCTK_REAL, 3> invDxyz{1. / CCTK_DELTA_SPACE(0),
                                    1. / CCTK_DELTA_SPACE(1),
                                    1. / CCTK_DELTA_SPACE(2)};

  const int istart = cctk_nghostzones[0];
  const int jstart = cctk_nghostzones[1];
  const int kstart = cctk_nghostzones[2];

  const int iend = cctk_lsh[0] - cctk_nghostzones[0];
  const int jend = cctk_lsh[1] - cctk_nghostzones[1];
  const int kend = cctk_lsh[2] - cctk_nghostzones[2];

  // Input grid functions
  const array<const CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                            gammatyy, gammatyz, gammatzz};

  // Output grid functions
  const array<CCTK_REAL *, 3> gf_trGt{Gamtx, Gamty, Gamtz};

  // Derivs Lambdas
#include "../wolfram/Z4cowCarpet_derivs1st.hxx"

  // Loop

#include "../wolfram/Z4cowCarpet_initial2.hxx"
}

} // namespace Z4cowCarpet
