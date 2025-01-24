#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#ifdef __CUDACC__
// Disable CCTK_DEBUG since the debug information takes too much
// parameter space to launch the kernels
#ifdef CCTK_DEBUG
#undef CCTK_DEBUG
#endif
#endif

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

namespace Z4cowCarpet {
using namespace std;

void Z4cowCarpet_SelectBoundConds(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowCarpet_SelectBoundConds;
  DECLARE_CCTK_PARAMETERS;

  int ierr = -1;

  /* Uses all default arguments, so invalid table handle -1 can be passed */
  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::W", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::W!");

  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::gamma_tilde", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::gamma_tilde!");

  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::K_hat", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::K_hat!");

  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::A_tilde", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::A_tilde!");

  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::Gam_tilde", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::Gam_tilde!");

  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::Theta", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::Theta!");

  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::alphaG", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::alphaG!");

  ierr = Boundary_SelectGroupForBC(cctkGH, CCTK_ALL_FACES, 1, -1,
                                   "Z4cowCarpet::betaG", bound);
  if (ierr < 0)
    CCTK_ERROR("Failed to register bound BC for Z4cowCarpet::betaG!");

  return;
}

} // namespace Z4cowCarpet
