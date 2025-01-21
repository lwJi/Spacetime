/* Z4co_set_rhs.hxx */
/* Produced with Mathematica */

#ifndef Z4CO_SET_RHS_HXX
#define Z4CO_SET_RHS_HXX

for (k=kstart; k<kend; k++) {
  for (j=jstart; j<jend; j++) {
    for (i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);

const auto &eTtt = eTtt[ijk];
const auto &eTt1 = eTtx[ijk];
const auto &eTt2 = eTty[ijk];
const auto &eTt3 = eTtz[ijk];
const auto &eT11 = eTxx[ijk];
const auto &eT12 = eTxy[ijk];
const auto &eT13 = eTxz[ijk];
const auto &eT22 = eTyy[ijk];
const auto &eT23 = eTyz[ijk];
const auto &eT33 = eTzz[ijk];
const auto &W = W[ijk];
const auto &gamt11 = gamtxx[ijk];
const auto &gamt12 = gamtxy[ijk];
const auto &gamt13 = gamtxz[ijk];
const auto &gamt22 = gamtyy[ijk];
const auto &gamt23 = gamtyz[ijk];
const auto &gamt33 = gamtzz[ijk];
const auto &exKh = exKh[ijk];
const auto &exAt11 = exAtxx[ijk];
const auto &exAt12 = exAtxy[ijk];
const auto &exAt13 = exAtxz[ijk];
const auto &exAt22 = exAtyy[ijk];
const auto &exAt23 = exAtyz[ijk];
const auto &exAt33 = exAtzz[ijk];
const auto &trGt1 = trGtx[ijk];
const auto &trGt2 = trGty[ijk];
const auto &trGt3 = trGtz[ijk];
const auto &Theta = Theta[ijk];
const auto &alpha = alpha[ijk];
const auto &beta1 = betax[ijk];
const auto &beta2 = betay[ijk];
const auto &beta3 = betaz[ijk];
const auto dW1 = fd_1st(W1, ijk, 1);
const auto dW2 = fd_1st(W2, ijk, 2);
const auto dW3 = fd_1st(W3, ijk, 3);
const auto dgamt111 = fd_1st(gamt111, ijk, 1);
const auto dgamt112 = fd_1st(gamt112, ijk, 1);
const auto dgamt113 = fd_1st(gamt113, ijk, 1);
const auto dgamt122 = fd_1st(gamt122, ijk, 1);
const auto dgamt123 = fd_1st(gamt123, ijk, 1);
const auto dgamt133 = fd_1st(gamt133, ijk, 1);
const auto dgamt211 = fd_1st(gamt211, ijk, 2);
const auto dgamt212 = fd_1st(gamt212, ijk, 2);
const auto dgamt213 = fd_1st(gamt213, ijk, 2);
const auto dgamt222 = fd_1st(gamt222, ijk, 2);
const auto dgamt223 = fd_1st(gamt223, ijk, 2);
const auto dgamt233 = fd_1st(gamt233, ijk, 2);
const auto dgamt311 = fd_1st(gamt311, ijk, 3);
const auto dgamt312 = fd_1st(gamt312, ijk, 3);
const auto dgamt313 = fd_1st(gamt313, ijk, 3);
const auto dgamt322 = fd_1st(gamt322, ijk, 3);
const auto dgamt323 = fd_1st(gamt323, ijk, 3);
const auto dgamt333 = fd_1st(gamt333, ijk, 3);
const auto dexKh1 = fd_1st(exKh1, ijk, 1);
const auto dexKh2 = fd_1st(exKh2, ijk, 2);
const auto dexKh3 = fd_1st(exKh3, ijk, 3);
const auto dexAt111 = fd_1st(exAt111, ijk, 1);
const auto dexAt112 = fd_1st(exAt112, ijk, 1);
const auto dexAt113 = fd_1st(exAt113, ijk, 1);
const auto dexAt122 = fd_1st(exAt122, ijk, 1);
const auto dexAt123 = fd_1st(exAt123, ijk, 1);
const auto dexAt133 = fd_1st(exAt133, ijk, 1);
const auto dexAt211 = fd_1st(exAt211, ijk, 2);
const auto dexAt212 = fd_1st(exAt212, ijk, 2);
const auto dexAt213 = fd_1st(exAt213, ijk, 2);
const auto dexAt222 = fd_1st(exAt222, ijk, 2);
const auto dexAt223 = fd_1st(exAt223, ijk, 2);
const auto dexAt233 = fd_1st(exAt233, ijk, 2);
const auto dexAt311 = fd_1st(exAt311, ijk, 3);
const auto dexAt312 = fd_1st(exAt312, ijk, 3);
const auto dexAt313 = fd_1st(exAt313, ijk, 3);
const auto dexAt322 = fd_1st(exAt322, ijk, 3);
const auto dexAt323 = fd_1st(exAt323, ijk, 3);
const auto dexAt333 = fd_1st(exAt333, ijk, 3);
const auto dtrGt11 = fd_1st(trGt11, ijk, 1);
const auto dtrGt12 = fd_1st(trGt12, ijk, 1);
const auto dtrGt13 = fd_1st(trGt13, ijk, 1);
const auto dtrGt21 = fd_1st(trGt21, ijk, 2);
const auto dtrGt22 = fd_1st(trGt22, ijk, 2);
const auto dtrGt23 = fd_1st(trGt23, ijk, 2);
const auto dtrGt31 = fd_1st(trGt31, ijk, 3);
const auto dtrGt32 = fd_1st(trGt32, ijk, 3);
const auto dtrGt33 = fd_1st(trGt33, ijk, 3);
const auto dTheta1 = fd_1st(Theta1, ijk, 1);
const auto dTheta2 = fd_1st(Theta2, ijk, 2);
const auto dTheta3 = fd_1st(Theta3, ijk, 3);
const auto dalpha1 = fd_1st(alpha1, ijk, 1);
const auto dalpha2 = fd_1st(alpha2, ijk, 2);
const auto dalpha3 = fd_1st(alpha3, ijk, 3);
const auto dbeta11 = fd_1st(beta11, ijk, 1);
const auto dbeta12 = fd_1st(beta12, ijk, 1);
const auto dbeta13 = fd_1st(beta13, ijk, 1);
const auto dbeta21 = fd_1st(beta21, ijk, 2);
const auto dbeta22 = fd_1st(beta22, ijk, 2);
const auto dbeta23 = fd_1st(beta23, ijk, 2);
const auto dbeta31 = fd_1st(beta31, ijk, 3);
const auto dbeta32 = fd_1st(beta32, ijk, 3);
const auto dbeta33 = fd_1st(beta33, ijk, 3);
const auto ddW11 = fd_2nd(W11, ijk, 1, 1);
const auto ddW12 = fd_2nd(W12, ijk, 1, 2);
const auto ddW13 = fd_2nd(W13, ijk, 1, 3);
const auto ddW22 = fd_2nd(W22, ijk, 2, 2);
const auto ddW23 = fd_2nd(W23, ijk, 2, 3);
const auto ddW33 = fd_2nd(W33, ijk, 3, 3);
const auto ddgamt1111 = fd_2nd(gamt1111, ijk, 1, 1);
const auto ddgamt1112 = fd_2nd(gamt1112, ijk, 1, 1);
const auto ddgamt1113 = fd_2nd(gamt1113, ijk, 1, 1);
const auto ddgamt1122 = fd_2nd(gamt1122, ijk, 1, 1);
const auto ddgamt1123 = fd_2nd(gamt1123, ijk, 1, 1);
const auto ddgamt1133 = fd_2nd(gamt1133, ijk, 1, 1);
const auto ddgamt1211 = fd_2nd(gamt1211, ijk, 1, 2);
const auto ddgamt1212 = fd_2nd(gamt1212, ijk, 1, 2);
const auto ddgamt1213 = fd_2nd(gamt1213, ijk, 1, 2);
const auto ddgamt1222 = fd_2nd(gamt1222, ijk, 1, 2);
const auto ddgamt1223 = fd_2nd(gamt1223, ijk, 1, 2);
const auto ddgamt1233 = fd_2nd(gamt1233, ijk, 1, 2);
const auto ddgamt1311 = fd_2nd(gamt1311, ijk, 1, 3);
const auto ddgamt1312 = fd_2nd(gamt1312, ijk, 1, 3);
const auto ddgamt1313 = fd_2nd(gamt1313, ijk, 1, 3);
const auto ddgamt1322 = fd_2nd(gamt1322, ijk, 1, 3);
const auto ddgamt1323 = fd_2nd(gamt1323, ijk, 1, 3);
const auto ddgamt1333 = fd_2nd(gamt1333, ijk, 1, 3);
const auto ddgamt2211 = fd_2nd(gamt2211, ijk, 2, 2);
const auto ddgamt2212 = fd_2nd(gamt2212, ijk, 2, 2);
const auto ddgamt2213 = fd_2nd(gamt2213, ijk, 2, 2);
const auto ddgamt2222 = fd_2nd(gamt2222, ijk, 2, 2);
const auto ddgamt2223 = fd_2nd(gamt2223, ijk, 2, 2);
const auto ddgamt2233 = fd_2nd(gamt2233, ijk, 2, 2);
const auto ddgamt2311 = fd_2nd(gamt2311, ijk, 2, 3);
const auto ddgamt2312 = fd_2nd(gamt2312, ijk, 2, 3);
const auto ddgamt2313 = fd_2nd(gamt2313, ijk, 2, 3);
const auto ddgamt2322 = fd_2nd(gamt2322, ijk, 2, 3);
const auto ddgamt2323 = fd_2nd(gamt2323, ijk, 2, 3);
const auto ddgamt2333 = fd_2nd(gamt2333, ijk, 2, 3);
const auto ddgamt3311 = fd_2nd(gamt3311, ijk, 3, 3);
const auto ddgamt3312 = fd_2nd(gamt3312, ijk, 3, 3);
const auto ddgamt3313 = fd_2nd(gamt3313, ijk, 3, 3);
const auto ddgamt3322 = fd_2nd(gamt3322, ijk, 3, 3);
const auto ddgamt3323 = fd_2nd(gamt3323, ijk, 3, 3);
const auto ddgamt3333 = fd_2nd(gamt3333, ijk, 3, 3);
const auto ddalpha11 = fd_2nd(alpha11, ijk, 1, 1);
const auto ddalpha12 = fd_2nd(alpha12, ijk, 1, 2);
const auto ddalpha13 = fd_2nd(alpha13, ijk, 1, 3);
const auto ddalpha22 = fd_2nd(alpha22, ijk, 2, 2);
const auto ddalpha23 = fd_2nd(alpha23, ijk, 2, 3);
const auto ddalpha33 = fd_2nd(alpha33, ijk, 3, 3);
const auto ddbeta111 = fd_2nd(beta111, ijk, 1, 1);
const auto ddbeta112 = fd_2nd(beta112, ijk, 1, 1);
const auto ddbeta113 = fd_2nd(beta113, ijk, 1, 1);
const auto ddbeta121 = fd_2nd(beta121, ijk, 1, 2);
const auto ddbeta122 = fd_2nd(beta122, ijk, 1, 2);
const auto ddbeta123 = fd_2nd(beta123, ijk, 1, 2);
const auto ddbeta131 = fd_2nd(beta131, ijk, 1, 3);
const auto ddbeta132 = fd_2nd(beta132, ijk, 1, 3);
const auto ddbeta133 = fd_2nd(beta133, ijk, 1, 3);
const auto ddbeta221 = fd_2nd(beta221, ijk, 2, 2);
const auto ddbeta222 = fd_2nd(beta222, ijk, 2, 2);
const auto ddbeta223 = fd_2nd(beta223, ijk, 2, 2);
const auto ddbeta231 = fd_2nd(beta231, ijk, 2, 3);
const auto ddbeta232 = fd_2nd(beta232, ijk, 2, 3);
const auto ddbeta233 = fd_2nd(beta233, ijk, 2, 3);
const auto ddbeta331 = fd_2nd(beta331, ijk, 3, 3);
const auto ddbeta332 = fd_2nd(beta332, ijk, 3, 3);
const auto ddbeta333 = fd_2nd(beta333, ijk, 3, 3);

auto dlnW1
=
dW1[ijk]/W[ijk]
;

auto dlnW2
=
dW2[ijk]/W[ijk]
;

auto dlnW3
=
dW3[ijk]/W[ijk]
;

auto invgamt11
=
-Power(gamt23[ijk],2) + gamt22[ijk]*gamt33[ijk]
;

auto invgamt12
=
gamt13[ijk]*gamt23[ijk] - gamt12[ijk]*gamt33[ijk]
;

auto invgamt13
=
-(gamt13[ijk]*gamt22[ijk]) + gamt12[ijk]*gamt23[ijk]
;

auto invgamt22
=
-Power(gamt13[ijk],2) + gamt11[ijk]*gamt33[ijk]
;

auto invgamt23
=
gamt12[ijk]*gamt13[ijk] - gamt11[ijk]*gamt23[ijk]
;

auto invgamt33
=
-Power(gamt12[ijk],2) + gamt11[ijk]*gamt22[ijk]
;

auto invgam11
=
invgamt11*Power(W[ijk],2)
;

auto invgam12
=
invgamt12*Power(W[ijk],2)
;

auto invgam13
=
invgamt13*Power(W[ijk],2)
;

auto invgam22
=
invgamt22*Power(W[ijk],2)
;

auto invgam23
=
invgamt23*Power(W[ijk],2)
;

auto invgam33
=
invgamt33*Power(W[ijk],2)
;

auto gam11
=
gamt11[ijk]/Power(W[ijk],2)
;

auto gam12
=
gamt12[ijk]/Power(W[ijk],2)
;

auto gam13
=
gamt13[ijk]/Power(W[ijk],2)
;

auto gam22
=
gamt22[ijk]/Power(W[ijk],2)
;

auto gam23
=
gamt23[ijk]/Power(W[ijk],2)
;

auto gam33
=
gamt33[ijk]/Power(W[ijk],2)
;

auto GtDDD111
=
dgamt111[ijk]/2.
;

auto GtDDD112
=
dgamt211[ijk]/2.
;

auto GtDDD113
=
dgamt311[ijk]/2.
;

auto GtDDD122
=
-0.5*dgamt122[ijk] + dgamt212[ijk]
;

auto GtDDD123
=
(-dgamt123[ijk] + dgamt213[ijk] + dgamt312[ijk])/2.
;

auto GtDDD133
=
-0.5*dgamt133[ijk] + dgamt313[ijk]
;

auto GtDDD211
=
dgamt112[ijk] - dgamt211[ijk]/2.
;

auto GtDDD212
=
dgamt122[ijk]/2.
;

auto GtDDD213
=
(dgamt123[ijk] - dgamt213[ijk] + dgamt312[ijk])/2.
;

auto GtDDD222
=
dgamt222[ijk]/2.
;

auto GtDDD223
=
dgamt322[ijk]/2.
;

auto GtDDD233
=
-0.5*dgamt233[ijk] + dgamt323[ijk]
;

auto GtDDD311
=
dgamt113[ijk] - dgamt311[ijk]/2.
;

auto GtDDD312
=
(dgamt123[ijk] + dgamt213[ijk] - dgamt312[ijk])/2.
;

auto GtDDD313
=
dgamt133[ijk]/2.
;

auto GtDDD322
=
dgamt223[ijk] - dgamt322[ijk]/2.
;

auto GtDDD323
=
dgamt233[ijk]/2.
;

auto GtDDD333
=
dgamt333[ijk]/2.
;

auto GtDDU111
=
GtDDD111*invgamt11 + GtDDD112*invgamt12 + GtDDD113*invgamt13
;

auto GtDDU112
=
GtDDD111*invgamt12 + GtDDD112*invgamt22 + GtDDD113*invgamt23
;

auto GtDDU113
=
GtDDD111*invgamt13 + GtDDD112*invgamt23 + GtDDD113*invgamt33
;

auto GtDDU121
=
GtDDD112*invgamt11 + GtDDD122*invgamt12 + GtDDD123*invgamt13
;

auto GtDDU122
=
GtDDD112*invgamt12 + GtDDD122*invgamt22 + GtDDD123*invgamt23
;

auto GtDDU123
=
GtDDD112*invgamt13 + GtDDD122*invgamt23 + GtDDD123*invgamt33
;

auto GtDDU131
=
GtDDD113*invgamt11 + GtDDD123*invgamt12 + GtDDD133*invgamt13
;

auto GtDDU132
=
GtDDD113*invgamt12 + GtDDD123*invgamt22 + GtDDD133*invgamt23
;

auto GtDDU133
=
GtDDD113*invgamt13 + GtDDD123*invgamt23 + GtDDD133*invgamt33
;

auto GtDDU211
=
GtDDD211*invgamt11 + GtDDD212*invgamt12 + GtDDD213*invgamt13
;

auto GtDDU212
=
GtDDD211*invgamt12 + GtDDD212*invgamt22 + GtDDD213*invgamt23
;

auto GtDDU213
=
GtDDD211*invgamt13 + GtDDD212*invgamt23 + GtDDD213*invgamt33
;

auto GtDDU221
=
GtDDD212*invgamt11 + GtDDD222*invgamt12 + GtDDD223*invgamt13
;

auto GtDDU222
=
GtDDD212*invgamt12 + GtDDD222*invgamt22 + GtDDD223*invgamt23
;

auto GtDDU223
=
GtDDD212*invgamt13 + GtDDD222*invgamt23 + GtDDD223*invgamt33
;

auto GtDDU231
=
GtDDD213*invgamt11 + GtDDD223*invgamt12 + GtDDD233*invgamt13
;

auto GtDDU232
=
GtDDD213*invgamt12 + GtDDD223*invgamt22 + GtDDD233*invgamt23
;

auto GtDDU233
=
GtDDD213*invgamt13 + GtDDD223*invgamt23 + GtDDD233*invgamt33
;

auto GtDDU311
=
GtDDD311*invgamt11 + GtDDD312*invgamt12 + GtDDD313*invgamt13
;

auto GtDDU312
=
GtDDD311*invgamt12 + GtDDD312*invgamt22 + GtDDD313*invgamt23
;

auto GtDDU313
=
GtDDD311*invgamt13 + GtDDD312*invgamt23 + GtDDD313*invgamt33
;

auto GtDDU321
=
GtDDD312*invgamt11 + GtDDD322*invgamt12 + GtDDD323*invgamt13
;

auto GtDDU322
=
GtDDD312*invgamt12 + GtDDD322*invgamt22 + GtDDD323*invgamt23
;

auto GtDDU323
=
GtDDD312*invgamt13 + GtDDD322*invgamt23 + GtDDD323*invgamt33
;

auto GtDDU331
=
GtDDD313*invgamt11 + GtDDD323*invgamt12 + GtDDD333*invgamt13
;

auto GtDDU332
=
GtDDD313*invgamt12 + GtDDD323*invgamt22 + GtDDD333*invgamt23
;

auto GtDDU333
=
GtDDD313*invgamt13 + GtDDD323*invgamt23 + GtDDD333*invgamt33
;

auto Gt111
=
GtDDD111*invgamt11 + GtDDD211*invgamt12 + GtDDD311*invgamt13
;

auto Gt112
=
GtDDD112*invgamt11 + GtDDD212*invgamt12 + GtDDD312*invgamt13
;

auto Gt113
=
GtDDD113*invgamt11 + GtDDD213*invgamt12 + GtDDD313*invgamt13
;

auto Gt122
=
GtDDD122*invgamt11 + GtDDD222*invgamt12 + GtDDD322*invgamt13
;

auto Gt123
=
GtDDD123*invgamt11 + GtDDD223*invgamt12 + GtDDD323*invgamt13
;

auto Gt133
=
GtDDD133*invgamt11 + GtDDD233*invgamt12 + GtDDD333*invgamt13
;

auto Gt211
=
GtDDD111*invgamt12 + GtDDD211*invgamt22 + GtDDD311*invgamt23
;

auto Gt212
=
GtDDD112*invgamt12 + GtDDD212*invgamt22 + GtDDD312*invgamt23
;

auto Gt213
=
GtDDD113*invgamt12 + GtDDD213*invgamt22 + GtDDD313*invgamt23
;

auto Gt222
=
GtDDD122*invgamt12 + GtDDD222*invgamt22 + GtDDD322*invgamt23
;

auto Gt223
=
GtDDD123*invgamt12 + GtDDD223*invgamt22 + GtDDD323*invgamt23
;

auto Gt233
=
GtDDD133*invgamt12 + GtDDD233*invgamt22 + GtDDD333*invgamt23
;

auto Gt311
=
GtDDD111*invgamt13 + GtDDD211*invgamt23 + GtDDD311*invgamt33
;

auto Gt312
=
GtDDD112*invgamt13 + GtDDD212*invgamt23 + GtDDD312*invgamt33
;

auto Gt313
=
GtDDD113*invgamt13 + GtDDD213*invgamt23 + GtDDD313*invgamt33
;

auto Gt322
=
GtDDD122*invgamt13 + GtDDD222*invgamt23 + GtDDD322*invgamt33
;

auto Gt323
=
GtDDD123*invgamt13 + GtDDD223*invgamt23 + GtDDD323*invgamt33
;

auto Gt333
=
GtDDD133*invgamt13 + GtDDD233*invgamt23 + GtDDD333*invgamt33
;

auto trGtd1
=
Gt111*invgamt11 + 2*Gt112*invgamt12 + 2*Gt113*invgamt13 + Gt122*invgamt22 +
  2*Gt123*invgamt23 + Gt133*invgamt33
;

auto trGtd2
=
Gt211*invgamt11 + 2*Gt212*invgamt12 + 2*Gt213*invgamt13 + Gt222*invgamt22 +
  2*Gt223*invgamt23 + Gt233*invgamt33
;

auto trGtd3
=
Gt311*invgamt11 + 2*Gt312*invgamt12 + 2*Gt313*invgamt13 + Gt322*invgamt22 +
  2*Gt323*invgamt23 + Gt333*invgamt33
;

auto dgam111
=
(dgamt111[ijk] - 2*dlnW1*gamt11[ijk])/Power(W[ijk],2)
;

auto dgam112
=
(dgamt112[ijk] - 2*dlnW1*gamt12[ijk])/Power(W[ijk],2)
;

auto dgam113
=
(dgamt113[ijk] - 2*dlnW1*gamt13[ijk])/Power(W[ijk],2)
;

auto dgam122
=
(dgamt122[ijk] - 2*dlnW1*gamt22[ijk])/Power(W[ijk],2)
;

auto dgam123
=
(dgamt123[ijk] - 2*dlnW1*gamt23[ijk])/Power(W[ijk],2)
;

auto dgam133
=
(dgamt133[ijk] - 2*dlnW1*gamt33[ijk])/Power(W[ijk],2)
;

auto dgam211
=
(dgamt211[ijk] - 2*dlnW2*gamt11[ijk])/Power(W[ijk],2)
;

auto dgam212
=
(dgamt212[ijk] - 2*dlnW2*gamt12[ijk])/Power(W[ijk],2)
;

auto dgam213
=
(dgamt213[ijk] - 2*dlnW2*gamt13[ijk])/Power(W[ijk],2)
;

auto dgam222
=
(dgamt222[ijk] - 2*dlnW2*gamt22[ijk])/Power(W[ijk],2)
;

auto dgam223
=
(dgamt223[ijk] - 2*dlnW2*gamt23[ijk])/Power(W[ijk],2)
;

auto dgam233
=
(dgamt233[ijk] - 2*dlnW2*gamt33[ijk])/Power(W[ijk],2)
;

auto dgam311
=
(dgamt311[ijk] - 2*dlnW3*gamt11[ijk])/Power(W[ijk],2)
;

auto dgam312
=
(dgamt312[ijk] - 2*dlnW3*gamt12[ijk])/Power(W[ijk],2)
;

auto dgam313
=
(dgamt313[ijk] - 2*dlnW3*gamt13[ijk])/Power(W[ijk],2)
;

auto dgam322
=
(dgamt322[ijk] - 2*dlnW3*gamt22[ijk])/Power(W[ijk],2)
;

auto dgam323
=
(dgamt323[ijk] - 2*dlnW3*gamt23[ijk])/Power(W[ijk],2)
;

auto dgam333
=
(dgamt333[ijk] - 2*dlnW3*gamt33[ijk])/Power(W[ijk],2)
;

auto GamDDD111
=
dgam111/2.
;

auto GamDDD112
=
dgam211/2.
;

auto GamDDD113
=
dgam311/2.
;

auto GamDDD122
=
-0.5*dgam122 + dgam212
;

auto GamDDD123
=
(-dgam123 + dgam213 + dgam312)/2.
;

auto GamDDD133
=
-0.5*dgam133 + dgam313
;

auto GamDDD211
=
dgam112 - dgam211/2.
;

auto GamDDD212
=
dgam122/2.
;

auto GamDDD213
=
(dgam123 - dgam213 + dgam312)/2.
;

auto GamDDD222
=
dgam222/2.
;

auto GamDDD223
=
dgam322/2.
;

auto GamDDD233
=
-0.5*dgam233 + dgam323
;

auto GamDDD311
=
dgam113 - dgam311/2.
;

auto GamDDD312
=
(dgam123 + dgam213 - dgam312)/2.
;

auto GamDDD313
=
dgam133/2.
;

auto GamDDD322
=
dgam223 - dgam322/2.
;

auto GamDDD323
=
dgam233/2.
;

auto GamDDD333
=
dgam333/2.
;

auto Gam111
=
GamDDD111*invgam11 + GamDDD211*invgam12 + GamDDD311*invgam13
;

auto Gam112
=
GamDDD112*invgam11 + GamDDD212*invgam12 + GamDDD312*invgam13
;

auto Gam113
=
GamDDD113*invgam11 + GamDDD213*invgam12 + GamDDD313*invgam13
;

auto Gam122
=
GamDDD122*invgam11 + GamDDD222*invgam12 + GamDDD322*invgam13
;

auto Gam123
=
GamDDD123*invgam11 + GamDDD223*invgam12 + GamDDD323*invgam13
;

auto Gam133
=
GamDDD133*invgam11 + GamDDD233*invgam12 + GamDDD333*invgam13
;

auto Gam211
=
GamDDD111*invgam12 + GamDDD211*invgam22 + GamDDD311*invgam23
;

auto Gam212
=
GamDDD112*invgam12 + GamDDD212*invgam22 + GamDDD312*invgam23
;

auto Gam213
=
GamDDD113*invgam12 + GamDDD213*invgam22 + GamDDD313*invgam23
;

auto Gam222
=
GamDDD122*invgam12 + GamDDD222*invgam22 + GamDDD322*invgam23
;

auto Gam223
=
GamDDD123*invgam12 + GamDDD223*invgam22 + GamDDD323*invgam23
;

auto Gam233
=
GamDDD133*invgam12 + GamDDD233*invgam22 + GamDDD333*invgam23
;

auto Gam311
=
GamDDD111*invgam13 + GamDDD211*invgam23 + GamDDD311*invgam33
;

auto Gam312
=
GamDDD112*invgam13 + GamDDD212*invgam23 + GamDDD312*invgam33
;

auto Gam313
=
GamDDD113*invgam13 + GamDDD213*invgam23 + GamDDD313*invgam33
;

auto Gam322
=
GamDDD122*invgam13 + GamDDD222*invgam23 + GamDDD322*invgam33
;

auto Gam323
=
GamDDD123*invgam13 + GamDDD223*invgam23 + GamDDD323*invgam33
;

auto Gam333
=
GamDDD133*invgam13 + GamDDD233*invgam23 + GamDDD333*invgam33
;

auto exAtUU11
=
Power(invgamt11,2)*exAt11[ijk] + 2*invgamt11*invgamt12*exAt12[ijk] +
  2*invgamt11*invgamt13*exAt13[ijk] + Power(invgamt12,2)*exAt22[ijk] +
  2*invgamt12*invgamt13*exAt23[ijk] + Power(invgamt13,2)*exAt33[ijk]
;

auto exAtUU12
=
invgamt11*invgamt12*exAt11[ijk] +
  (Power(invgamt12,2) + invgamt11*invgamt22)*exAt12[ijk] +
  invgamt12*invgamt13*exAt13[ijk] + invgamt11*invgamt23*exAt13[ijk] +
  invgamt12*invgamt22*exAt22[ijk] + invgamt13*invgamt22*exAt23[ijk] +
  invgamt12*invgamt23*exAt23[ijk] + invgamt13*invgamt23*exAt33[ijk]
;

auto exAtUU13
=
invgamt11*invgamt13*exAt11[ijk] +
  (invgamt12*invgamt13 + invgamt11*invgamt23)*exAt12[ijk] +
  Power(invgamt13,2)*exAt13[ijk] + invgamt11*invgamt33*exAt13[ijk] +
  invgamt12*invgamt23*exAt22[ijk] + invgamt13*invgamt23*exAt23[ijk] +
  invgamt12*invgamt33*exAt23[ijk] + invgamt13*invgamt33*exAt33[ijk]
;

auto exAtUU22
=
Power(invgamt12,2)*exAt11[ijk] + 2*invgamt12*invgamt22*exAt12[ijk] +
  2*invgamt12*invgamt23*exAt13[ijk] + Power(invgamt22,2)*exAt22[ijk] +
  2*invgamt22*invgamt23*exAt23[ijk] + Power(invgamt23,2)*exAt33[ijk]
;

auto exAtUU23
=
invgamt12*invgamt13*exAt11[ijk] +
  (invgamt13*invgamt22 + invgamt12*invgamt23)*exAt12[ijk] +
  invgamt13*invgamt23*exAt13[ijk] + invgamt12*invgamt33*exAt13[ijk] +
  invgamt22*invgamt23*exAt22[ijk] + Power(invgamt23,2)*exAt23[ijk] +
  invgamt22*invgamt33*exAt23[ijk] + invgamt23*invgamt33*exAt33[ijk]
;

auto exAtUU33
=
Power(invgamt13,2)*exAt11[ijk] + 2*invgamt13*invgamt23*exAt12[ijk] +
  2*invgamt13*invgamt33*exAt13[ijk] + Power(invgamt23,2)*exAt22[ijk] +
  2*invgamt23*invgamt33*exAt23[ijk] + Power(invgamt33,2)*exAt33[ijk]
;

auto tDtDW11
=
ddW11[ijk] - Gt111*dW1[ijk] - Gt211*dW2[ijk] - Gt311*dW3[ijk]
;

auto tDtDW12
=
ddW12[ijk] - Gt112*dW1[ijk] - Gt212*dW2[ijk] - Gt312*dW3[ijk]
;

auto tDtDW13
=
ddW13[ijk] - Gt113*dW1[ijk] - Gt213*dW2[ijk] - Gt313*dW3[ijk]
;

auto tDtDW22
=
ddW22[ijk] - Gt122*dW1[ijk] - Gt222*dW2[ijk] - Gt322*dW3[ijk]
;

auto tDtDW23
=
ddW23[ijk] - Gt123*dW1[ijk] - Gt223*dW2[ijk] - Gt323*dW3[ijk]
;

auto tDtDW33
=
ddW33[ijk] - Gt133*dW1[ijk] - Gt233*dW2[ijk] - Gt333*dW3[ijk]
;

auto DDalpha11
=
-(Gam111*dalpha1[ijk]) - Gam211*dalpha2[ijk] - Gam311*dalpha3[ijk] +
  ddalpha11[ijk]
;

auto DDalpha12
=
-(Gam112*dalpha1[ijk]) - Gam212*dalpha2[ijk] - Gam312*dalpha3[ijk] +
  ddalpha12[ijk]
;

auto DDalpha13
=
-(Gam113*dalpha1[ijk]) - Gam213*dalpha2[ijk] - Gam313*dalpha3[ijk] +
  ddalpha13[ijk]
;

auto DDalpha22
=
-(Gam122*dalpha1[ijk]) - Gam222*dalpha2[ijk] - Gam322*dalpha3[ijk] +
  ddalpha22[ijk]
;

auto DDalpha23
=
-(Gam123*dalpha1[ijk]) - Gam223*dalpha2[ijk] - Gam323*dalpha3[ijk] +
  ddalpha23[ijk]
;

auto DDalpha33
=
-(Gam133*dalpha1[ijk]) - Gam233*dalpha2[ijk] - Gam333*dalpha3[ijk] +
  ddalpha33[ijk]
;

auto RtW11
=
(tDtDW11 + gamt11[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

auto RtW12
=
(tDtDW12 + gamt12[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

auto RtW13
=
(tDtDW13 + gamt13[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

auto RtW22
=
(tDtDW22 + gamt22[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

auto RtW23
=
(tDtDW23 + gamt23[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

auto RtW33
=
(tDtDW33 + gamt33[ijk]*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W[ijk]))/W[ijk]
;

auto Rt11
=
3*Gt111*GtDDU111 + 3*Gt112*GtDDU112 + 3*Gt113*GtDDU113 + 2*Gt211*GtDDU121 +
  2*Gt212*GtDDU122 + 2*Gt213*GtDDU123 + 2*Gt311*GtDDU131 +
  2*Gt312*GtDDU132 + 2*Gt313*GtDDU133 + Gt211*GtDDU211 + Gt212*GtDDU212 +
  Gt213*GtDDU213 + Gt311*GtDDU311 + Gt312*GtDDU312 + Gt313*GtDDU313 +
  GtDDD111*trGtd1 + GtDDD112*trGtd2 + GtDDD113*trGtd3 -
  (invgamt11*ddgamt1111[ijk])/2. - invgamt12*ddgamt1211[ijk] -
  invgamt13*ddgamt1311[ijk] - (invgamt22*ddgamt2211[ijk])/2. -
  invgamt23*ddgamt2311[ijk] - (invgamt33*ddgamt3311[ijk])/2. +
  dtrGt11[ijk]*gamt11[ijk] + dtrGt12[ijk]*gamt12[ijk] +
  dtrGt13[ijk]*gamt13[ijk]
;

auto Rt12
=
(2*Gt112*GtDDU111 + 2*Gt122*GtDDU112 + 2*Gt123*GtDDU113 +
    2*Gt111*GtDDU121 + 2*Gt212*GtDDU121 + 2*Gt112*GtDDU122 +
    2*Gt222*GtDDU122 + 2*Gt113*GtDDU123 + 2*Gt223*GtDDU123 +
    2*Gt312*GtDDU131 + 2*Gt322*GtDDU132 + 2*Gt323*GtDDU133 +
    2*Gt111*GtDDU211 + 2*Gt112*GtDDU212 + 2*Gt113*GtDDU213 +
    4*Gt211*GtDDU221 + 4*Gt212*GtDDU222 + 4*Gt213*GtDDU223 +
    2*Gt311*GtDDU231 + 2*Gt312*GtDDU232 + 2*Gt313*GtDDU233 +
    2*Gt311*GtDDU321 + 2*Gt312*GtDDU322 + 2*Gt313*GtDDU323 +
    GtDDD112*trGtd1 + GtDDD211*trGtd1 + GtDDD122*trGtd2 + GtDDD212*trGtd2 +
    GtDDD123*trGtd3 + GtDDD213*trGtd3 - invgamt11*ddgamt1112[ijk] -
    2*invgamt12*ddgamt1212[ijk] - 2*invgamt13*ddgamt1312[ijk] -
    invgamt22*ddgamt2212[ijk] - 2*invgamt23*ddgamt2312[ijk] -
    invgamt33*ddgamt3312[ijk] + dtrGt21[ijk]*gamt11[ijk] +
    dtrGt11[ijk]*gamt12[ijk] + dtrGt22[ijk]*gamt12[ijk] +
    dtrGt23[ijk]*gamt13[ijk] + dtrGt12[ijk]*gamt22[ijk] +
    dtrGt13[ijk]*gamt23[ijk])/2.
;

auto Rt13
=
(2*Gt113*GtDDU111 + 2*Gt123*GtDDU112 + 2*Gt133*GtDDU113 +
    2*Gt213*GtDDU121 + 2*Gt223*GtDDU122 + 2*Gt233*GtDDU123 +
    2*Gt111*GtDDU131 + 2*Gt313*GtDDU131 + 2*Gt112*GtDDU132 +
    2*Gt323*GtDDU132 + 2*Gt113*GtDDU133 + 2*Gt333*GtDDU133 +
    2*Gt211*GtDDU231 + 2*Gt212*GtDDU232 + 2*Gt213*GtDDU233 +
    2*Gt111*GtDDU311 + 2*Gt112*GtDDU312 + 2*Gt113*GtDDU313 +
    2*Gt211*GtDDU321 + 2*Gt212*GtDDU322 + 2*Gt213*GtDDU323 +
    4*Gt311*GtDDU331 + 4*Gt312*GtDDU332 + 4*Gt313*GtDDU333 +
    GtDDD113*trGtd1 + GtDDD311*trGtd1 + GtDDD123*trGtd2 + GtDDD312*trGtd2 +
    GtDDD133*trGtd3 + GtDDD313*trGtd3 - invgamt11*ddgamt1113[ijk] -
    2*invgamt12*ddgamt1213[ijk] - 2*invgamt13*ddgamt1313[ijk] -
    invgamt22*ddgamt2213[ijk] - 2*invgamt23*ddgamt2313[ijk] -
    invgamt33*ddgamt3313[ijk] + dtrGt31[ijk]*gamt11[ijk] +
    dtrGt32[ijk]*gamt12[ijk] + dtrGt11[ijk]*gamt13[ijk] +
    dtrGt33[ijk]*gamt13[ijk] + dtrGt12[ijk]*gamt23[ijk] +
    dtrGt13[ijk]*gamt33[ijk])/2.
;

auto Rt22
=
Gt112*GtDDU121 + Gt122*GtDDU122 + Gt123*GtDDU123 + 2*Gt112*GtDDU211 +
  2*Gt122*GtDDU212 + 2*Gt123*GtDDU213 + 3*Gt212*GtDDU221 +
  3*Gt222*GtDDU222 + 3*Gt223*GtDDU223 + 2*Gt312*GtDDU231 +
  2*Gt322*GtDDU232 + 2*Gt323*GtDDU233 + Gt312*GtDDU321 + Gt322*GtDDU322 +
  Gt323*GtDDU323 + GtDDD212*trGtd1 + GtDDD222*trGtd2 + GtDDD223*trGtd3 -
  (invgamt11*ddgamt1122[ijk])/2. - invgamt12*ddgamt1222[ijk] -
  invgamt13*ddgamt1322[ijk] - (invgamt22*ddgamt2222[ijk])/2. -
  invgamt23*ddgamt2322[ijk] - (invgamt33*ddgamt3322[ijk])/2. +
  dtrGt21[ijk]*gamt12[ijk] + dtrGt22[ijk]*gamt22[ijk] +
  dtrGt23[ijk]*gamt23[ijk]
;

auto Rt23
=
(2*Gt112*GtDDU131 + 2*Gt122*GtDDU132 + 2*Gt123*GtDDU133 +
    2*Gt113*GtDDU211 + 2*Gt123*GtDDU212 + 2*Gt133*GtDDU213 +
    2*Gt213*GtDDU221 + 2*Gt223*GtDDU222 + 2*Gt233*GtDDU223 +
    2*Gt212*GtDDU231 + 2*Gt313*GtDDU231 + 2*Gt222*GtDDU232 +
    2*Gt323*GtDDU232 + 2*Gt223*GtDDU233 + 2*Gt333*GtDDU233 +
    2*Gt112*GtDDU311 + 2*Gt122*GtDDU312 + 2*Gt123*GtDDU313 +
    2*Gt212*GtDDU321 + 2*Gt222*GtDDU322 + 2*Gt223*GtDDU323 +
    4*Gt312*GtDDU331 + 4*Gt322*GtDDU332 + 4*Gt323*GtDDU333 +
    GtDDD213*trGtd1 + GtDDD312*trGtd1 + GtDDD223*trGtd2 + GtDDD322*trGtd2 +
    GtDDD233*trGtd3 + GtDDD323*trGtd3 - invgamt11*ddgamt1123[ijk] -
    2*invgamt12*ddgamt1223[ijk] - 2*invgamt13*ddgamt1323[ijk] -
    invgamt22*ddgamt2223[ijk] - 2*invgamt23*ddgamt2323[ijk] -
    invgamt33*ddgamt3323[ijk] + dtrGt31[ijk]*gamt12[ijk] +
    dtrGt21[ijk]*gamt13[ijk] + dtrGt32[ijk]*gamt22[ijk] +
    dtrGt22[ijk]*gamt23[ijk] + dtrGt33[ijk]*gamt23[ijk] +
    dtrGt23[ijk]*gamt33[ijk])/2.
;

auto Rt33
=
Gt113*GtDDU131 + Gt123*GtDDU132 + Gt133*GtDDU133 + Gt213*GtDDU231 +
  Gt223*GtDDU232 + Gt233*GtDDU233 + 2*Gt113*GtDDU311 + 2*Gt123*GtDDU312 +
  2*Gt133*GtDDU313 + 2*Gt213*GtDDU321 + 2*Gt223*GtDDU322 +
  2*Gt233*GtDDU323 + 3*Gt313*GtDDU331 + 3*Gt323*GtDDU332 +
  3*Gt333*GtDDU333 + GtDDD313*trGtd1 + GtDDD323*trGtd2 + GtDDD333*trGtd3 -
  (invgamt11*ddgamt1133[ijk])/2. - invgamt12*ddgamt1233[ijk] -
  invgamt13*ddgamt1333[ijk] - (invgamt22*ddgamt2233[ijk])/2. -
  invgamt23*ddgamt2333[ijk] - (invgamt33*ddgamt3333[ijk])/2. +
  dtrGt31[ijk]*gamt13[ijk] + dtrGt32[ijk]*gamt23[ijk] +
  dtrGt33[ijk]*gamt33[ijk]
;

auto R11
=
Rt11 + RtW11
;

auto R12
=
Rt12 + RtW12
;

auto R13
=
Rt13 + RtW13
;

auto R22
=
Rt22 + RtW22
;

auto R23
=
Rt23 + RtW23
;

auto R33
=
Rt33 + RtW33
;

auto trR
=
invgam11*R11 + 2*invgam12*R12 + 2*invgam13*R13 + invgam22*R22 +
  2*invgam23*R23 + invgam33*R33
;

auto rho
=
(Power(beta1[ijk],2)*eT11[ijk] + Power(beta2[ijk],2)*eT22[ijk] +
    Power(beta3[ijk],2)*eT33[ijk] +
    2*beta1[ijk]*(beta2[ijk]*eT12[ijk] + beta3[ijk]*eT13[ijk] -
       eTt1[ijk]) + 2*beta2[ijk]*(beta3[ijk]*eT23[ijk] - eTt2[ijk]) -
    2*beta3[ijk]*eTt3[ijk] + eTtt[ijk])/Power(alpha[ijk],2)
;

auto Sm1
=
(beta1[ijk]*eT11[ijk] + beta2[ijk]*eT12[ijk] + beta3[ijk]*eT13[ijk] -
    eTt1[ijk])/alpha[ijk]
;

auto Sm2
=
(beta1[ijk]*eT12[ijk] + beta2[ijk]*eT22[ijk] + beta3[ijk]*eT23[ijk] -
    eTt2[ijk])/alpha[ijk]
;

auto Sm3
=
(beta1[ijk]*eT13[ijk] + beta2[ijk]*eT23[ijk] + beta3[ijk]*eT33[ijk] -
    eTt3[ijk])/alpha[ijk]
;

auto Ss11
=
eT11[ijk]
;

auto Ss12
=
eT12[ijk]
;

auto Ss13
=
eT13[ijk]
;

auto Ss22
=
eT22[ijk]
;

auto Ss23
=
eT23[ijk]
;

auto Ss33
=
eT33[ijk]
;

auto trSs
=
invgam11*Ss11 + 2*invgam12*Ss12 + 2*invgam13*Ss13 + invgam22*Ss22 +
  2*invgam23*Ss23 + invgam33*Ss33
;


dtW[ijk]
=
beta1[ijk]*dW1[ijk] + beta2[ijk]*dW2[ijk] + beta3[ijk]*dW3[ijk] -
  ((dbeta11[ijk] + dbeta22[ijk] + dbeta33[ijk])*W[ijk])/3. +
  (alpha[ijk]*exKh[ijk]*W[ijk])/3. + (2*alpha[ijk]*Theta[ijk]*W[ijk])/3.
;

dtgamt11[ijk]
=
beta1[ijk]*dgamt111[ijk] + beta2[ijk]*dgamt211[ijk] +
  beta3[ijk]*dgamt311[ijk] - 2*alpha[ijk]*exAt11[ijk] +
  2*dbeta11[ijk]*gamt11[ijk] -
  (2*(dbeta11[ijk] + dbeta22[ijk] + dbeta33[ijk])*gamt11[ijk])/3. +
  2*dbeta12[ijk]*gamt12[ijk] + 2*dbeta13[ijk]*gamt13[ijk]
;

dtgamt12[ijk]
=
beta1[ijk]*dgamt112[ijk] + beta2[ijk]*dgamt212[ijk] +
  beta3[ijk]*dgamt312[ijk] - 2*alpha[ijk]*exAt12[ijk] +
  dbeta21[ijk]*gamt11[ijk] + (dbeta11[ijk]*gamt12[ijk])/3. +
  (dbeta22[ijk]*gamt12[ijk])/3. - (2*dbeta33[ijk]*gamt12[ijk])/3. +
  dbeta23[ijk]*gamt13[ijk] + dbeta12[ijk]*gamt22[ijk] +
  dbeta13[ijk]*gamt23[ijk]
;

dtgamt13[ijk]
=
beta1[ijk]*dgamt113[ijk] + beta2[ijk]*dgamt213[ijk] +
  beta3[ijk]*dgamt313[ijk] - 2*alpha[ijk]*exAt13[ijk] +
  dbeta31[ijk]*gamt11[ijk] + dbeta32[ijk]*gamt12[ijk] +
  (dbeta11[ijk]*gamt13[ijk])/3. - (2*dbeta22[ijk]*gamt13[ijk])/3. +
  (dbeta33[ijk]*gamt13[ijk])/3. + dbeta12[ijk]*gamt23[ijk] +
  dbeta13[ijk]*gamt33[ijk]
;

dtgamt22[ijk]
=
beta1[ijk]*dgamt122[ijk] + beta2[ijk]*dgamt222[ijk] +
  beta3[ijk]*dgamt322[ijk] - 2*alpha[ijk]*exAt22[ijk] +
  2*dbeta21[ijk]*gamt12[ijk] + 2*dbeta22[ijk]*gamt22[ijk] -
  (2*(dbeta11[ijk] + dbeta22[ijk] + dbeta33[ijk])*gamt22[ijk])/3. +
  2*dbeta23[ijk]*gamt23[ijk]
;

dtgamt23[ijk]
=
beta1[ijk]*dgamt123[ijk] + beta2[ijk]*dgamt223[ijk] +
  beta3[ijk]*dgamt323[ijk] - 2*alpha[ijk]*exAt23[ijk] +
  dbeta31[ijk]*gamt12[ijk] + dbeta21[ijk]*gamt13[ijk] +
  dbeta32[ijk]*gamt22[ijk] - (2*dbeta11[ijk]*gamt23[ijk])/3. +
  (dbeta22[ijk]*gamt23[ijk])/3. + (dbeta33[ijk]*gamt23[ijk])/3. +
  dbeta23[ijk]*gamt33[ijk]
;

dtgamt33[ijk]
=
beta1[ijk]*dgamt133[ijk] + beta2[ijk]*dgamt233[ijk] +
  beta3[ijk]*dgamt333[ijk] - 2*alpha[ijk]*exAt33[ijk] +
  2*dbeta31[ijk]*gamt13[ijk] + 2*dbeta32[ijk]*gamt23[ijk] +
  2*dbeta33[ijk]*gamt33[ijk] -
  (2*(dbeta11[ijk] + dbeta22[ijk] + dbeta33[ijk])*gamt33[ijk])/3.
;

dtexKh[ijk]
=
-(DDalpha11*invgam11) - 2*DDalpha12*invgam12 - 2*DDalpha13*invgam13 -
  DDalpha22*invgam22 - 2*DDalpha23*invgam23 - DDalpha33*invgam33 +
  beta1[ijk]*dexKh1[ijk] + beta2[ijk]*dexKh2[ijk] + beta3[ijk]*dexKh3[ijk] +
  alpha[ijk]*(4*cpi*rho + 4*cpi*trSs + exAtUU11*exAt11[ijk] +
     2*exAtUU12*exAt12[ijk] + 2*exAtUU13*exAt13[ijk] +
     exAtUU22*exAt22[ijk] + 2*exAtUU23*exAt23[ijk] + exAtUU33*exAt33[ijk] +
     Power(exKh[ijk],2)/3. + ckappa1*Theta[ijk] -
     ckappa1*ckappa2*Theta[ijk] + (4*exKh[ijk]*Theta[ijk])/3. +
     (4*Power(Theta[ijk],2))/3.)
;

dtexAt11[ijk]
=
(3*beta1[ijk]*dexAt111[ijk] + 3*beta2[ijk]*dexAt211[ijk] +
    3*beta3[ijk]*dexAt311[ijk] + 4*dbeta11[ijk]*exAt11[ijk] -
    2*dbeta22[ijk]*exAt11[ijk] - 2*dbeta33[ijk]*exAt11[ijk] -
    6*invgamt11*alpha[ijk]*Power(exAt11[ijk],2) +
    6*dbeta12[ijk]*exAt12[ijk] -
    12*invgamt12*alpha[ijk]*exAt11[ijk]*exAt12[ijk] -
    6*invgamt22*alpha[ijk]*Power(exAt12[ijk],2) +
    6*dbeta13[ijk]*exAt13[ijk] -
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
(3*beta1[ijk]*dexAt112[ijk] + 3*beta2[ijk]*dexAt212[ijk] +
    3*beta3[ijk]*dexAt312[ijk] + 3*dbeta21[ijk]*exAt11[ijk] +
    dbeta11[ijk]*exAt12[ijk] + dbeta22[ijk]*exAt12[ijk] -
    2*dbeta33[ijk]*exAt12[ijk] -
    6*invgamt11*alpha[ijk]*exAt11[ijk]*exAt12[ijk] -
    6*invgamt12*alpha[ijk]*Power(exAt12[ijk],2) +
    3*dbeta23[ijk]*exAt13[ijk] -
    6*invgamt13*alpha[ijk]*exAt12[ijk]*exAt13[ijk] +
    3*dbeta12[ijk]*exAt22[ijk] -
    6*invgamt12*alpha[ijk]*exAt11[ijk]*exAt22[ijk] -
    6*invgamt22*alpha[ijk]*exAt12[ijk]*exAt22[ijk] -
    6*invgamt23*alpha[ijk]*exAt13[ijk]*exAt22[ijk] +
    3*dbeta13[ijk]*exAt23[ijk] -
    6*invgamt13*alpha[ijk]*exAt11[ijk]*exAt23[ijk] -
    6*invgamt23*alpha[ijk]*exAt12[ijk]*exAt23[ijk] -
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
(3*beta1[ijk]*dexAt113[ijk] + 3*beta2[ijk]*dexAt213[ijk] +
    3*beta3[ijk]*dexAt313[ijk] + 3*dbeta31[ijk]*exAt11[ijk] +
    3*dbeta32[ijk]*exAt12[ijk] + dbeta11[ijk]*exAt13[ijk] -
    2*dbeta22[ijk]*exAt13[ijk] + dbeta33[ijk]*exAt13[ijk] -
    6*invgamt11*alpha[ijk]*exAt11[ijk]*exAt13[ijk] -
    6*invgamt12*alpha[ijk]*exAt12[ijk]*exAt13[ijk] -
    6*invgamt13*alpha[ijk]*Power(exAt13[ijk],2) +
    3*dbeta12[ijk]*exAt23[ijk] -
    6*invgamt12*alpha[ijk]*exAt11[ijk]*exAt23[ijk] -
    6*invgamt22*alpha[ijk]*exAt12[ijk]*exAt23[ijk] -
    6*invgamt23*alpha[ijk]*exAt13[ijk]*exAt23[ijk] +
    3*dbeta13[ijk]*exAt33[ijk] -
    6*invgamt13*alpha[ijk]*exAt11[ijk]*exAt33[ijk] -
    6*invgamt23*alpha[ijk]*exAt12[ijk]*exAt33[ijk] -
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
(3*beta1[ijk]*dexAt122[ijk] + 3*beta2[ijk]*dexAt222[ijk] +
    3*beta3[ijk]*dexAt322[ijk] + 6*dbeta21[ijk]*exAt12[ijk] -
    6*invgamt11*alpha[ijk]*Power(exAt12[ijk],2) -
    2*dbeta11[ijk]*exAt22[ijk] + 4*dbeta22[ijk]*exAt22[ijk] -
    2*dbeta33[ijk]*exAt22[ijk] -
    12*invgamt12*alpha[ijk]*exAt12[ijk]*exAt22[ijk] -
    6*invgamt22*alpha[ijk]*Power(exAt22[ijk],2) +
    6*dbeta23[ijk]*exAt23[ijk] -
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
(3*beta1[ijk]*dexAt123[ijk] + 3*beta2[ijk]*dexAt223[ijk] +
    3*beta3[ijk]*dexAt323[ijk] + 3*dbeta31[ijk]*exAt12[ijk] +
    3*dbeta21[ijk]*exAt13[ijk] -
    6*invgamt11*alpha[ijk]*exAt12[ijk]*exAt13[ijk] +
    3*dbeta32[ijk]*exAt22[ijk] -
    6*invgamt12*alpha[ijk]*exAt13[ijk]*exAt22[ijk] -
    2*dbeta11[ijk]*exAt23[ijk] + dbeta22[ijk]*exAt23[ijk] +
    dbeta33[ijk]*exAt23[ijk] -
    6*invgamt12*alpha[ijk]*exAt12[ijk]*exAt23[ijk] -
    6*invgamt13*alpha[ijk]*exAt13[ijk]*exAt23[ijk] -
    6*invgamt22*alpha[ijk]*exAt22[ijk]*exAt23[ijk] -
    6*invgamt23*alpha[ijk]*Power(exAt23[ijk],2) +
    3*dbeta23[ijk]*exAt33[ijk] -
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
(3*beta1[ijk]*dexAt133[ijk] + 3*beta2[ijk]*dexAt233[ijk] +
    3*beta3[ijk]*dexAt333[ijk] + 6*dbeta31[ijk]*exAt13[ijk] -
    6*invgamt11*alpha[ijk]*Power(exAt13[ijk],2) +
    6*dbeta32[ijk]*exAt23[ijk] -
    12*invgamt12*alpha[ijk]*exAt13[ijk]*exAt23[ijk] -
    6*invgamt22*alpha[ijk]*Power(exAt23[ijk],2) -
    2*dbeta11[ijk]*exAt33[ijk] - 2*dbeta22[ijk]*exAt33[ijk] +
    4*dbeta33[ijk]*exAt33[ijk] -
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
(-6*exAtUU11*dalpha1[ijk] - 6*exAtUU12*dalpha2[ijk] -
    6*exAtUU13*dalpha3[ijk] - trGtd1*dbeta11[ijk] - 3*trGtd2*dbeta21[ijk] +
    2*trGtd1*dbeta22[ijk] - 3*trGtd3*dbeta31[ijk] + 2*trGtd1*dbeta33[ijk] +
    4*invgamt11*ddbeta111[ijk] + 7*invgamt12*ddbeta121[ijk] +
    invgamt11*ddbeta122[ijk] + 7*invgamt13*ddbeta131[ijk] +
    invgamt11*ddbeta133[ijk] + 3*invgamt22*ddbeta221[ijk] +
    invgamt12*ddbeta222[ijk] + 6*invgamt23*ddbeta231[ijk] +
    invgamt13*ddbeta232[ijk] + invgamt12*ddbeta233[ijk] +
    3*invgamt33*ddbeta331[ijk] + invgamt13*ddbeta333[ijk] +
    3*beta1[ijk]*dtrGt11[ijk] + 3*beta2[ijk]*dtrGt21[ijk] +
    3*beta3[ijk]*dtrGt31[ijk] -
    2*alpha[ijk]*(9*dlnW1*exAtUU11 + 9*dlnW2*exAtUU12 + 9*dlnW3*exAtUU13 -
       3*exAtUU11*Gt111 - 6*exAtUU12*Gt112 - 6*exAtUU13*Gt113 -
       3*exAtUU22*Gt122 - 6*exAtUU23*Gt123 - 3*exAtUU33*Gt133 +
       24*cpi*invgamt11*Sm1 + 24*cpi*invgamt12*Sm2 + 24*cpi*invgamt13*Sm3 -
       3*ckappa1*trGtd1 + 2*invgamt11*dexKh1[ijk] +
       2*invgamt12*dexKh2[ijk] + 2*invgamt13*dexKh3[ijk] +
       invgamt11*dTheta1[ijk] + invgamt12*dTheta2[ijk] +
       invgamt13*dTheta3[ijk] + 3*ckappa1*trGt1[ijk]))/3.
;

dttrGt2[ijk]
=
(-6*exAtUU12*dalpha1[ijk] - 6*exAtUU22*dalpha2[ijk] -
    6*exAtUU23*dalpha3[ijk] + 2*trGtd2*dbeta11[ijk] -
    3*trGtd1*dbeta12[ijk] - trGtd2*dbeta22[ijk] - 3*trGtd3*dbeta32[ijk] +
    2*trGtd2*dbeta33[ijk] + invgamt12*ddbeta111[ijk] +
    3*invgamt11*ddbeta112[ijk] + invgamt22*ddbeta121[ijk] +
    7*invgamt12*ddbeta122[ijk] + invgamt23*ddbeta131[ijk] +
    6*invgamt13*ddbeta132[ijk] + invgamt12*ddbeta133[ijk] +
    4*invgamt22*ddbeta222[ijk] + 7*invgamt23*ddbeta232[ijk] +
    invgamt22*ddbeta233[ijk] + 3*invgamt33*ddbeta332[ijk] +
    invgamt23*ddbeta333[ijk] + 3*beta1[ijk]*dtrGt12[ijk] +
    3*beta2[ijk]*dtrGt22[ijk] + 3*beta3[ijk]*dtrGt32[ijk] -
    2*alpha[ijk]*(9*dlnW1*exAtUU12 + 9*dlnW2*exAtUU22 + 9*dlnW3*exAtUU23 -
       3*exAtUU11*Gt211 - 6*exAtUU12*Gt212 - 6*exAtUU13*Gt213 -
       3*exAtUU22*Gt222 - 6*exAtUU23*Gt223 - 3*exAtUU33*Gt233 +
       24*cpi*invgamt12*Sm1 + 24*cpi*invgamt22*Sm2 + 24*cpi*invgamt23*Sm3 -
       3*ckappa1*trGtd2 + 2*invgamt12*dexKh1[ijk] +
       2*invgamt22*dexKh2[ijk] + 2*invgamt23*dexKh3[ijk] +
       invgamt12*dTheta1[ijk] + invgamt22*dTheta2[ijk] +
       invgamt23*dTheta3[ijk] + 3*ckappa1*trGt2[ijk]))/3.
;

dttrGt3[ijk]
=
(-6*exAtUU13*dalpha1[ijk] - 6*exAtUU23*dalpha2[ijk] -
    6*exAtUU33*dalpha3[ijk] + 2*trGtd3*dbeta11[ijk] -
    3*trGtd1*dbeta13[ijk] + 2*trGtd3*dbeta22[ijk] - 3*trGtd2*dbeta23[ijk] -
    trGtd3*dbeta33[ijk] + invgamt13*ddbeta111[ijk] +
    3*invgamt11*ddbeta113[ijk] + invgamt23*ddbeta121[ijk] +
    invgamt13*ddbeta122[ijk] + 6*invgamt12*ddbeta123[ijk] +
    invgamt33*ddbeta131[ijk] + 7*invgamt13*ddbeta133[ijk] +
    invgamt23*ddbeta222[ijk] + 3*invgamt22*ddbeta223[ijk] +
    invgamt33*ddbeta232[ijk] + 7*invgamt23*ddbeta233[ijk] +
    4*invgamt33*ddbeta333[ijk] + 3*beta1[ijk]*dtrGt13[ijk] +
    3*beta2[ijk]*dtrGt23[ijk] + 3*beta3[ijk]*dtrGt33[ijk] -
    2*alpha[ijk]*(9*dlnW1*exAtUU13 + 9*dlnW2*exAtUU23 + 9*dlnW3*exAtUU33 -
       3*exAtUU11*Gt311 - 6*exAtUU12*Gt312 - 6*exAtUU13*Gt313 -
       3*exAtUU22*Gt322 - 6*exAtUU23*Gt323 - 3*exAtUU33*Gt333 +
       24*cpi*invgamt13*Sm1 + 24*cpi*invgamt23*Sm2 + 24*cpi*invgamt33*Sm3 -
       3*ckappa1*trGtd3 + 2*invgamt13*dexKh1[ijk] +
       2*invgamt23*dexKh2[ijk] + 2*invgamt33*dexKh3[ijk] +
       invgamt13*dTheta1[ijk] + invgamt23*dTheta2[ijk] +
       invgamt33*dTheta3[ijk] + 3*ckappa1*trGt3[ijk]))/3.
;

dtTheta[ijk]
=
beta1[ijk]*dTheta1[ijk] + beta2[ijk]*dTheta2[ijk] +
  beta3[ijk]*dTheta3[ijk] - (alpha[ijk]*
     (48*cpi*rho - 3*trR + 3*exAtUU11*exAt11[ijk] +
       6*exAtUU12*exAt12[ijk] + 6*exAtUU13*exAt13[ijk] +
       3*exAtUU22*exAt22[ijk] + 6*exAtUU23*exAt23[ijk] +
       3*exAtUU33*exAt33[ijk] - 2*Power(exKh[ijk],2) +
       12*ckappa1*Theta[ijk] + 6*ckappa1*ckappa2*Theta[ijk] -
       8*exKh[ijk]*Theta[ijk] - 8*Power(Theta[ijk],2)))/6.
;

dtalpha[ijk]
=
beta1[ijk]*dalpha1[ijk] + beta2[ijk]*dalpha2[ijk] +
  beta3[ijk]*dalpha3[ijk] - cmuL*alpha[ijk]*exKh[ijk]
;

dtbeta1[ijk]
=
beta1[ijk]*(-ceta + dbeta11[ijk]) + beta2[ijk]*dbeta21[ijk] +
  beta3[ijk]*dbeta31[ijk] + cmuS*trGt1[ijk]
;

dtbeta2[ijk]
=
beta1[ijk]*dbeta12[ijk] + beta2[ijk]*(-ceta + dbeta22[ijk]) +
  beta3[ijk]*dbeta32[ijk] + cmuS*trGt2[ijk]
;

dtbeta3[ijk]
=
beta1[ijk]*dbeta13[ijk] + beta2[ijk]*dbeta23[ijk] +
  beta3[ijk]*(-ceta + dbeta33[ijk]) + cmuS*trGt3[ijk]
;


    }
  }
}

#endif // #ifndef Z4CO_SET_RHS_HXX

/* Z4co_set_rhs.hxx */
