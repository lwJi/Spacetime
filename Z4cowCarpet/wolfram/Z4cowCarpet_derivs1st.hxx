/* Z4cowCarpet_derivs1st.hxx */
/* Produced with Generato */

#ifndef Z4COWCARPET_DERIVS1ST_HXX
#define Z4COWCARPET_DERIVS1ST_HXX

const auto calcderivs1_1 =
    [=] (const CCTK_REAL *gf_, int i, int j, int k)
        CCTK_ATTRIBUTE_ALWAYS_INLINE {
switch (deriv_order) {
case 2: {
  return fd_1_o2<1>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 4: {
  return fd_1_o4<1>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 6: {
  return fd_1_o6<1>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 8: {
  return fd_1_o8<1>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
default:
  assert(0);
}
};

const auto calcderivs1_2 =
    [=] (const CCTK_REAL *gf_, int i, int j, int k)
        CCTK_ATTRIBUTE_ALWAYS_INLINE {
switch (deriv_order) {
case 2: {
  return fd_1_o2<2>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 4: {
  return fd_1_o4<2>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 6: {
  return fd_1_o6<2>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 8: {
  return fd_1_o8<2>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
default:
  assert(0);
}
};

const auto calcderivs1_3 =
    [=] (const CCTK_REAL *gf_, int i, int j, int k)
        CCTK_ATTRIBUTE_ALWAYS_INLINE {
switch (deriv_order) {
case 2: {
  return fd_1_o2<3>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 4: {
  return fd_1_o4<3>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 6: {
  return fd_1_o6<3>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
case 8: {
  return fd_1_o8<3>(cctkGH, gf_, i, j, k, invDxyz);
  break;
}
default:
  assert(0);
}
};


#endif // #ifndef Z4COWCARPET_DERIVS1ST_HXX

/* Z4cowCarpet_derivs1st.hxx */
