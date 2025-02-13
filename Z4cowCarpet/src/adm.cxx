#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#include <array>
#include <cmath>

#include "../wolfram/powerinline.hxx"

namespace Z4cowCarpet {
using namespace std;

extern "C" void Z4cowCarpet_ADM(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_ADM;
  DECLARE_CCTK_PARAMETERS;

  const int istart = cctk_nghostzones[0];
  const int jstart = cctk_nghostzones[1];
  const int kstart = cctk_nghostzones[2];

  const int iend = cctk_lsh[0] - cctk_nghostzones[0];
  const int jend = cctk_lsh[1] - cctk_nghostzones[1];
  const int kend = cctk_lsh[2] - cctk_nghostzones[2];

  // Input grid functions
  const array<const CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                            gammatyy, gammatyz, gammatzz};
  const CCTK_REAL *gf_exKh = Kh;
  const array<const CCTK_REAL *, 6> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  const CCTK_REAL *gf_alpha = alphaG;
  const array<const CCTK_REAL *, 3> gf_beta{betaGx, betaGy, betaGz};

  // Output grid functions
  const array<CCTK_REAL *, 6> gf_ADMgam{gxx, gxy, gxz, gyy, gyz, gzz};
  const array<CCTK_REAL *, 6> gf_ADMK{kxx, kxy, kxz, kyy, kyz, kzz};
  CCTK_REAL *gf_ADMalpha = alp;
  const array<CCTK_REAL *, 3> gf_ADMbeta{betax, betay, betaz};

  // Loop
#include "../wolfram/Z4cowCarpet_set_ADM.hxx"
}

} // namespace Z4cowCarpet
