/* Z4cow_set_rhs.hxx */
/* Produced with Mathematica */

#ifndef Z4COW_SET_RHS_HXX
#define Z4COW_SET_RHS_HXX

const auto fd_1st = [&] (T *gf, int i, int j, int k, int dir) inline {
  const int m2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), k + (dir == 3 ? -2 : 0));
  const int m1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), k + (dir == 3 ? -1 : 0));
  const int p1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), k + (dir == 3 ? 1 : 0));
  const int p2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), k + (dir == 3 ? 2 : 0));
  return
    ((-8*gf[m1] + gf[m2] + 8*gf[p1] - gf[p2])*idx[-1 + dir])/12.;
};

const auto fd_2nd = [&] (T *gf, int i, int j, int k, int dir) inline {
  const int m2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), k + (dir == 3 ? -2 : 0));
  const int m1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), k + (dir == 3 ? -1 : 0));
  const int c0 = CCTK_GFINDEX3D(cctkGH, i, j, k);
  const int p1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), k + (dir == 3 ? 1 : 0));
  const int p2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), k + (dir == 3 ? 2 : 0));
  return
    ((-30*gf[c0] + 16*gf[m1] - gf[m2] + 16*gf[p1] - gf[p2])*Power(idx[-1 + dir],2))/12.;
};

const auto fd_2nd_mix = [&] (T *gf, int i, int j, int k, int dir1, int dir2) inline {
  const int m2m2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : -2), j + (dir1 != 2 && dir2 != 2 ? 0 : -2), k + (dir1 != 3 && dir2 != 3 ? 0 : -2));
  const int m2m1
  const int m2p1
  const int m2p2
  const int m1m2
  const int m1m1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : -1), j + (dir1 != 2 && dir2 != 2 ? 0 : -1), k + (dir1 != 3 && dir2 != 3 ? 0 : -1));
  const int m1p1
  const int m1p2
  const int p1m2
  const int p1m1
  const int p1p1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : 1), j + (dir1 != 2 && dir2 != 2 ? 0 : 1), k + (dir1 != 3 && dir2 != 3 ? 0 : 1));
  const int p1p2
  const int p2m2
  const int p2m1
  const int p2p1
  const int p2p2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : 2), j + (dir1 != 2 && dir2 != 2 ? 0 : 2), k + (dir1 != 3 && dir2 != 3 ? 0 : 2));
  return
    ((64*gf[m1m1] - 8*gf[m1m2] - 64*gf[m1p1] + 8*gf[m1p2] - 8*gf[m2m1] + gf[m2m2] + 8*gf[m2p1] - gf[m2p2] - 64*gf[p1m1] + 8*gf[p1m2] + 64*gf[p1p1] - 8*gf[p1p2] + 8*gf[p2m1] - gf[p2m2] - 8*gf[p2p1] + gf[p2p2])*idx[-1 + dir1]*idx[-1 + dir2])/144.;
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
const auto dexKh1 = fd_1st(exKh, i, j, k, 1);
const auto dexKh2 = fd_1st(exKh, i, j, k, 2);
const auto dexKh3 = fd_1st(exKh, i, j, k, 3);
const auto dexAt111 = fd_1st(exAt11, i, j, k, 1);
const auto dexAt112 = fd_1st(exAt12, i, j, k, 1);
const auto dexAt113 = fd_1st(exAt13, i, j, k, 1);
const auto dexAt122 = fd_1st(exAt22, i, j, k, 1);
const auto dexAt123 = fd_1st(exAt23, i, j, k, 1);
const auto dexAt133 = fd_1st(exAt33, i, j, k, 1);
const auto dexAt211 = fd_1st(exAt11, i, j, k, 2);
const auto dexAt212 = fd_1st(exAt12, i, j, k, 2);
const auto dexAt213 = fd_1st(exAt13, i, j, k, 2);
const auto dexAt222 = fd_1st(exAt22, i, j, k, 2);
const auto dexAt223 = fd_1st(exAt23, i, j, k, 2);
const auto dexAt233 = fd_1st(exAt33, i, j, k, 2);
const auto dexAt311 = fd_1st(exAt11, i, j, k, 3);
const auto dexAt312 = fd_1st(exAt12, i, j, k, 3);
const auto dexAt313 = fd_1st(exAt13, i, j, k, 3);
const auto dexAt322 = fd_1st(exAt22, i, j, k, 3);
const auto dexAt323 = fd_1st(exAt23, i, j, k, 3);
const auto dexAt333 = fd_1st(exAt33, i, j, k, 3);
const auto dtrGt11 = fd_1st(trGt1, i, j, k, 1);
const auto dtrGt12 = fd_1st(trGt2, i, j, k, 1);
const auto dtrGt13 = fd_1st(trGt3, i, j, k, 1);
const auto dtrGt21 = fd_1st(trGt1, i, j, k, 2);
const auto dtrGt22 = fd_1st(trGt2, i, j, k, 2);
const auto dtrGt23 = fd_1st(trGt3, i, j, k, 2);
const auto dtrGt31 = fd_1st(trGt1, i, j, k, 3);
const auto dtrGt32 = fd_1st(trGt2, i, j, k, 3);
const auto dtrGt33 = fd_1st(trGt3, i, j, k, 3);
const auto dTheta1 = fd_1st(Theta, i, j, k, 1);
const auto dTheta2 = fd_1st(Theta, i, j, k, 2);
const auto dTheta3 = fd_1st(Theta, i, j, k, 3);
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
const auto ddW11 = fd_2nd(W, i, j, k, 1, 1);
const auto ddW12 = fd_2nd(W, i, j, k, 1, 2);
const auto ddW13 = fd_2nd(W, i, j, k, 1, 3);
const auto ddW22 = fd_2nd(W, i, j, k, 2, 2);
const auto ddW23 = fd_2nd(W, i, j, k, 2, 3);
const auto ddW33 = fd_2nd(W, i, j, k, 3, 3);
const auto ddgamt1111 = fd_2nd(gamt11, i, j, k, 1, 1);
const auto ddgamt1112 = fd_2nd(gamt12, i, j, k, 1, 1);
const auto ddgamt1113 = fd_2nd(gamt13, i, j, k, 1, 1);
const auto ddgamt1122 = fd_2nd(gamt22, i, j, k, 1, 1);
const auto ddgamt1123 = fd_2nd(gamt23, i, j, k, 1, 1);
const auto ddgamt1133 = fd_2nd(gamt33, i, j, k, 1, 1);
const auto ddgamt1211 = fd_2nd(gamt11, i, j, k, 1, 2);
const auto ddgamt1212 = fd_2nd(gamt12, i, j, k, 1, 2);
const auto ddgamt1213 = fd_2nd(gamt13, i, j, k, 1, 2);
const auto ddgamt1222 = fd_2nd(gamt22, i, j, k, 1, 2);
const auto ddgamt1223 = fd_2nd(gamt23, i, j, k, 1, 2);
const auto ddgamt1233 = fd_2nd(gamt33, i, j, k, 1, 2);
const auto ddgamt1311 = fd_2nd(gamt11, i, j, k, 1, 3);
const auto ddgamt1312 = fd_2nd(gamt12, i, j, k, 1, 3);
const auto ddgamt1313 = fd_2nd(gamt13, i, j, k, 1, 3);
const auto ddgamt1322 = fd_2nd(gamt22, i, j, k, 1, 3);
const auto ddgamt1323 = fd_2nd(gamt23, i, j, k, 1, 3);
const auto ddgamt1333 = fd_2nd(gamt33, i, j, k, 1, 3);
const auto ddgamt2211 = fd_2nd(gamt11, i, j, k, 2, 2);
const auto ddgamt2212 = fd_2nd(gamt12, i, j, k, 2, 2);
const auto ddgamt2213 = fd_2nd(gamt13, i, j, k, 2, 2);
const auto ddgamt2222 = fd_2nd(gamt22, i, j, k, 2, 2);
const auto ddgamt2223 = fd_2nd(gamt23, i, j, k, 2, 2);
const auto ddgamt2233 = fd_2nd(gamt33, i, j, k, 2, 2);
const auto ddgamt2311 = fd_2nd(gamt11, i, j, k, 2, 3);
const auto ddgamt2312 = fd_2nd(gamt12, i, j, k, 2, 3);
const auto ddgamt2313 = fd_2nd(gamt13, i, j, k, 2, 3);
const auto ddgamt2322 = fd_2nd(gamt22, i, j, k, 2, 3);
const auto ddgamt2323 = fd_2nd(gamt23, i, j, k, 2, 3);
const auto ddgamt2333 = fd_2nd(gamt33, i, j, k, 2, 3);
const auto ddgamt3311 = fd_2nd(gamt11, i, j, k, 3, 3);
const auto ddgamt3312 = fd_2nd(gamt12, i, j, k, 3, 3);
const auto ddgamt3313 = fd_2nd(gamt13, i, j, k, 3, 3);
const auto ddgamt3322 = fd_2nd(gamt22, i, j, k, 3, 3);
const auto ddgamt3323 = fd_2nd(gamt23, i, j, k, 3, 3);
const auto ddgamt3333 = fd_2nd(gamt33, i, j, k, 3, 3);
const auto ddalpha11 = fd_2nd(alpha, i, j, k, 1, 1);
const auto ddalpha12 = fd_2nd(alpha, i, j, k, 1, 2);
const auto ddalpha13 = fd_2nd(alpha, i, j, k, 1, 3);
const auto ddalpha22 = fd_2nd(alpha, i, j, k, 2, 2);
const auto ddalpha23 = fd_2nd(alpha, i, j, k, 2, 3);
const auto ddalpha33 = fd_2nd(alpha, i, j, k, 3, 3);
const auto ddbeta111 = fd_2nd(beta1, i, j, k, 1, 1);
const auto ddbeta112 = fd_2nd(beta2, i, j, k, 1, 1);
const auto ddbeta113 = fd_2nd(beta3, i, j, k, 1, 1);
const auto ddbeta121 = fd_2nd(beta1, i, j, k, 1, 2);
const auto ddbeta122 = fd_2nd(beta2, i, j, k, 1, 2);
const auto ddbeta123 = fd_2nd(beta3, i, j, k, 1, 2);
const auto ddbeta131 = fd_2nd(beta1, i, j, k, 1, 3);
const auto ddbeta132 = fd_2nd(beta2, i, j, k, 1, 3);
const auto ddbeta133 = fd_2nd(beta3, i, j, k, 1, 3);
const auto ddbeta221 = fd_2nd(beta1, i, j, k, 2, 2);
const auto ddbeta222 = fd_2nd(beta2, i, j, k, 2, 2);
const auto ddbeta223 = fd_2nd(beta3, i, j, k, 2, 2);
const auto ddbeta231 = fd_2nd(beta1, i, j, k, 2, 3);
const auto ddbeta232 = fd_2nd(beta2, i, j, k, 2, 3);
const auto ddbeta233 = fd_2nd(beta3, i, j, k, 2, 3);
const auto ddbeta331 = fd_2nd(beta1, i, j, k, 3, 3);
const auto ddbeta332 = fd_2nd(beta2, i, j, k, 3, 3);
const auto ddbeta333 = fd_2nd(beta3, i, j, k, 3, 3);

