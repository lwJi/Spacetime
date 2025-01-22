/* Z4cow_precalc_derivs.hxx */
/* Produced with Mathematica */

#ifndef Z4COW_PRECALC_DERIVS_HXX
#define Z4COW_PRECALC_DERIVS_HXX

const auto fd_1st = [&] (T *gf, int i, int j, int k, int dir) inline {
  const int ijkm2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), j + (dir == 3 ? -2 : 0));
  const int ijkm1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), j + (dir == 3 ? -1 : 0));
  const int ijkp1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), j + (dir == 3 ? 1 : 0));
  const int ijkp2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), j + (dir == 3 ? 2 : 0));
  return
    ((-2*gf[ijkm1])/3. + gf[ijkm2]/12. + (2*gf[ijkp1])/3. - gf[ijkp2]/12.)*idx[-1 + dir];
};

for (k=kstart; k<kend; k++) {
  for (j=jstart; j<jend; j++) {
    for (i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);

const auto dW1 = fd_1st(W, i, j, k, 1);
const auto dW2 = fd_1st(W, i, j, k, 2);
const auto dW3 = fd_1st(W, i, j, k, 3);
const auto dgamt111 = fd_1st(gamt11, i, j, k, 1);
const auto dgamt112 = fd_1st(gamt12, i, j, k, 1);
const auto dgamt113 = fd_1st(gamt13, i, j, k, 1);
const auto dgamt122 = fd_1st(gamt22, i, j, k, 1);
const auto dgamt123 = fd_1st(gamt23, i, j, k, 1);
const auto dgamt133 = fd_1st(gamt33, i, j, k, 1);
const auto dgamt211 = fd_1st(gamt11, i, j, k, 2);
const auto dgamt212 = fd_1st(gamt12, i, j, k, 2);
const auto dgamt213 = fd_1st(gamt13, i, j, k, 2);
const auto dgamt222 = fd_1st(gamt22, i, j, k, 2);
const auto dgamt223 = fd_1st(gamt23, i, j, k, 2);
const auto dgamt233 = fd_1st(gamt33, i, j, k, 2);
const auto dgamt311 = fd_1st(gamt11, i, j, k, 3);
const auto dgamt312 = fd_1st(gamt12, i, j, k, 3);
const auto dgamt313 = fd_1st(gamt13, i, j, k, 3);
const auto dgamt322 = fd_1st(gamt22, i, j, k, 3);
const auto dgamt323 = fd_1st(gamt23, i, j, k, 3);
const auto dgamt333 = fd_1st(gamt33, i, j, k, 3);
const auto dalpha1 = fd_1st(alpha, i, j, k, 1);
const auto dalpha2 = fd_1st(alpha, i, j, k, 2);
const auto dalpha3 = fd_1st(alpha, i, j, k, 3);
const auto dbeta11 = fd_1st(beta1, i, j, k, 1);
const auto dbeta12 = fd_1st(beta2, i, j, k, 1);
const auto dbeta13 = fd_1st(beta3, i, j, k, 1);
const auto dbeta21 = fd_1st(beta1, i, j, k, 2);
const auto dbeta22 = fd_1st(beta2, i, j, k, 2);
const auto dbeta23 = fd_1st(beta3, i, j, k, 2);
const auto dbeta31 = fd_1st(beta1, i, j, k, 3);
const auto dbeta32 = fd_1st(beta2, i, j, k, 3);
const auto dbeta33 = fd_1st(beta3, i, j, k, 3);

    }
  }
}

#endif // #ifndef Z4COW_PRECALC_DERIVS_HXX

/* Z4cow_precalc_derivs.hxx */
