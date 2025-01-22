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

dW1[ijk] = fd_1st(W, i, j, k, 1);
dW2[ijk] = fd_1st(W, i, j, k, 2);
dW3[ijk] = fd_1st(W, i, j, k, 3);
dgamt111[ijk] = fd_1st(gamt11, i, j, k, 1);
dgamt112[ijk] = fd_1st(gamt12, i, j, k, 1);
dgamt113[ijk] = fd_1st(gamt13, i, j, k, 1);
dgamt122[ijk] = fd_1st(gamt22, i, j, k, 1);
dgamt123[ijk] = fd_1st(gamt23, i, j, k, 1);
dgamt133[ijk] = fd_1st(gamt33, i, j, k, 1);
dgamt211[ijk] = fd_1st(gamt11, i, j, k, 2);
dgamt212[ijk] = fd_1st(gamt12, i, j, k, 2);
dgamt213[ijk] = fd_1st(gamt13, i, j, k, 2);
dgamt222[ijk] = fd_1st(gamt22, i, j, k, 2);
dgamt223[ijk] = fd_1st(gamt23, i, j, k, 2);
dgamt233[ijk] = fd_1st(gamt33, i, j, k, 2);
dgamt311[ijk] = fd_1st(gamt11, i, j, k, 3);
dgamt312[ijk] = fd_1st(gamt12, i, j, k, 3);
dgamt313[ijk] = fd_1st(gamt13, i, j, k, 3);
dgamt322[ijk] = fd_1st(gamt22, i, j, k, 3);
dgamt323[ijk] = fd_1st(gamt23, i, j, k, 3);
dgamt333[ijk] = fd_1st(gamt33, i, j, k, 3);
dexKh1[ijk] = fd_1st(exKh, i, j, k, 1);
dexKh2[ijk] = fd_1st(exKh, i, j, k, 2);
dexKh3[ijk] = fd_1st(exKh, i, j, k, 3);
dexAt111[ijk] = fd_1st(exAt11, i, j, k, 1);
dexAt112[ijk] = fd_1st(exAt12, i, j, k, 1);
dexAt113[ijk] = fd_1st(exAt13, i, j, k, 1);
dexAt122[ijk] = fd_1st(exAt22, i, j, k, 1);
dexAt123[ijk] = fd_1st(exAt23, i, j, k, 1);
dexAt133[ijk] = fd_1st(exAt33, i, j, k, 1);
dexAt211[ijk] = fd_1st(exAt11, i, j, k, 2);
dexAt212[ijk] = fd_1st(exAt12, i, j, k, 2);
dexAt213[ijk] = fd_1st(exAt13, i, j, k, 2);
dexAt222[ijk] = fd_1st(exAt22, i, j, k, 2);
dexAt223[ijk] = fd_1st(exAt23, i, j, k, 2);
dexAt233[ijk] = fd_1st(exAt33, i, j, k, 2);
dexAt311[ijk] = fd_1st(exAt11, i, j, k, 3);
dexAt312[ijk] = fd_1st(exAt12, i, j, k, 3);
dexAt313[ijk] = fd_1st(exAt13, i, j, k, 3);
dexAt322[ijk] = fd_1st(exAt22, i, j, k, 3);
dexAt323[ijk] = fd_1st(exAt23, i, j, k, 3);
dexAt333[ijk] = fd_1st(exAt33, i, j, k, 3);
dtrGt11[ijk] = fd_1st(trGt1, i, j, k, 1);
dtrGt12[ijk] = fd_1st(trGt2, i, j, k, 1);
dtrGt13[ijk] = fd_1st(trGt3, i, j, k, 1);
dtrGt21[ijk] = fd_1st(trGt1, i, j, k, 2);
dtrGt22[ijk] = fd_1st(trGt2, i, j, k, 2);
dtrGt23[ijk] = fd_1st(trGt3, i, j, k, 2);
dtrGt31[ijk] = fd_1st(trGt1, i, j, k, 3);
dtrGt32[ijk] = fd_1st(trGt2, i, j, k, 3);
dtrGt33[ijk] = fd_1st(trGt3, i, j, k, 3);
dTheta1[ijk] = fd_1st(Theta, i, j, k, 1);
dTheta2[ijk] = fd_1st(Theta, i, j, k, 2);
dTheta3[ijk] = fd_1st(Theta, i, j, k, 3);
dalpha1[ijk] = fd_1st(alpha, i, j, k, 1);
dalpha2[ijk] = fd_1st(alpha, i, j, k, 2);
dalpha3[ijk] = fd_1st(alpha, i, j, k, 3);
dbeta11[ijk] = fd_1st(beta1, i, j, k, 1);
dbeta12[ijk] = fd_1st(beta2, i, j, k, 1);
dbeta13[ijk] = fd_1st(beta3, i, j, k, 1);
dbeta21[ijk] = fd_1st(beta1, i, j, k, 2);
dbeta22[ijk] = fd_1st(beta2, i, j, k, 2);
dbeta23[ijk] = fd_1st(beta3, i, j, k, 2);
dbeta31[ijk] = fd_1st(beta1, i, j, k, 3);
dbeta32[ijk] = fd_1st(beta2, i, j, k, 3);
dbeta33[ijk] = fd_1st(beta3, i, j, k, 3);

    }
  }
}

#endif // #ifndef Z4COW_PRECALC_DERIVS_HXX

/* Z4cow_precalc_derivs.hxx */
