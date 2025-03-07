#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

void Z4cowCarpet_NewRad(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_NewRad;
  DECLARE_CCTK_PARAMETERS;

  NewRad_Apply(cctkGH, W, W_rhs, 1.0, 1.0, 1);

  NewRad_Apply(cctkGH, gammatxx, gammatxx_rhs, 1.0, 1.0, 1);
  NewRad_Apply(cctkGH, gammatxy, gammatxy_rhs, 0.0, 1.0, 1);
  NewRad_Apply(cctkGH, gammatxz, gammatxz_rhs, 0.0, 1.0, 1);
  NewRad_Apply(cctkGH, gammatyy, gammatyy_rhs, 1.0, 1.0, 1);
  NewRad_Apply(cctkGH, gammatyz, gammatyz_rhs, 0.0, 1.0, 1);
  NewRad_Apply(cctkGH, gammatzz, gammatzz_rhs, 1.0, 1.0, 1);

  NewRad_Apply(cctkGH, Kh, Kh_rhs, 0.0, 1.0, 2);

  NewRad_Apply(cctkGH, Atxx, Atxx_rhs, 0.0, 1.0, 2);
  NewRad_Apply(cctkGH, Atxy, Atxy_rhs, 0.0, 1.0, 2);
  NewRad_Apply(cctkGH, Atxz, Atxz_rhs, 0.0, 1.0, 2);
  NewRad_Apply(cctkGH, Atyy, Atyy_rhs, 0.0, 1.0, 2);
  NewRad_Apply(cctkGH, Atyz, Atyz_rhs, 0.0, 1.0, 2);
  NewRad_Apply(cctkGH, Atzz, Atzz_rhs, 0.0, 1.0, 2);

  NewRad_Apply(cctkGH, Gamtx, Gamtx_rhs, 0.0, 1.0, 1);
  NewRad_Apply(cctkGH, Gamty, Gamty_rhs, 0.0, 1.0, 1);
  NewRad_Apply(cctkGH, Gamtz, Gamtz_rhs, 0.0, 1.0, 1);

  NewRad_Apply(cctkGH, Theta, Theta_rhs, 0.0, 1.0, 2);

  NewRad_Apply(cctkGH, alphaG, alphaG_rhs, 1.0, 1.0, 1);

  NewRad_Apply(cctkGH, betaGx, betaGx_rhs, 0.0, 1.0, 1);
  NewRad_Apply(cctkGH, betaGy, betaGy_rhs, 0.0, 1.0, 1);
  NewRad_Apply(cctkGH, betaGz, betaGz_rhs, 0.0, 1.0, 1);

  return;
}