const auto
dlnW1
=
dW1/W[ijk]
;

const auto
dlnW2
=
dW2/W[ijk]
;

const auto
dlnW3
=
dW3/W[ijk]
;

const auto
invgamt11
=
-Power(gamt23[ijk],2) + gamt22[ijk]*gamt33[ijk]
;

const auto
invgamt12
=
gamt13[ijk]*gamt23[ijk] - gamt12[ijk]*gamt33[ijk]
;

const auto
invgamt13
=
-(gamt13[ijk]*gamt22[ijk]) + gamt12[ijk]*gamt23[ijk]
;

const auto
invgamt22
=
-Power(gamt13[ijk],2) + gamt11[ijk]*gamt33[ijk]
;

const auto
invgamt23
=
gamt12[ijk]*gamt13[ijk] - gamt11[ijk]*gamt23[ijk]
;

const auto
invgamt33
=
-Power(gamt12[ijk],2) + gamt11[ijk]*gamt22[ijk]
;

const auto
invgam11
=
invgamt11*Power(W[ijk],2)
;

const auto
invgam12
=
invgamt12*Power(W[ijk],2)
;

const auto
invgam13
=
invgamt13*Power(W[ijk],2)
;

const auto
invgam22
=
invgamt22*Power(W[ijk],2)
;

const auto
invgam23
=
invgamt23*Power(W[ijk],2)
;

const auto
invgam33
=
invgamt33*Power(W[ijk],2)
;

const auto
gam11
=
gamt11[ijk]/Power(W[ijk],2)
;

const auto
gam12
=
gamt12[ijk]/Power(W[ijk],2)
;

const auto
gam13
=
gamt13[ijk]/Power(W[ijk],2)
;

const auto
gam22
=
gamt22[ijk]/Power(W[ijk],2)
;

const auto
gam23
=
gamt23[ijk]/Power(W[ijk],2)
;

const auto
gam33
=
gamt33[ijk]/Power(W[ijk],2)
;

const auto
GtDDD111
=
dgamt111/2.
;

const auto
GtDDD112
=
dgamt211/2.
;

const auto
GtDDD113
=
dgamt311/2.
;

const auto
GtDDD122
=
-0.5*dgamt122 + dgamt212
;

const auto
GtDDD123
=
(-dgamt123 + dgamt213 + dgamt312)/2.
;

const auto
GtDDD133
=
-0.5*dgamt133 + dgamt313
;

const auto
GtDDD211
=
dgamt112 - dgamt211/2.
;

const auto
GtDDD212
=
dgamt122/2.
;

const auto
GtDDD213
=
(dgamt123 - dgamt213 + dgamt312)/2.
;

const auto
GtDDD222
=
dgamt222/2.
;

const auto
GtDDD223
=
dgamt322/2.
;

const auto
GtDDD233
=
-0.5*dgamt233 + dgamt323
;

const auto
GtDDD311
=
dgamt113 - dgamt311/2.
;

const auto
GtDDD312
=
(dgamt123 + dgamt213 - dgamt312)/2.
;

const auto
GtDDD313
=
dgamt133/2.
;

const auto
GtDDD322
=
dgamt223 - dgamt322/2.
;

const auto
GtDDD323
=
dgamt233/2.
;

const auto
GtDDD333
=
dgamt333/2.
;

const auto
GtDDU111
=
GtDDD111*invgamt11 + GtDDD112*invgamt12 + GtDDD113*invgamt13
;

const auto
GtDDU112
=
GtDDD111*invgamt12 + GtDDD112*invgamt22 + GtDDD113*invgamt23
;

const auto
GtDDU113
=
GtDDD111*invgamt13 + GtDDD112*invgamt23 + GtDDD113*invgamt33
;

const auto
GtDDU121
=
GtDDD112*invgamt11 + GtDDD122*invgamt12 + GtDDD123*invgamt13
;

const auto
GtDDU122
=
GtDDD112*invgamt12 + GtDDD122*invgamt22 + GtDDD123*invgamt23
;

const auto
GtDDU123
=
GtDDD112*invgamt13 + GtDDD122*invgamt23 + GtDDD123*invgamt33
;

const auto
GtDDU131
=
GtDDD113*invgamt11 + GtDDD123*invgamt12 + GtDDD133*invgamt13
;

const auto
GtDDU132
=
GtDDD113*invgamt12 + GtDDD123*invgamt22 + GtDDD133*invgamt23
;

const auto
GtDDU133
=
GtDDD113*invgamt13 + GtDDD123*invgamt23 + GtDDD133*invgamt33
;

const auto
GtDDU211
=
GtDDD211*invgamt11 + GtDDD212*invgamt12 + GtDDD213*invgamt13
;

const auto
GtDDU212
=
GtDDD211*invgamt12 + GtDDD212*invgamt22 + GtDDD213*invgamt23
;

const auto
GtDDU213
=
GtDDD211*invgamt13 + GtDDD212*invgamt23 + GtDDD213*invgamt33
;

const auto
GtDDU221
=
GtDDD212*invgamt11 + GtDDD222*invgamt12 + GtDDD223*invgamt13
;

const auto
GtDDU222
=
GtDDD212*invgamt12 + GtDDD222*invgamt22 + GtDDD223*invgamt23
;

const auto
GtDDU223
=
GtDDD212*invgamt13 + GtDDD222*invgamt23 + GtDDD223*invgamt33
;

const auto
GtDDU231
=
GtDDD213*invgamt11 + GtDDD223*invgamt12 + GtDDD233*invgamt13
;

const auto
GtDDU232
=
GtDDD213*invgamt12 + GtDDD223*invgamt22 + GtDDD233*invgamt23
;

const auto
GtDDU233
=
GtDDD213*invgamt13 + GtDDD223*invgamt23 + GtDDD233*invgamt33
;

const auto
GtDDU311
=
GtDDD311*invgamt11 + GtDDD312*invgamt12 + GtDDD313*invgamt13
;

const auto
GtDDU312
=
GtDDD311*invgamt12 + GtDDD312*invgamt22 + GtDDD313*invgamt23
;

const auto
GtDDU313
=
GtDDD311*invgamt13 + GtDDD312*invgamt23 + GtDDD313*invgamt33
;

