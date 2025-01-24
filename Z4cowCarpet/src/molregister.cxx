#include "cctk.h"
#include "cctk_Arguments.h"
#include "cctk_Parameters.h"

extern "C" void Z4cowCarpet_RegisterVars(CCTK_ARGUMENTS)
{
  DECLARE_CCTK_ARGUMENTS;
  
  CCTK_INT ierr CCTK_ATTRIBUTE_UNUSED = 0;
  /* Register all the evolved grid functions with MoL */
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::W"),  CCTK_VarIndex("Z4cowCarpet::W_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::gammatxx"),  CCTK_VarIndex("Z4cowCarpet::gammatxx_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::gammatxy"),  CCTK_VarIndex("Z4cowCarpet::gammatxy_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::gammatxz"),  CCTK_VarIndex("Z4cowCarpet::gammatxz_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::gammatyy"),  CCTK_VarIndex("Z4cowCarpet::gammatyy_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::gammatyz"),  CCTK_VarIndex("Z4cowCarpet::gammatyz_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::gammatzz"),  CCTK_VarIndex("Z4cowCarpet::gammatzz_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Kh"),  CCTK_VarIndex("Z4cowCarpet::Kh_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Atxx"),  CCTK_VarIndex("Z4cowCarpet::Atxx_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Atxy"),  CCTK_VarIndex("Z4cowCarpet::Atxy_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Atxz"),  CCTK_VarIndex("Z4cowCarpet::Atxz_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Atyy"),  CCTK_VarIndex("Z4cowCarpet::Atyy_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Atyz"),  CCTK_VarIndex("Z4cowCarpet::Atyz_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Atzz"),  CCTK_VarIndex("Z4cowCarpet::Atzz_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Gamtx"),  CCTK_VarIndex("Z4cowCarpet::Gamtx_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Gamty"),  CCTK_VarIndex("Z4cowCarpet::Gamty_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Gamtz"),  CCTK_VarIndex("Z4cowCarpet::Gamtz_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::Theta"),  CCTK_VarIndex("Z4cowCarpet::Theta_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::alphaG"),  CCTK_VarIndex("Z4cowCarpet::alphaG_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::betaGx"),  CCTK_VarIndex("Z4cowCarpet::betaGx_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::betaGy"),  CCTK_VarIndex("Z4cowCarpet::betaGy_rhs"));
  ierr += MoLRegisterEvolved(CCTK_VarIndex("Z4cowCarpet::betaGz"),  CCTK_VarIndex("Z4cowCarpet::betaGz_rhs"));
  /* Register all the evolved Array functions with MoL */
  return;
}
