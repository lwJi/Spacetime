/* Z4cow_precalc_derivs.hxx */
/* Produced with Mathematica */

#ifndef Z4COW_PRECALC_DERIVS_HXX
#define Z4COW_PRECALC_DERIVS_HXX

const auto fd_1st = [&] (T *gf, int i, int j, int k, int dir) inline {
  const int m2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), j + (dir == 3 ? -2 : 0));
  const int m1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), j + (dir == 3 ? -1 : 0));
  const int p1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), j + (dir == 3 ? 1 : 0));
  const int p2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), j + (dir == 3 ? 2 : 0));
  return
    ((-8*gf[m1] + gf[m2] + 8*gf[p1] - gf[p2])*idx[-1 + dir])/12.;
};

for (k=kstart; k<kend; k++) {
  for (j=jstart; j<jend; j++) {
    for (i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);

dW1 = fd_1st(W, i, j, k, 1);
dW2 = fd_1st(W, i, j, k, 2);
dW3 = fd_1st(W, i, j, k, 3);
dgamt111 = fd_1st(gamt11, i, j, k, 1);
dgamt112 = fd_1st(gamt12, i, j, k, 1);
dgamt113 = fd_1st(gamt13, i, j, k, 1);
dgamt122 = fd_1st(gamt22, i, j, k, 1);
dgamt123 = fd_1st(gamt23, i, j, k, 1);
dgamt133 = fd_1st(gamt33, i, j, k, 1);
dgamt211 = fd_1st(gamt11, i, j, k, 2);
dgamt212 = fd_1st(gamt12, i, j, k, 2);
dgamt213 = fd_1st(gamt13, i, j, k, 2);
dgamt222 = fd_1st(gamt22, i, j, k, 2);
dgamt223 = fd_1st(gamt23, i, j, k, 2);
dgamt233 = fd_1st(gamt33, i, j, k, 2);
dgamt311 = fd_1st(gamt11, i, j, k, 3);
dgamt312 = fd_1st(gamt12, i, j, k, 3);
dgamt313 = fd_1st(gamt13, i, j, k, 3);
dgamt322 = fd_1st(gamt22, i, j, k, 3);
dgamt323 = fd_1st(gamt23, i, j, k, 3);
dgamt333 = fd_1st(gamt33, i, j, k, 3);
dexKh1 = fd_1st(exKh, i, j, k, 1);
dexKh2 = fd_1st(exKh, i, j, k, 2);
dexKh3 = fd_1st(exKh, i, j, k, 3);
dexAt111 = fd_1st(exAt11, i, j, k, 1);
dexAt112 = fd_1st(exAt12, i, j, k, 1);
dexAt113 = fd_1st(exAt13, i, j, k, 1);
dexAt122 = fd_1st(exAt22, i, j, k, 1);
dexAt123 = fd_1st(exAt23, i, j, k, 1);
dexAt133 = fd_1st(exAt33, i, j, k, 1);
dexAt211 = fd_1st(exAt11, i, j, k, 2);
dexAt212 = fd_1st(exAt12, i, j, k, 2);
dexAt213 = fd_1st(exAt13, i, j, k, 2);
dexAt222 = fd_1st(exAt22, i, j, k, 2);
dexAt223 = fd_1st(exAt23, i, j, k, 2);
dexAt233 = fd_1st(exAt33, i, j, k, 2);
dexAt311 = fd_1st(exAt11, i, j, k, 3);
dexAt312 = fd_1st(exAt12, i, j, k, 3);
dexAt313 = fd_1st(exAt13, i, j, k, 3);
dexAt322 = fd_1st(exAt22, i, j, k, 3);
dexAt323 = fd_1st(exAt23, i, j, k, 3);
dexAt333 = fd_1st(exAt33, i, j, k, 3);
dtrGt11 = fd_1st(trGt1, i, j, k, 1);
dtrGt12 = fd_1st(trGt2, i, j, k, 1);
dtrGt13 = fd_1st(trGt3, i, j, k, 1);
dtrGt21 = fd_1st(trGt1, i, j, k, 2);
dtrGt22 = fd_1st(trGt2, i, j, k, 2);
dtrGt23 = fd_1st(trGt3, i, j, k, 2);
dtrGt31 = fd_1st(trGt1, i, j, k, 3);
dtrGt32 = fd_1st(trGt2, i, j, k, 3);
dtrGt33 = fd_1st(trGt3, i, j, k, 3);
dTheta1 = fd_1st(Theta, i, j, k, 1);
dTheta2 = fd_1st(Theta, i, j, k, 2);
dTheta3 = fd_1st(Theta, i, j, k, 3);
dalpha1 = fd_1st(alpha, i, j, k, 1);
dalpha2 = fd_1st(alpha, i, j, k, 2);
dalpha3 = fd_1st(alpha, i, j, k, 3);
dbeta11 = fd_1st(beta1, i, j, k, 1);
dbeta12 = fd_1st(beta2, i, j, k, 1);
dbeta13 = fd_1st(beta3, i, j, k, 1);
dbeta21 = fd_1st(beta1, i, j, k, 2);
dbeta22 = fd_1st(beta2, i, j, k, 2);
dbeta23 = fd_1st(beta3, i, j, k, 2);
dbeta31 = fd_1st(beta1, i, j, k, 3);
dbeta32 = fd_1st(beta2, i, j, k, 3);
dbeta33 = fd_1st(beta3, i, j, k, 3);

    }
  }
}

#endif // #ifndef Z4COW_PRECALC_DERIVS_HXX

/* Z4cow_precalc_derivs.hxx */
