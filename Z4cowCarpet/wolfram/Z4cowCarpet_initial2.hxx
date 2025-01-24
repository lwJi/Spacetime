/* Z4cowCarpet_initial2.hxx */
/* Produced with Generato */

#ifndef Z4COWCARPET_INITIAL2_HXX
#define Z4COWCARPET_INITIAL2_HXX

const auto &trGt1 = gf_trGt[0];
const auto &trGt2 = gf_trGt[1];
const auto &trGt3 = gf_trGt[2];

const auto &gamt11 = gf_gamt[0];
const auto &gamt12 = gf_gamt[1];
const auto &gamt13 = gf_gamt[2];
const auto &gamt22 = gf_gamt[3];
const auto &gamt23 = gf_gamt[4];
const auto &gamt33 = gf_gamt[5];

for (k=kstart; k<kend; k++) {
  for (j=jstart; j<jend; j++) {
    for (i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);

const auto dgamt111 = fd_1st<1>(cctkGH, gamt11, i, j, k, idx);
const auto dgamt112 = fd_1st<1>(cctkGH, gamt12, i, j, k, idx);
const auto dgamt113 = fd_1st<1>(cctkGH, gamt13, i, j, k, idx);
const auto dgamt122 = fd_1st<1>(cctkGH, gamt22, i, j, k, idx);
const auto dgamt123 = fd_1st<1>(cctkGH, gamt23, i, j, k, idx);
const auto dgamt133 = fd_1st<1>(cctkGH, gamt33, i, j, k, idx);
const auto dgamt211 = fd_1st<2>(cctkGH, gamt11, i, j, k, idx);
const auto dgamt212 = fd_1st<2>(cctkGH, gamt12, i, j, k, idx);
const auto dgamt213 = fd_1st<2>(cctkGH, gamt13, i, j, k, idx);
const auto dgamt222 = fd_1st<2>(cctkGH, gamt22, i, j, k, idx);
const auto dgamt223 = fd_1st<2>(cctkGH, gamt23, i, j, k, idx);
const auto dgamt233 = fd_1st<2>(cctkGH, gamt33, i, j, k, idx);
const auto dgamt311 = fd_1st<3>(cctkGH, gamt11, i, j, k, idx);
const auto dgamt312 = fd_1st<3>(cctkGH, gamt12, i, j, k, idx);
const auto dgamt313 = fd_1st<3>(cctkGH, gamt13, i, j, k, idx);
const auto dgamt322 = fd_1st<3>(cctkGH, gamt22, i, j, k, idx);
const auto dgamt323 = fd_1st<3>(cctkGH, gamt23, i, j, k, idx);
const auto dgamt333 = fd_1st<3>(cctkGH, gamt33, i, j, k, idx);

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
Gt111
=
dgamt111/2.
;

const auto
Gt112
=
dgamt211/2.
;

const auto
Gt113
=
dgamt311/2.
;

const auto
Gt122
=
-0.5*dgamt122 + dgamt212
;

const auto
Gt123
=
(-dgamt123 + dgamt213 + dgamt312)/2.
;

const auto
Gt133
=
-0.5*dgamt133 + dgamt313
;

const auto
Gt211
=
dgamt112 - dgamt211/2.
;

const auto
Gt212
=
dgamt122/2.
;

const auto
Gt213
=
(dgamt123 - dgamt213 + dgamt312)/2.
;

const auto
Gt222
=
dgamt222/2.
;

const auto
Gt223
=
dgamt322/2.
;

const auto
Gt233
=
-0.5*dgamt233 + dgamt323
;

const auto
Gt311
=
dgamt113 - dgamt311/2.
;

const auto
Gt312
=
(dgamt123 + dgamt213 - dgamt312)/2.
;

const auto
Gt313
=
dgamt133/2.
;

const auto
Gt322
=
dgamt223 - dgamt322/2.
;

const auto
Gt323
=
dgamt233/2.
;

const auto
Gt333
=
dgamt333/2.
;


trGt1[ijk]
=
Gt111*Power(invgamt11,2) + 2*Gt112*invgamt11*invgamt12 +
  Gt211*invgamt11*invgamt12 + 2*Gt212*Power(invgamt12,2) +
  2*Gt113*invgamt11*invgamt13 + Gt311*invgamt11*invgamt13 +
  2*Gt213*invgamt12*invgamt13 + 2*Gt312*invgamt12*invgamt13 +
  2*Gt313*Power(invgamt13,2) + Gt122*invgamt11*invgamt22 +
  Gt222*invgamt12*invgamt22 + Gt322*invgamt13*invgamt22 +
  2*Gt123*invgamt11*invgamt23 + 2*Gt223*invgamt12*invgamt23 +
  2*Gt323*invgamt13*invgamt23 + Gt133*invgamt11*invgamt33 +
  Gt233*invgamt12*invgamt33 + Gt333*invgamt13*invgamt33
;

trGt2[ijk]
=
Gt111*invgamt11*invgamt12 + 2*Gt112*Power(invgamt12,2) +
  2*Gt113*invgamt12*invgamt13 + Gt211*invgamt11*invgamt22 +
  Gt122*invgamt12*invgamt22 + 2*Gt212*invgamt12*invgamt22 +
  2*Gt213*invgamt13*invgamt22 + Gt222*Power(invgamt22,2) +
  Gt311*invgamt11*invgamt23 + 2*Gt123*invgamt12*invgamt23 +
  2*Gt312*invgamt12*invgamt23 + 2*Gt313*invgamt13*invgamt23 +
  2*Gt223*invgamt22*invgamt23 + Gt322*invgamt22*invgamt23 +
  2*Gt323*Power(invgamt23,2) + Gt133*invgamt12*invgamt33 +
  Gt233*invgamt22*invgamt33 + Gt333*invgamt23*invgamt33
;

trGt3[ijk]
=
Gt111*invgamt11*invgamt13 + 2*Gt112*invgamt12*invgamt13 +
  2*Gt113*Power(invgamt13,2) + Gt122*invgamt13*invgamt22 +
  Gt211*invgamt11*invgamt23 + 2*Gt212*invgamt12*invgamt23 +
  2*Gt123*invgamt13*invgamt23 + 2*Gt213*invgamt13*invgamt23 +
  Gt222*invgamt22*invgamt23 + 2*Gt223*Power(invgamt23,2) +
  Gt311*invgamt11*invgamt33 + 2*Gt312*invgamt12*invgamt33 +
  Gt133*invgamt13*invgamt33 + 2*Gt313*invgamt13*invgamt33 +
  Gt322*invgamt22*invgamt33 + Gt233*invgamt23*invgamt33 +
  2*Gt323*invgamt23*invgamt33 + Gt333*Power(invgamt33,2)
;


    }
  }
}

#endif // #ifndef Z4COWCARPET_INITIAL2_HXX

/* Z4cowCarpet_initial2.hxx */