const auto
GtDDU321
=
GtDDD312*invgamt11 + GtDDD322*invgamt12 + GtDDD323*invgamt13
;

const auto
GtDDU322
=
GtDDD312*invgamt12 + GtDDD322*invgamt22 + GtDDD323*invgamt23
;

const auto
GtDDU323
=
GtDDD312*invgamt13 + GtDDD322*invgamt23 + GtDDD323*invgamt33
;

const auto
GtDDU331
=
GtDDD313*invgamt11 + GtDDD323*invgamt12 + GtDDD333*invgamt13
;

const auto
GtDDU332
=
GtDDD313*invgamt12 + GtDDD323*invgamt22 + GtDDD333*invgamt23
;

const auto
GtDDU333
=
GtDDD313*invgamt13 + GtDDD323*invgamt23 + GtDDD333*invgamt33
;

const auto
Gt111
=
GtDDD111*invgamt11 + GtDDD211*invgamt12 + GtDDD311*invgamt13
;

const auto
Gt112
=
GtDDD112*invgamt11 + GtDDD212*invgamt12 + GtDDD312*invgamt13
;

const auto
Gt113
=
GtDDD113*invgamt11 + GtDDD213*invgamt12 + GtDDD313*invgamt13
;

const auto
Gt122
=
GtDDD122*invgamt11 + GtDDD222*invgamt12 + GtDDD322*invgamt13
;

const auto
Gt123
=
GtDDD123*invgamt11 + GtDDD223*invgamt12 + GtDDD323*invgamt13
;

const auto
Gt133
=
GtDDD133*invgamt11 + GtDDD233*invgamt12 + GtDDD333*invgamt13
;

const auto
Gt211
=
GtDDD111*invgamt12 + GtDDD211*invgamt22 + GtDDD311*invgamt23
;

const auto
Gt212
=
GtDDD112*invgamt12 + GtDDD212*invgamt22 + GtDDD312*invgamt23
;

const auto
Gt213
=
GtDDD113*invgamt12 + GtDDD213*invgamt22 + GtDDD313*invgamt23
;

const auto
Gt222
=
GtDDD122*invgamt12 + GtDDD222*invgamt22 + GtDDD322*invgamt23
;

const auto
Gt223
=
GtDDD123*invgamt12 + GtDDD223*invgamt22 + GtDDD323*invgamt23
;

const auto
Gt233
=
GtDDD133*invgamt12 + GtDDD233*invgamt22 + GtDDD333*invgamt23
;

const auto
Gt311
=
GtDDD111*invgamt13 + GtDDD211*invgamt23 + GtDDD311*invgamt33
;

const auto
Gt312
=
GtDDD112*invgamt13 + GtDDD212*invgamt23 + GtDDD312*invgamt33
;

const auto
Gt313
=
GtDDD113*invgamt13 + GtDDD213*invgamt23 + GtDDD313*invgamt33
;

const auto
Gt322
=
GtDDD122*invgamt13 + GtDDD222*invgamt23 + GtDDD322*invgamt33
;

const auto
Gt323
=
GtDDD123*invgamt13 + GtDDD223*invgamt23 + GtDDD323*invgamt33
;

const auto
Gt333
=
GtDDD133*invgamt13 + GtDDD233*invgamt23 + GtDDD333*invgamt33
;

const auto
trGtd1
=
Gt111*invgamt11 + 2*Gt112*invgamt12 + 2*Gt113*invgamt13 + Gt122*invgamt22 +
  2*Gt123*invgamt23 + Gt133*invgamt33
;

const auto
trGtd2
=
Gt211*invgamt11 + 2*Gt212*invgamt12 + 2*Gt213*invgamt13 + Gt222*invgamt22 +
  2*Gt223*invgamt23 + Gt233*invgamt33
;

const auto
trGtd3
=
Gt311*invgamt11 + 2*Gt312*invgamt12 + 2*Gt313*invgamt13 + Gt322*invgamt22 +
  2*Gt323*invgamt23 + Gt333*invgamt33
;

const auto
dgam111
=
(dgamt111 - 2*dlnW1*gamt11[ijk])/Power(W[ijk],2)
;

const auto
dgam112
=
(dgamt112 - 2*dlnW1*gamt12[ijk])/Power(W[ijk],2)
;

const auto
dgam113
=
(dgamt113 - 2*dlnW1*gamt13[ijk])/Power(W[ijk],2)
;

const auto
dgam122
=
(dgamt122 - 2*dlnW1*gamt22[ijk])/Power(W[ijk],2)
;

const auto
dgam123
=
(dgamt123 - 2*dlnW1*gamt23[ijk])/Power(W[ijk],2)
;

const auto
dgam133
=
(dgamt133 - 2*dlnW1*gamt33[ijk])/Power(W[ijk],2)
;

const auto
dgam211
=
(dgamt211 - 2*dlnW2*gamt11[ijk])/Power(W[ijk],2)
;

const auto
dgam212
=
(dgamt212 - 2*dlnW2*gamt12[ijk])/Power(W[ijk],2)
;

const auto
dgam213
=
(dgamt213 - 2*dlnW2*gamt13[ijk])/Power(W[ijk],2)
;

const auto
dgam222
=
(dgamt222 - 2*dlnW2*gamt22[ijk])/Power(W[ijk],2)
;

const auto
dgam223
=
(dgamt223 - 2*dlnW2*gamt23[ijk])/Power(W[ijk],2)
;

const auto
dgam233
=
(dgamt233 - 2*dlnW2*gamt33[ijk])/Power(W[ijk],2)
;

const auto
dgam311
=
(dgamt311 - 2*dlnW3*gamt11[ijk])/Power(W[ijk],2)
;

const auto
dgam312
=
(dgamt312 - 2*dlnW3*gamt12[ijk])/Power(W[ijk],2)
;

const auto
dgam313
=
(dgamt313 - 2*dlnW3*gamt13[ijk])/Power(W[ijk],2)
;

const auto
dgam322
=
(dgamt322 - 2*dlnW3*gamt22[ijk])/Power(W[ijk],2)
;

const auto
dgam323
=
(dgamt323 - 2*dlnW3*gamt23[ijk])/Power(W[ijk],2)
;

const auto
dgam333
=
(dgamt333 - 2*dlnW3*gamt33[ijk])/Power(W[ijk],2)
;

const auto
GamDDD111
=
dgam111/2.
;

const auto
GamDDD112
=
dgam211/2.
;

const auto
GamDDD113
=
dgam311/2.
;

const auto
GamDDD122
=
-0.5*dgam122 + dgam212
;

const auto
GamDDD123
=
(-dgam123 + dgam213 + dgam312)/2.
;

const auto
GamDDD133
=
-0.5*dgam133 + dgam313
;

const auto
GamDDD211
=
dgam112 - dgam211/2.
;

const auto
GamDDD212
=
dgam122/2.
;

const auto
GamDDD213
=
(dgam123 - dgam213 + dgam312)/2.
;

const auto
GamDDD222
=
dgam222/2.
;

const auto
GamDDD223
=
dgam322/2.
;

const auto
GamDDD233
=
-0.5*dgam233 + dgam323
;

const auto
GamDDD311
=
dgam113 - dgam311/2.
;

const auto
GamDDD312
=
(dgam123 + dgam213 - dgam312)/2.
;

const auto
GamDDD313
=
dgam133/2.
;

const auto
GamDDD322
=
dgam223 - dgam322/2.
;

const auto
GamDDD323
=
dgam233/2.
;

const auto
GamDDD333
=
dgam333/2.
;

const auto
Gam111
=
GamDDD111*invgam11 + GamDDD211*invgam12 + GamDDD311*invgam13
;

const auto
Gam112
=
GamDDD112*invgam11 + GamDDD212*invgam12 + GamDDD312*invgam13
;

const auto
Gam113
=
GamDDD113*invgam11 + GamDDD213*invgam12 + GamDDD313*invgam13
;

const auto
Gam122
=
GamDDD122*invgam11 + GamDDD222*invgam12 + GamDDD322*invgam13
;

const auto
Gam123
=
GamDDD123*invgam11 + GamDDD223*invgam12 + GamDDD323*invgam13
;

const auto
Gam133
=
GamDDD133*invgam11 + GamDDD233*invgam12 + GamDDD333*invgam13
;

const auto
Gam211
=
GamDDD111*invgam12 + GamDDD211*invgam22 + GamDDD311*invgam23
;

const auto
Gam212
=
GamDDD112*invgam12 + GamDDD212*invgam22 + GamDDD312*invgam23
;

const auto
Gam213
=
GamDDD113*invgam12 + GamDDD213*invgam22 + GamDDD313*invgam23
;

