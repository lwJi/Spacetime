#include <cctk.h>
#include <cctk_Arguments.h>

#include <array>
#include <cmath>

#include "../wolfram/powerinline.hxx"

namespace Z4cowCarpet {
using namespace std;

extern "C" void Z4cowCarpet_Initial1(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_Initial1;

  const int istart = 0;
  const int jstart = 0;
  const int kstart = 0;

  const int iend = cctk_lsh[0];
  const int jend = cctk_lsh[1];
  const int kend = cctk_lsh[2];

  // Input grid functions
  const array<const CCTK_REAL *, 6> gf_ADMgam{gxx, gxy, gxz, gyy, gyz, gzz};
  const array<const CCTK_REAL *, 6> gf_ADMK{kxx, kxy, kxz, kyy, kyz, kzz};
  const CCTK_REAL *gf_ADMalpha = alp;
  const array<const CCTK_REAL *, 3> gf_ADMbeta{betax, betay, betaz};

  // Output grid functions
  const array<CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                      gammatyy, gammatyz, gammatzz};
  CCTK_REAL *gf_exKh = Kh;
  const array<CCTK_REAL *, 6> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  const array<CCTK_REAL *, 3> gf_trGt{Gamtx, Gamty, Gamtz};
  CCTK_REAL *gf_alpha = alphaG;
  const array<CCTK_REAL *, 3> gf_beta{betaGx, betaGy, betaGz};

  // Loop

#include "../wolfram/Z4cowCarpet_initial1.hxx"
}

} // namespace Z4cowCarpet
