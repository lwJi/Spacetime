/* Z4cowCarpet_applydiss.hxx */
/* Produced with Generato */

#ifndef Z4COWCARPET_APPLYDISS_HXX
#define Z4COWCARPET_APPLYDISS_HXX

const auto applydiss = [&](const CCTK_REAL *gf_, CCTK_REAL *gf_rhs_) {
switch (diss_order) {
case 3: {
  #pragma omp parallel for collapse(3)
  for (int k=kstart; k<kend; k++) {
  for (int j=jstart; j<jend; j++) {
  for (int i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<2>(cctkGH, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
  }
  }
  }
  break;
}
case 5: {
  #pragma omp parallel for collapse(3)
  for (int k=kstart; k<kend; k++) {
  for (int j=jstart; j<jend; j++) {
  for (int i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<4>(cctkGH, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
  }
  }
  }
  break;
}
case 7: {
  #pragma omp parallel for collapse(3)
  for (int k=kstart; k<kend; k++) {
  for (int j=jstart; j<jend; j++) {
  for (int i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<6>(cctkGH, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
  }
  }
  }
  break;
}
case 9: {
  #pragma omp parallel for collapse(3)
  for (int k=kstart; k<kend; k++) {
  for (int j=jstart; j<jend; j++) {
  for (int i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<8>(cctkGH, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
  }
  }
  }
  break;
}
default:
  assert(0);
}
};


#endif // #ifndef Z4COWCARPET_APPLYDISS_HXX

/* Z4cowCarpet_applydiss.hxx */