const auto
Gam222
=
GamDDD122*invgam12 + GamDDD222*invgam22 + GamDDD322*invgam23
;

const auto
Gam223
=
GamDDD123*invgam12 + GamDDD223*invgam22 + GamDDD323*invgam23
;

const auto
Gam233
=
GamDDD133*invgam12 + GamDDD233*invgam22 + GamDDD333*invgam23
;

const auto
Gam311
=
GamDDD111*invgam13 + GamDDD211*invgam23 + GamDDD311*invgam33
;

const auto
Gam312
=
GamDDD112*invgam13 + GamDDD212*invgam23 + GamDDD312*invgam33
;

const auto
Gam313
=
GamDDD113*invgam13 + GamDDD213*invgam23 + GamDDD313*invgam33
;

const auto
Gam322
=
GamDDD122*invgam13 + GamDDD222*invgam23 + GamDDD322*invgam33
;

const auto
Gam323
=
GamDDD123*invgam13 + GamDDD223*invgam23 + GamDDD323*invgam33
;

const auto
Gam333
=
GamDDD133*invgam13 + GamDDD233*invgam23 + GamDDD333*invgam33
;

const auto
exAtUU11
=
Power(invgamt11,2)*exAt11[ijk] + 2*invgamt11*invgamt12*exAt12[ijk] +
  2*invgamt11*invgamt13*exAt13[ijk] + Power(invgamt12,2)*exAt22[ijk] +
  2*invgamt12*invgamt13*exAt23[ijk] + Power(invgamt13,2)*exAt33[ijk]
;

const auto
exAtUU12
=
invgamt11*invgamt12*exAt11[ijk] +
  (Power(invgamt12,2) + invgamt11*invgamt22)*exAt12[ijk] +
  invgamt12*invgamt13*exAt13[ijk] + invgamt11*invgamt23*exAt13[ijk] +
  invgamt12*invgamt22*exAt22[ijk] + invgamt13*invgamt22*exAt23[ijk] +
  invgamt12*invgamt23*exAt23[ijk] + invgamt13*invgamt23*exAt33[ijk]
;

const auto
exAtUU13
=
invgamt11*invgamt13*exAt11[ijk] +
  (invgamt12*invgamt13 + invgamt11*invgamt23)*exAt12[ijk] +
  Power(invgamt13,2)*exAt13[ijk] + invgamt11*invgamt33*exAt13[ijk] +
  invgamt12*invgamt23*exAt22[ijk] + invgamt13*invgamt23*exAt23[ijk] +
  invgamt12*invgamt33*exAt23[ijk] + invgamt13*invgamt33*exAt33[ijk]
;

const auto
exAtUU22
=
Power(invgamt12,2)*exAt11[ijk] + 2*invgamt12*invgamt22*exAt12[ijk] +
  2*invgamt12*invgamt23*exAt13[ijk] + Power(invgamt22,2)*exAt22[ijk] +
  2*invgamt22*invgamt23*exAt23[ijk] + Power(invgamt23,2)*exAt33[ijk]
;

const auto
exAtUU23
=
invgamt12*invgamt13*exAt11[ijk] +
  (invgamt13*invgamt22 + invgamt12*invgamt23)*exAt12[ijk] +
  invgamt13*invgamt23*exAt13[ijk] + invgamt12*invgamt33*exAt13[ijk] +
  invgamt22*invgamt23*exAt22[ijk] + Power(invgamt23,2)*exAt23[ijk] +
  invgamt22*invgamt33*exAt23[ijk] + invgamt23*invgamt33*exAt33[ijk]
;

const auto
exAtUU33
=
Power(invgamt13,2)*exAt11[ijk] + 2*invgamt13*invgamt23*exAt12[ijk] +
  2*invgamt13*invgamt33*exAt13[ijk] + Power(invgamt23,2)*exAt22[ijk] +
  2*invgamt23*invgamt33*exAt23[ijk] + Power(invgamt33,2)*exAt33[ijk]
;

const auto
tDtDW11
=
ddW11 - dW1*Gt111 - dW2*Gt211 - dW3*Gt311
;

const auto
tDtDW12
=
ddW12 - dW1*Gt112 - dW2*Gt212 - dW3*Gt312
;

const auto
tDtDW13
=
ddW13 - dW1*Gt113 - dW2*Gt213 - dW3*Gt313
;

const auto
tDtDW22
=
ddW22 - dW1*Gt122 - dW2*Gt222 - dW3*Gt322
;

const auto
tDtDW23
=
ddW23 - dW1*Gt123 - dW2*Gt223 - dW3*Gt323
;

const auto
tDtDW33
=
ddW33 - dW1*Gt133 - dW2*Gt233 - dW3*Gt333
;

const auto
DDalpha11
=
ddalpha11 - dalpha1*Gam111 - dalpha2*Gam211 - dalpha3*Gam311
;

const auto
DDalpha12
=
ddalpha12 - dalpha1*Gam112 - dalpha2*Gam212 - dalpha3*Gam312
;

const auto
DDalpha13
=
ddalpha13 - dalpha1*Gam113 - dalpha2*Gam213 - dalpha3*Gam313
;

const auto
DDalpha22
=
ddalpha22 - dalpha1*Gam122 - dalpha2*Gam222 - dalpha3*Gam322
;

const auto
DDalpha23
=
ddalpha23 - dalpha1*Gam123 - dalpha2*Gam223 - dalpha3*Gam323
;

const auto
DDalpha33
=
ddalpha33 - dalpha1*Gam133 - dalpha2*Gam233 - dalpha3*Gam333
;

const auto
RtW11
=
(tDtDW11 + gamt11[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

const auto
RtW12
=
(tDtDW12 + gamt12[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

const auto
RtW13
=
(tDtDW13 + gamt13[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

const auto
RtW22
=
(tDtDW22 + gamt22[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

const auto
RtW23
=
(tDtDW23 + gamt23[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

const auto
RtW33
=
(tDtDW33 + gamt33[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

const auto
Rt11
=
3*Gt111*GtDDU111 + 3*Gt112*GtDDU112 + 3*Gt113*GtDDU113 + 2*Gt211*GtDDU121 +
  2*Gt212*GtDDU122 + 2*Gt213*GtDDU123 + 2*Gt311*GtDDU131 +
  2*Gt312*GtDDU132 + 2*Gt313*GtDDU133 + Gt211*GtDDU211 + Gt212*GtDDU212 +
  Gt213*GtDDU213 + Gt311*GtDDU311 + Gt312*GtDDU312 + Gt313*GtDDU313 -
  (ddgamt1111*invgamt11)/2. - ddgamt1211*invgamt12 - ddgamt1311*invgamt13 -
  (ddgamt2211*invgamt22)/2. - ddgamt2311*invgamt23 -
  (ddgamt3311*invgamt33)/2. + GtDDD111*trGtd1 + GtDDD112*trGtd2 +
  GtDDD113*trGtd3 + dtrGt11*gamt11[ijk] + dtrGt12*gamt12[ijk] +
  dtrGt13*gamt13[ijk]
;

const auto
Rt12
=
(2*Gt112*GtDDU111 + 2*Gt122*GtDDU112 + 2*Gt123*GtDDU113 +
    2*Gt111*GtDDU121 + 2*Gt212*GtDDU121 + 2*Gt112*GtDDU122 +
    2*Gt222*GtDDU122 + 2*Gt113*GtDDU123 + 2*Gt223*GtDDU123 +
    2*Gt312*GtDDU131 + 2*Gt322*GtDDU132 + 2*Gt323*GtDDU133 +
    2*Gt111*GtDDU211 + 2*Gt112*GtDDU212 + 2*Gt113*GtDDU213 +
    4*Gt211*GtDDU221 + 4*Gt212*GtDDU222 + 4*Gt213*GtDDU223 +
    2*Gt311*GtDDU231 + 2*Gt312*GtDDU232 + 2*Gt313*GtDDU233 +
    2*Gt311*GtDDU321 + 2*Gt312*GtDDU322 + 2*Gt313*GtDDU323 -
    ddgamt1112*invgamt11 - 2*ddgamt1212*invgamt12 -
    2*ddgamt1312*invgamt13 - ddgamt2212*invgamt22 -
    2*ddgamt2312*invgamt23 - ddgamt3312*invgamt33 + GtDDD112*trGtd1 +
    GtDDD211*trGtd1 + GtDDD122*trGtd2 + GtDDD212*trGtd2 + GtDDD123*trGtd3 +
    GtDDD213*trGtd3 + dtrGt21*gamt11[ijk] +
    (dtrGt11 + dtrGt22)*gamt12[ijk] + dtrGt23*gamt13[ijk] +
    dtrGt12*gamt22[ijk] + dtrGt13*gamt23[ijk])/2.
;

const auto
Rt13
=
(2*Gt113*GtDDU111 + 2*Gt123*GtDDU112 + 2*Gt133*GtDDU113 +
    2*Gt213*GtDDU121 + 2*Gt223*GtDDU122 + 2*Gt233*GtDDU123 +
    2*Gt111*GtDDU131 + 2*Gt313*GtDDU131 + 2*Gt112*GtDDU132 +
    2*Gt323*GtDDU132 + 2*Gt113*GtDDU133 + 2*Gt333*GtDDU133 +
    2*Gt211*GtDDU231 + 2*Gt212*GtDDU232 + 2*Gt213*GtDDU233 +
    2*Gt111*GtDDU311 + 2*Gt112*GtDDU312 + 2*Gt113*GtDDU313 +
    2*Gt211*GtDDU321 + 2*Gt212*GtDDU322 + 2*Gt213*GtDDU323 +
    4*Gt311*GtDDU331 + 4*Gt312*GtDDU332 + 4*Gt313*GtDDU333 -
    ddgamt1113*invgamt11 - 2*ddgamt1213*invgamt12 -
    2*ddgamt1313*invgamt13 - ddgamt2213*invgamt22 -
    2*ddgamt2313*invgamt23 - ddgamt3313*invgamt33 + GtDDD113*trGtd1 +
    GtDDD311*trGtd1 + GtDDD123*trGtd2 + GtDDD312*trGtd2 + GtDDD133*trGtd3 +
    GtDDD313*trGtd3 + dtrGt31*gamt11[ijk] + dtrGt32*gamt12[ijk] +
    dtrGt11*gamt13[ijk] + dtrGt33*gamt13[ijk] + dtrGt12*gamt23[ijk] +
    dtrGt13*gamt33[ijk])/2.
;

const auto
Rt22
=
Gt112*GtDDU121 + Gt122*GtDDU122 + Gt123*GtDDU123 + 2*Gt112*GtDDU211 +
  2*Gt122*GtDDU212 + 2*Gt123*GtDDU213 + 3*Gt212*GtDDU221 +
  3*Gt222*GtDDU222 + 3*Gt223*GtDDU223 + 2*Gt312*GtDDU231 +
  2*Gt322*GtDDU232 + 2*Gt323*GtDDU233 + Gt312*GtDDU321 + Gt322*GtDDU322 +
  Gt323*GtDDU323 - (ddgamt1122*invgamt11)/2. - ddgamt1222*invgamt12 -
  ddgamt1322*invgamt13 - (ddgamt2222*invgamt22)/2. - ddgamt2322*invgamt23 -
  (ddgamt3322*invgamt33)/2. + GtDDD212*trGtd1 + GtDDD222*trGtd2 +
  GtDDD223*trGtd3 + dtrGt21*gamt12[ijk] + dtrGt22*gamt22[ijk] +
  dtrGt23*gamt23[ijk]
;

const auto
Rt23
=
(2*Gt112*GtDDU131 + 2*Gt122*GtDDU132 + 2*Gt123*GtDDU133 +
    2*Gt113*GtDDU211 + 2*Gt123*GtDDU212 + 2*Gt133*GtDDU213 +
    2*Gt213*GtDDU221 + 2*Gt223*GtDDU222 + 2*Gt233*GtDDU223 +
    2*Gt212*GtDDU231 + 2*Gt313*GtDDU231 + 2*Gt222*GtDDU232 +
    2*Gt323*GtDDU232 + 2*Gt223*GtDDU233 + 2*Gt333*GtDDU233 +
    2*Gt112*GtDDU311 + 2*Gt122*GtDDU312 + 2*Gt123*GtDDU313 +
    2*Gt212*GtDDU321 + 2*Gt222*GtDDU322 + 2*Gt223*GtDDU323 +
    4*Gt312*GtDDU331 + 4*Gt322*GtDDU332 + 4*Gt323*GtDDU333 -
    ddgamt1123*invgamt11 - 2*ddgamt1223*invgamt12 -
    2*ddgamt1323*invgamt13 - ddgamt2223*invgamt22 -
    2*ddgamt2323*invgamt23 - ddgamt3323*invgamt33 + GtDDD213*trGtd1 +
    GtDDD312*trGtd1 + GtDDD223*trGtd2 + GtDDD322*trGtd2 + GtDDD233*trGtd3 +
    GtDDD323*trGtd3 + dtrGt31*gamt12[ijk] + dtrGt21*gamt13[ijk] +
    dtrGt32*gamt22[ijk] + dtrGt22*gamt23[ijk] + dtrGt33*gamt23[ijk] +
    dtrGt23*gamt33[ijk])/2.
;

const auto
Rt33
=
Gt113*GtDDU131 + Gt123*GtDDU132 + Gt133*GtDDU133 + Gt213*GtDDU231 +
  Gt223*GtDDU232 + Gt233*GtDDU233 + 2*Gt113*GtDDU311 + 2*Gt123*GtDDU312 +
  2*Gt133*GtDDU313 + 2*Gt213*GtDDU321 + 2*Gt223*GtDDU322 +
  2*Gt233*GtDDU323 + 3*Gt313*GtDDU331 + 3*Gt323*GtDDU332 +
  3*Gt333*GtDDU333 - (ddgamt1133*invgamt11)/2. - ddgamt1233*invgamt12 -
  ddgamt1333*invgamt13 - (ddgamt2233*invgamt22)/2. - ddgamt2333*invgamt23 -
  (ddgamt3333*invgamt33)/2. + GtDDD313*trGtd1 + GtDDD323*trGtd2 +
  GtDDD333*trGtd3 + dtrGt31*gamt13[ijk] + dtrGt32*gamt23[ijk] +
  dtrGt33*gamt33[ijk]
;

const auto
R11
=
Rt11 + RtW11
;

const auto
R12
=
Rt12 + RtW12
;

const auto
R13
=
Rt13 + RtW13
;

const auto
R22
=
Rt22 + RtW22
;

const auto
R23
=
Rt23 + RtW23
;

const auto
R33
=
Rt33 + RtW33
;

const auto
trR
=
invgam11*R11 + 2*invgam12*R12 + 2*invgam13*R13 + invgam22*R22 +
  2*invgam23*R23 + invgam33*R33
;

const auto
rho
=
(Power(beta1[ijk],2)*eT11[ijk] + Power(beta2[ijk],2)*eT22[ijk] +
    Power(beta3[ijk],2)*eT33[ijk] +
    2*beta1[ijk]*(beta2[ijk]*eT12[ijk] + beta3[ijk]*eT13[ijk] -
       eTt1[ijk]) + 2*beta2[ijk]*(beta3[ijk]*eT23[ijk] - eTt2[ijk]) -
    2*beta3[ijk]*eTt3[ijk] + eTtt[ijk])/Power(alpha[ijk],2)
;

const auto
Sm1
=
(beta1[ijk]*eT11[ijk] + beta2[ijk]*eT12[ijk] + beta3[ijk]*eT13[ijk] -
    eTt1[ijk])/alpha[ijk]
;

const auto
Sm2
=
(beta1[ijk]*eT12[ijk] + beta2[ijk]*eT22[ijk] + beta3[ijk]*eT23[ijk] -
    eTt2[ijk])/alpha[ijk]
;

const auto
Sm3
=
(beta1[ijk]*eT13[ijk] + beta2[ijk]*eT23[ijk] + beta3[ijk]*eT33[ijk] -
    eTt3[ijk])/alpha[ijk]
;

const auto
Ss11
=
eT11[ijk]
;

const auto
Ss12
=
eT12[ijk]
;

const auto
Ss13
=
eT13[ijk]
;

const auto
Ss22
=
eT22[ijk]
;

const auto
Ss23
=
eT23[ijk]
;

const auto
Ss33
=
eT33[ijk]
;

const auto
trSs
=
invgam11*Ss11 + 2*invgam12*Ss12 + 2*invgam13*Ss13 + invgam22*Ss22 +
  2*invgam23*Ss23 + invgam33*Ss33
;


dtW[ijk]
=
dW1*beta1[ijk] + dW2*beta2[ijk] + dW3*beta3[ijk] -
  ((dbeta11 + dbeta22 + dbeta33)*W[ijk])/3. +
  (alpha[ijk]*exKh[ijk]*W[ijk])/3. + (2*alpha[ijk]*Theta[ijk]*W[ijk])/3.
;

dtgamt11[ijk]
=
dgamt111*beta1[ijk] + dgamt211*beta2[ijk] + dgamt311*beta3[ijk] -
  2*alpha[ijk]*exAt11[ijk] + 2*dbeta11*gamt11[ijk] -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt11[ijk])/3. + 2*dbeta12*gamt12[ijk] +
  2*dbeta13*gamt13[ijk]
;

dtgamt12[ijk]
=
dgamt112*beta1[ijk] + dgamt212*beta2[ijk] + dgamt312*beta3[ijk] -
  2*alpha[ijk]*exAt12[ijk] + dbeta21*gamt11[ijk] + dbeta11*gamt12[ijk] +
  dbeta22*gamt12[ijk] - (2*(dbeta11 + dbeta22 + dbeta33)*gamt12[ijk])/3. +
  dbeta23*gamt13[ijk] + dbeta12*gamt22[ijk] + dbeta13*gamt23[ijk]
;

dtgamt13[ijk]
=
dgamt113*beta1[ijk] + dgamt213*beta2[ijk] + dgamt313*beta3[ijk] -
  2*alpha[ijk]*exAt13[ijk] + dbeta31*gamt11[ijk] + dbeta32*gamt12[ijk] +
  dbeta11*gamt13[ijk] + dbeta33*gamt13[ijk] -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt13[ijk])/3. + dbeta12*gamt23[ijk] +
  dbeta13*gamt33[ijk]
;

dtgamt22[ijk]
=
dgamt122*beta1[ijk] + dgamt222*beta2[ijk] + dgamt322*beta3[ijk] -
  2*alpha[ijk]*exAt22[ijk] + 2*dbeta21*gamt12[ijk] + 2*dbeta22*gamt22[ijk] -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt22[ijk])/3. + 2*dbeta23*gamt23[ijk]
;

dtgamt23[ijk]
=
dgamt123*beta1[ijk] + dgamt223*beta2[ijk] + dgamt323*beta3[ijk] -
  2*alpha[ijk]*exAt23[ijk] + dbeta31*gamt12[ijk] + dbeta21*gamt13[ijk] +
  dbeta32*gamt22[ijk] + dbeta22*gamt23[ijk] + dbeta33*gamt23[ijk] -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt23[ijk])/3. + dbeta23*gamt33[ijk]
;

dtgamt33[ijk]
=
dgamt133*beta1[ijk] + dgamt233*beta2[ijk] + dgamt333*beta3[ijk] -
  2*alpha[ijk]*exAt33[ijk] + 2*dbeta31*gamt13[ijk] + 2*dbeta32*gamt23[ijk] +
  2*dbeta33*gamt33[ijk] - (2*(dbeta11 + dbeta22 + dbeta33)*gamt33[ijk])/3.
;

dtexKh[ijk]
=
-(DDalpha11*invgam11) - 2*DDalpha12*invgam12 - 2*DDalpha13*invgam13 -
  DDalpha22*invgam22 - 2*DDalpha23*invgam23 - DDalpha33*invgam33 +
  dexKh1*beta1[ijk] + dexKh2*beta2[ijk] + dexKh3*beta3[ijk] +
  alpha[ijk]*(4*cpi*rho + 4*cpi*trSs + exAtUU11*exAt11[ijk] +
     2*exAtUU12*exAt12[ijk] + 2*exAtUU13*exAt13[ijk] +
     exAtUU22*exAt22[ijk] + 2*exAtUU23*exAt23[ijk] + exAtUU33*exAt33[ijk] +
     Power(exKh[ijk],2)/3. + ckappa1*Theta[ijk] -
     ckappa1*ckappa2*Theta[ijk] + (4*exKh[ijk]*Theta[ijk])/3. +
     (4*Power(Theta[ijk],2))/3.)
;

dtexAt11[ijk]
=
(3*dexAt111*beta1[ijk] + 3*dexAt211*beta2[ijk] + 3*dexAt311*beta3[ijk] +
    4*dbeta11*exAt11[ijk] - 2*dbeta22*exAt11[ijk] - 2*dbeta33*exAt11[ijk] -
    6*invgamt11*alpha[ijk]*Power(exAt11[ijk],2) + 6*dbeta12*exAt12[ijk] -
    12*invgamt12*alpha[ijk]*exAt11[ijk]*exAt12[ijk] -
    6*invgamt22*alpha[ijk]*Power(exAt12[ijk],2) + 6*dbeta13*exAt13[ijk] -
    12*invgamt13*alpha[ijk]*exAt11[ijk]*exAt13[ijk] -
    12*invgamt23*alpha[ijk]*exAt12[ijk]*exAt13[ijk] -
    6*invgamt33*alpha[ijk]*Power(exAt13[ijk],2) +
    3*alpha[ijk]*exAt11[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAt11[ijk]*Theta[ijk] - 3*DDalpha11*Power(W[ijk],2) +
    DDalpha11*gam11*invgam11*Power(W[ijk],2) +
    2*DDalpha12*gam11*invgam12*Power(W[ijk],2) +
    2*DDalpha13*gam11*invgam13*Power(W[ijk],2) +
    DDalpha22*gam11*invgam22*Power(W[ijk],2) +
    2*DDalpha23*gam11*invgam23*Power(W[ijk],2) +
    DDalpha33*gam11*invgam33*Power(W[ijk],2) +
    3*R11*alpha[ijk]*Power(W[ijk],2) -
    gam11*invgam11*R11*alpha[ijk]*Power(W[ijk],2) -
    2*gam11*invgam12*R12*alpha[ijk]*Power(W[ijk],2) -
    2*gam11*invgam13*R13*alpha[ijk]*Power(W[ijk],2) -
    gam11*invgam22*R22*alpha[ijk]*Power(W[ijk],2) -
    2*gam11*invgam23*R23*alpha[ijk]*Power(W[ijk],2) -
    gam11*invgam33*R33*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ss11*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam11*invgam11*Ss11*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam11*invgam12*Ss12*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam11*invgam13*Ss13*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam11*invgam22*Ss22*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam11*invgam23*Ss23*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam11*invgam33*Ss33*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAt12[ijk]
=
(3*dexAt112*beta1[ijk] + 3*dexAt212*beta2[ijk] + 3*dexAt312*beta3[ijk] +
    3*dbeta21*exAt11[ijk] + dbeta11*exAt12[ijk] + dbeta22*exAt12[ijk] -
    2*dbeta33*exAt12[ijk] - 6*invgamt11*alpha[ijk]*exAt11[ijk]*
     exAt12[ijk] - 6*invgamt12*alpha[ijk]*Power(exAt12[ijk],2) +
    3*dbeta23*exAt13[ijk] - 6*invgamt13*alpha[ijk]*exAt12[ijk]*
     exAt13[ijk] + 3*dbeta12*exAt22[ijk] -
    6*invgamt12*alpha[ijk]*exAt11[ijk]*exAt22[ijk] -
    6*invgamt22*alpha[ijk]*exAt12[ijk]*exAt22[ijk] -
    6*invgamt23*alpha[ijk]*exAt13[ijk]*exAt22[ijk] +
    3*dbeta13*exAt23[ijk] - 6*invgamt13*alpha[ijk]*exAt11[ijk]*
     exAt23[ijk] - 6*invgamt23*alpha[ijk]*exAt12[ijk]*exAt23[ijk] -
    6*invgamt33*alpha[ijk]*exAt13[ijk]*exAt23[ijk] +
    3*alpha[ijk]*exAt12[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAt12[ijk]*Theta[ijk] - 3*DDalpha12*Power(W[ijk],2) +
    DDalpha11*gam12*invgam11*Power(W[ijk],2) +
    2*DDalpha12*gam12*invgam12*Power(W[ijk],2) +
    2*DDalpha13*gam12*invgam13*Power(W[ijk],2) +
    DDalpha22*gam12*invgam22*Power(W[ijk],2) +
    2*DDalpha23*gam12*invgam23*Power(W[ijk],2) +
    DDalpha33*gam12*invgam33*Power(W[ijk],2) -
    gam12*invgam11*R11*alpha[ijk]*Power(W[ijk],2) +
    3*R12*alpha[ijk]*Power(W[ijk],2) -
    2*gam12*invgam12*R12*alpha[ijk]*Power(W[ijk],2) -
    2*gam12*invgam13*R13*alpha[ijk]*Power(W[ijk],2) -
    gam12*invgam22*R22*alpha[ijk]*Power(W[ijk],2) -
    2*gam12*invgam23*R23*alpha[ijk]*Power(W[ijk],2) -
    gam12*invgam33*R33*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam12*invgam11*Ss11*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ss12*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam12*invgam12*Ss12*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam12*invgam13*Ss13*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam12*invgam22*Ss22*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam12*invgam23*Ss23*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam12*invgam33*Ss33*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAt13[ijk]
=
(3*dexAt113*beta1[ijk] + 3*dexAt213*beta2[ijk] + 3*dexAt313*beta3[ijk] +
    3*dbeta31*exAt11[ijk] + 3*dbeta32*exAt12[ijk] + dbeta11*exAt13[ijk] -
    2*dbeta22*exAt13[ijk] + dbeta33*exAt13[ijk] -
    6*invgamt11*alpha[ijk]*exAt11[ijk]*exAt13[ijk] -
    6*invgamt12*alpha[ijk]*exAt12[ijk]*exAt13[ijk] -
    6*invgamt13*alpha[ijk]*Power(exAt13[ijk],2) + 3*dbeta12*exAt23[ijk] -
    6*invgamt12*alpha[ijk]*exAt11[ijk]*exAt23[ijk] -
    6*invgamt22*alpha[ijk]*exAt12[ijk]*exAt23[ijk] -
    6*invgamt23*alpha[ijk]*exAt13[ijk]*exAt23[ijk] +
    3*dbeta13*exAt33[ijk] - 6*invgamt13*alpha[ijk]*exAt11[ijk]*
     exAt33[ijk] - 6*invgamt23*alpha[ijk]*exAt12[ijk]*exAt33[ijk] -
    6*invgamt33*alpha[ijk]*exAt13[ijk]*exAt33[ijk] +
    3*alpha[ijk]*exAt13[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAt13[ijk]*Theta[ijk] - 3*DDalpha13*Power(W[ijk],2) +
    DDalpha11*gam13*invgam11*Power(W[ijk],2) +
    2*DDalpha12*gam13*invgam12*Power(W[ijk],2) +
    2*DDalpha13*gam13*invgam13*Power(W[ijk],2) +
    DDalpha22*gam13*invgam22*Power(W[ijk],2) +
    2*DDalpha23*gam13*invgam23*Power(W[ijk],2) +
    DDalpha33*gam13*invgam33*Power(W[ijk],2) -
    gam13*invgam11*R11*alpha[ijk]*Power(W[ijk],2) -
    2*gam13*invgam12*R12*alpha[ijk]*Power(W[ijk],2) +
    3*R13*alpha[ijk]*Power(W[ijk],2) -
    2*gam13*invgam13*R13*alpha[ijk]*Power(W[ijk],2) -
    gam13*invgam22*R22*alpha[ijk]*Power(W[ijk],2) -
    2*gam13*invgam23*R23*alpha[ijk]*Power(W[ijk],2) -
    gam13*invgam33*R33*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam13*invgam11*Ss11*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam13*invgam12*Ss12*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ss13*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam13*invgam13*Ss13*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam13*invgam22*Ss22*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam13*invgam23*Ss23*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam13*invgam33*Ss33*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAt22[ijk]
=
(3*dexAt122*beta1[ijk] + 3*dexAt222*beta2[ijk] + 3*dexAt322*beta3[ijk] +
    6*dbeta21*exAt12[ijk] - 6*invgamt11*alpha[ijk]*Power(exAt12[ijk],2) -
    2*dbeta11*exAt22[ijk] + 4*dbeta22*exAt22[ijk] - 2*dbeta33*exAt22[ijk] -
    12*invgamt12*alpha[ijk]*exAt12[ijk]*exAt22[ijk] -
    6*invgamt22*alpha[ijk]*Power(exAt22[ijk],2) + 6*dbeta23*exAt23[ijk] -
    12*invgamt13*alpha[ijk]*exAt12[ijk]*exAt23[ijk] -
    12*invgamt23*alpha[ijk]*exAt22[ijk]*exAt23[ijk] -
    6*invgamt33*alpha[ijk]*Power(exAt23[ijk],2) +
    3*alpha[ijk]*exAt22[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAt22[ijk]*Theta[ijk] - 3*DDalpha22*Power(W[ijk],2) +
    DDalpha11*gam22*invgam11*Power(W[ijk],2) +
    2*DDalpha12*gam22*invgam12*Power(W[ijk],2) +
    2*DDalpha13*gam22*invgam13*Power(W[ijk],2) +
    DDalpha22*gam22*invgam22*Power(W[ijk],2) +
    2*DDalpha23*gam22*invgam23*Power(W[ijk],2) +
    DDalpha33*gam22*invgam33*Power(W[ijk],2) -
    gam22*invgam11*R11*alpha[ijk]*Power(W[ijk],2) -
    2*gam22*invgam12*R12*alpha[ijk]*Power(W[ijk],2) -
    2*gam22*invgam13*R13*alpha[ijk]*Power(W[ijk],2) +
    3*R22*alpha[ijk]*Power(W[ijk],2) -
    gam22*invgam22*R22*alpha[ijk]*Power(W[ijk],2) -
    2*gam22*invgam23*R23*alpha[ijk]*Power(W[ijk],2) -
    gam22*invgam33*R33*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam22*invgam11*Ss11*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam22*invgam12*Ss12*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam22*invgam13*Ss13*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ss22*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam22*invgam22*Ss22*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam22*invgam23*Ss23*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam22*invgam33*Ss33*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAt23[ijk]
=
(3*dexAt123*beta1[ijk] + 3*dexAt223*beta2[ijk] + 3*dexAt323*beta3[ijk] +
    3*dbeta31*exAt12[ijk] + 3*dbeta21*exAt13[ijk] -
    6*invgamt11*alpha[ijk]*exAt12[ijk]*exAt13[ijk] +
    3*dbeta32*exAt22[ijk] - 6*invgamt12*alpha[ijk]*exAt13[ijk]*
     exAt22[ijk] - 2*dbeta11*exAt23[ijk] + dbeta22*exAt23[ijk] +
    dbeta33*exAt23[ijk] - 6*invgamt12*alpha[ijk]*exAt12[ijk]*exAt23[ijk] -
    6*invgamt13*alpha[ijk]*exAt13[ijk]*exAt23[ijk] -
    6*invgamt22*alpha[ijk]*exAt22[ijk]*exAt23[ijk] -
    6*invgamt23*alpha[ijk]*Power(exAt23[ijk],2) + 3*dbeta23*exAt33[ijk] -
    6*invgamt13*alpha[ijk]*exAt12[ijk]*exAt33[ijk] -
    6*invgamt23*alpha[ijk]*exAt22[ijk]*exAt33[ijk] -
    6*invgamt33*alpha[ijk]*exAt23[ijk]*exAt33[ijk] +
    3*alpha[ijk]*exAt23[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAt23[ijk]*Theta[ijk] - 3*DDalpha23*Power(W[ijk],2) +
    DDalpha11*gam23*invgam11*Power(W[ijk],2) +
    2*DDalpha12*gam23*invgam12*Power(W[ijk],2) +
    2*DDalpha13*gam23*invgam13*Power(W[ijk],2) +
    DDalpha22*gam23*invgam22*Power(W[ijk],2) +
    2*DDalpha23*gam23*invgam23*Power(W[ijk],2) +
    DDalpha33*gam23*invgam33*Power(W[ijk],2) -
    gam23*invgam11*R11*alpha[ijk]*Power(W[ijk],2) -
    2*gam23*invgam12*R12*alpha[ijk]*Power(W[ijk],2) -
    2*gam23*invgam13*R13*alpha[ijk]*Power(W[ijk],2) -
    gam23*invgam22*R22*alpha[ijk]*Power(W[ijk],2) +
    3*R23*alpha[ijk]*Power(W[ijk],2) -
    2*gam23*invgam23*R23*alpha[ijk]*Power(W[ijk],2) -
    gam23*invgam33*R33*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam23*invgam11*Ss11*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam23*invgam12*Ss12*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam23*invgam13*Ss13*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam23*invgam22*Ss22*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ss23*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam23*invgam23*Ss23*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam23*invgam33*Ss33*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAt33[ijk]
=
(3*dexAt133*beta1[ijk] + 3*dexAt233*beta2[ijk] + 3*dexAt333*beta3[ijk] +
    6*dbeta31*exAt13[ijk] - 6*invgamt11*alpha[ijk]*Power(exAt13[ijk],2) +
    6*dbeta32*exAt23[ijk] - 12*invgamt12*alpha[ijk]*exAt13[ijk]*
     exAt23[ijk] - 6*invgamt22*alpha[ijk]*Power(exAt23[ijk],2) -
    2*dbeta11*exAt33[ijk] - 2*dbeta22*exAt33[ijk] + 4*dbeta33*exAt33[ijk] -
    12*invgamt13*alpha[ijk]*exAt13[ijk]*exAt33[ijk] -
    12*invgamt23*alpha[ijk]*exAt23[ijk]*exAt33[ijk] -
    6*invgamt33*alpha[ijk]*Power(exAt33[ijk],2) +
    3*alpha[ijk]*exAt33[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAt33[ijk]*Theta[ijk] - 3*DDalpha33*Power(W[ijk],2) +
    DDalpha11*gam33*invgam11*Power(W[ijk],2) +
    2*DDalpha12*gam33*invgam12*Power(W[ijk],2) +
    2*DDalpha13*gam33*invgam13*Power(W[ijk],2) +
    DDalpha22*gam33*invgam22*Power(W[ijk],2) +
    2*DDalpha23*gam33*invgam23*Power(W[ijk],2) +
    DDalpha33*gam33*invgam33*Power(W[ijk],2) -
    gam33*invgam11*R11*alpha[ijk]*Power(W[ijk],2) -
    2*gam33*invgam12*R12*alpha[ijk]*Power(W[ijk],2) -
    2*gam33*invgam13*R13*alpha[ijk]*Power(W[ijk],2) -
    gam33*invgam22*R22*alpha[ijk]*Power(W[ijk],2) -
    2*gam33*invgam23*R23*alpha[ijk]*Power(W[ijk],2) +
    3*R33*alpha[ijk]*Power(W[ijk],2) -
    gam33*invgam33*R33*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam33*invgam11*Ss11*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam33*invgam12*Ss12*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam33*invgam13*Ss13*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam33*invgam22*Ss22*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gam33*invgam23*Ss23*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ss33*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gam33*invgam33*Ss33*alpha[ijk]*Power(W[ijk],2))/3.
;

dttrGt1[ijk]
=
(-6*dalpha1*exAtUU11 - 6*dalpha2*exAtUU12 - 6*dalpha3*exAtUU13 +
    4*ddbeta111*invgamt11 + ddbeta122*invgamt11 + ddbeta133*invgamt11 +
    7*ddbeta121*invgamt12 + ddbeta222*invgamt12 + ddbeta233*invgamt12 +
    7*ddbeta131*invgamt13 + ddbeta232*invgamt13 + ddbeta333*invgamt13 +
    3*ddbeta221*invgamt22 + 6*ddbeta231*invgamt23 + 3*ddbeta331*invgamt33 -
    dbeta11*trGtd1 + 2*dbeta22*trGtd1 + 2*dbeta33*trGtd1 -
    3*dbeta21*trGtd2 - 3*dbeta31*trGtd3 + 3*dtrGt11*beta1[ijk] +
    3*dtrGt21*beta2[ijk] + 3*dtrGt31*beta3[ijk] -
    2*alpha[ijk]*(9*dlnW1*exAtUU11 + 9*dlnW2*exAtUU12 + 9*dlnW3*exAtUU13 -
       3*exAtUU11*Gt111 - 6*exAtUU12*Gt112 - 6*exAtUU13*Gt113 -
       3*exAtUU22*Gt122 - 6*exAtUU23*Gt123 - 3*exAtUU33*Gt133 +
       2*dexKh1*invgamt11 + dTheta1*invgamt11 + 2*dexKh2*invgamt12 +
       dTheta2*invgamt12 + 2*dexKh3*invgamt13 + dTheta3*invgamt13 +
       24*cpi*invgamt11*Sm1 + 24*cpi*invgamt12*Sm2 + 24*cpi*invgamt13*Sm3 -
       3*ckappa1*trGtd1 + 3*ckappa1*trGt1[ijk]))/3.
;

dttrGt2[ijk]
=
(-6*dalpha1*exAtUU12 - 6*dalpha2*exAtUU22 - 6*dalpha3*exAtUU23 +
    3*ddbeta112*invgamt11 + ddbeta111*invgamt12 + 7*ddbeta122*invgamt12 +
    ddbeta133*invgamt12 + 6*ddbeta132*invgamt13 + ddbeta121*invgamt22 +
    4*ddbeta222*invgamt22 + ddbeta233*invgamt22 + ddbeta131*invgamt23 +
    7*ddbeta232*invgamt23 + ddbeta333*invgamt23 + 3*ddbeta332*invgamt33 -
    3*dbeta12*trGtd1 + 2*dbeta11*trGtd2 - dbeta22*trGtd2 +
    2*dbeta33*trGtd2 - 3*dbeta32*trGtd3 + 3*dtrGt12*beta1[ijk] +
    3*dtrGt22*beta2[ijk] + 3*dtrGt32*beta3[ijk] -
    2*alpha[ijk]*(9*dlnW1*exAtUU12 + 9*dlnW2*exAtUU22 + 9*dlnW3*exAtUU23 -
       3*exAtUU11*Gt211 - 6*exAtUU12*Gt212 - 6*exAtUU13*Gt213 -
       3*exAtUU22*Gt222 - 6*exAtUU23*Gt223 - 3*exAtUU33*Gt233 +
       2*dexKh1*invgamt12 + dTheta1*invgamt12 + 2*dexKh2*invgamt22 +
       dTheta2*invgamt22 + 2*dexKh3*invgamt23 + dTheta3*invgamt23 +
       24*cpi*invgamt12*Sm1 + 24*cpi*invgamt22*Sm2 + 24*cpi*invgamt23*Sm3 -
       3*ckappa1*trGtd2 + 3*ckappa1*trGt2[ijk]))/3.
;

dttrGt3[ijk]
=
(-6*dalpha1*exAtUU13 - 6*dalpha2*exAtUU23 - 6*dalpha3*exAtUU33 +
    3*ddbeta113*invgamt11 + 6*ddbeta123*invgamt12 + ddbeta111*invgamt13 +
    ddbeta122*invgamt13 + 7*ddbeta133*invgamt13 + 3*ddbeta223*invgamt22 +
    ddbeta121*invgamt23 + ddbeta222*invgamt23 + 7*ddbeta233*invgamt23 +
    ddbeta131*invgamt33 + ddbeta232*invgamt33 + 4*ddbeta333*invgamt33 -
    3*dbeta13*trGtd1 - 3*dbeta23*trGtd2 + 2*dbeta11*trGtd3 +
    2*dbeta22*trGtd3 - dbeta33*trGtd3 + 3*dtrGt13*beta1[ijk] +
    3*dtrGt23*beta2[ijk] + 3*dtrGt33*beta3[ijk] -
    2*alpha[ijk]*(9*dlnW1*exAtUU13 + 9*dlnW2*exAtUU23 + 9*dlnW3*exAtUU33 -
       3*exAtUU11*Gt311 - 6*exAtUU12*Gt312 - 6*exAtUU13*Gt313 -
       3*exAtUU22*Gt322 - 6*exAtUU23*Gt323 - 3*exAtUU33*Gt333 +
       2*dexKh1*invgamt13 + dTheta1*invgamt13 + 2*dexKh2*invgamt23 +
       dTheta2*invgamt23 + 2*dexKh3*invgamt33 + dTheta3*invgamt33 +
       24*cpi*invgamt13*Sm1 + 24*cpi*invgamt23*Sm2 + 24*cpi*invgamt33*Sm3 -
       3*ckappa1*trGtd3 + 3*ckappa1*trGt3[ijk]))/3.
;

dtTheta[ijk]
=
dTheta1*beta1[ijk] + dTheta2*beta2[ijk] + dTheta3*beta3[ijk] -
  (alpha[ijk]*(48*cpi*rho - 3*trR + 3*exAtUU11*exAt11[ijk] +
       6*exAtUU12*exAt12[ijk] + 6*exAtUU13*exAt13[ijk] +
       3*exAtUU22*exAt22[ijk] + 6*exAtUU23*exAt23[ijk] +
       3*exAtUU33*exAt33[ijk] - 2*Power(exKh[ijk],2) +
       12*ckappa1*Theta[ijk] + 6*ckappa1*ckappa2*Theta[ijk] -
       8*exKh[ijk]*Theta[ijk] - 8*Power(Theta[ijk],2)))/6.
;

dtalpha[ijk]
=
dalpha1*beta1[ijk] + dalpha2*beta2[ijk] + dalpha3*beta3[ijk] -
  cmuL*alpha[ijk]*exKh[ijk]
;

dtbeta1[ijk]
=
(-ceta + dbeta11)*beta1[ijk] + dbeta21*beta2[ijk] + dbeta31*beta3[ijk] +
  cmuS*trGt1[ijk]
;

dtbeta2[ijk]
=
dbeta12*beta1[ijk] + (-ceta + dbeta22)*beta2[ijk] + dbeta32*beta3[ijk] +
  cmuS*trGt2[ijk]
;

dtbeta3[ijk]
=
dbeta13*beta1[ijk] + dbeta23*beta2[ijk] - ceta*beta3[ijk] +
  dbeta33*beta3[ijk] + cmuS*trGt3[ijk]
;


    }
  }
}

#endif // #ifndef Z4COW_SET_RHS_HXX

/* Z4cow_set_rhs.hxx */
