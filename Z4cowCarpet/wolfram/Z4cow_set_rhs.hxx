/* Z4cow_set_rhs.hxx */
/* Produced with Generato */

#ifndef Z4COW_SET_RHS_HXX
#define Z4COW_SET_RHS_HXX

for (k=kstart; k<kend; k++) {
  for (j=jstart; j<jend; j++) {
    for (i=istart; i<iend; i++) {
    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);

const auto dWx = fd_1st<1>(cctkGH, W, i, j, k);
const auto dWy = fd_1st<2>(cctkGH, W, i, j, k);
const auto dWz = fd_1st<3>(cctkGH, W, i, j, k);
const auto dgamtxxx = fd_1st<1>(cctkGH, gamtxx, i, j, k);
const auto dgamtxxy = fd_1st<1>(cctkGH, gamtxy, i, j, k);
const auto dgamtxxz = fd_1st<1>(cctkGH, gamtxz, i, j, k);
const auto dgamtxyy = fd_1st<1>(cctkGH, gamtyy, i, j, k);
const auto dgamtxyz = fd_1st<1>(cctkGH, gamtyz, i, j, k);
const auto dgamtxzz = fd_1st<1>(cctkGH, gamtzz, i, j, k);
const auto dgamtyxx = fd_1st<2>(cctkGH, gamtxx, i, j, k);
const auto dgamtyxy = fd_1st<2>(cctkGH, gamtxy, i, j, k);
const auto dgamtyxz = fd_1st<2>(cctkGH, gamtxz, i, j, k);
const auto dgamtyyy = fd_1st<2>(cctkGH, gamtyy, i, j, k);
const auto dgamtyyz = fd_1st<2>(cctkGH, gamtyz, i, j, k);
const auto dgamtyzz = fd_1st<2>(cctkGH, gamtzz, i, j, k);
const auto dgamtzxx = fd_1st<3>(cctkGH, gamtxx, i, j, k);
const auto dgamtzxy = fd_1st<3>(cctkGH, gamtxy, i, j, k);
const auto dgamtzxz = fd_1st<3>(cctkGH, gamtxz, i, j, k);
const auto dgamtzyy = fd_1st<3>(cctkGH, gamtyy, i, j, k);
const auto dgamtzyz = fd_1st<3>(cctkGH, gamtyz, i, j, k);
const auto dgamtzzz = fd_1st<3>(cctkGH, gamtzz, i, j, k);
const auto dexKhx = fd_1st<1>(cctkGH, exKh, i, j, k);
const auto dexKhy = fd_1st<2>(cctkGH, exKh, i, j, k);
const auto dexKhz = fd_1st<3>(cctkGH, exKh, i, j, k);
const auto dexAtxxx = fd_1st<1>(cctkGH, exAtxx, i, j, k);
const auto dexAtxxy = fd_1st<1>(cctkGH, exAtxy, i, j, k);
const auto dexAtxxz = fd_1st<1>(cctkGH, exAtxz, i, j, k);
const auto dexAtxyy = fd_1st<1>(cctkGH, exAtyy, i, j, k);
const auto dexAtxyz = fd_1st<1>(cctkGH, exAtyz, i, j, k);
const auto dexAtxzz = fd_1st<1>(cctkGH, exAtzz, i, j, k);
const auto dexAtyxx = fd_1st<2>(cctkGH, exAtxx, i, j, k);
const auto dexAtyxy = fd_1st<2>(cctkGH, exAtxy, i, j, k);
const auto dexAtyxz = fd_1st<2>(cctkGH, exAtxz, i, j, k);
const auto dexAtyyy = fd_1st<2>(cctkGH, exAtyy, i, j, k);
const auto dexAtyyz = fd_1st<2>(cctkGH, exAtyz, i, j, k);
const auto dexAtyzz = fd_1st<2>(cctkGH, exAtzz, i, j, k);
const auto dexAtzxx = fd_1st<3>(cctkGH, exAtxx, i, j, k);
const auto dexAtzxy = fd_1st<3>(cctkGH, exAtxy, i, j, k);
const auto dexAtzxz = fd_1st<3>(cctkGH, exAtxz, i, j, k);
const auto dexAtzyy = fd_1st<3>(cctkGH, exAtyy, i, j, k);
const auto dexAtzyz = fd_1st<3>(cctkGH, exAtyz, i, j, k);
const auto dexAtzzz = fd_1st<3>(cctkGH, exAtzz, i, j, k);
const auto dtrGtxx = fd_1st<1>(cctkGH, trGtx, i, j, k);
const auto dtrGtxy = fd_1st<1>(cctkGH, trGty, i, j, k);
const auto dtrGtxz = fd_1st<1>(cctkGH, trGtz, i, j, k);
const auto dtrGtyx = fd_1st<2>(cctkGH, trGtx, i, j, k);
const auto dtrGtyy = fd_1st<2>(cctkGH, trGty, i, j, k);
const auto dtrGtyz = fd_1st<2>(cctkGH, trGtz, i, j, k);
const auto dtrGtzx = fd_1st<3>(cctkGH, trGtx, i, j, k);
const auto dtrGtzy = fd_1st<3>(cctkGH, trGty, i, j, k);
const auto dtrGtzz = fd_1st<3>(cctkGH, trGtz, i, j, k);
const auto dThetax = fd_1st<1>(cctkGH, Theta, i, j, k);
const auto dThetay = fd_1st<2>(cctkGH, Theta, i, j, k);
const auto dThetaz = fd_1st<3>(cctkGH, Theta, i, j, k);
const auto dalphax = fd_1st<1>(cctkGH, alpha, i, j, k);
const auto dalphay = fd_1st<2>(cctkGH, alpha, i, j, k);
const auto dalphaz = fd_1st<3>(cctkGH, alpha, i, j, k);
const auto dbetaxx = fd_1st<1>(cctkGH, betax, i, j, k);
const auto dbetaxy = fd_1st<1>(cctkGH, betay, i, j, k);
const auto dbetaxz = fd_1st<1>(cctkGH, betaz, i, j, k);
const auto dbetayx = fd_1st<2>(cctkGH, betax, i, j, k);
const auto dbetayy = fd_1st<2>(cctkGH, betay, i, j, k);
const auto dbetayz = fd_1st<2>(cctkGH, betaz, i, j, k);
const auto dbetazx = fd_1st<3>(cctkGH, betax, i, j, k);
const auto dbetazy = fd_1st<3>(cctkGH, betay, i, j, k);
const auto dbetazz = fd_1st<3>(cctkGH, betaz, i, j, k);
const auto ddWxx = fd_2nd<1><1>(cctkGH, W, i, j, k);
const auto ddWxy = fd_2nd<1><2>(cctkGH, W, i, j, k);
const auto ddWxz = fd_2nd<1><3>(cctkGH, W, i, j, k);
const auto ddWyy = fd_2nd<2><2>(cctkGH, W, i, j, k);
const auto ddWyz = fd_2nd<2><3>(cctkGH, W, i, j, k);
const auto ddWzz = fd_2nd<3><3>(cctkGH, W, i, j, k);
const auto ddgamtxxxx = fd_2nd<1><1>(cctkGH, gamtxx, i, j, k);
const auto ddgamtxxxy = fd_2nd<1><1>(cctkGH, gamtxy, i, j, k);
const auto ddgamtxxxz = fd_2nd<1><1>(cctkGH, gamtxz, i, j, k);
const auto ddgamtxxyy = fd_2nd<1><1>(cctkGH, gamtyy, i, j, k);
const auto ddgamtxxyz = fd_2nd<1><1>(cctkGH, gamtyz, i, j, k);
const auto ddgamtxxzz = fd_2nd<1><1>(cctkGH, gamtzz, i, j, k);
const auto ddgamtxyxx = fd_2nd<1><2>(cctkGH, gamtxx, i, j, k);
const auto ddgamtxyxy = fd_2nd<1><2>(cctkGH, gamtxy, i, j, k);
const auto ddgamtxyxz = fd_2nd<1><2>(cctkGH, gamtxz, i, j, k);
const auto ddgamtxyyy = fd_2nd<1><2>(cctkGH, gamtyy, i, j, k);
const auto ddgamtxyyz = fd_2nd<1><2>(cctkGH, gamtyz, i, j, k);
const auto ddgamtxyzz = fd_2nd<1><2>(cctkGH, gamtzz, i, j, k);
const auto ddgamtxzxx = fd_2nd<1><3>(cctkGH, gamtxx, i, j, k);
const auto ddgamtxzxy = fd_2nd<1><3>(cctkGH, gamtxy, i, j, k);
const auto ddgamtxzxz = fd_2nd<1><3>(cctkGH, gamtxz, i, j, k);
const auto ddgamtxzyy = fd_2nd<1><3>(cctkGH, gamtyy, i, j, k);
const auto ddgamtxzyz = fd_2nd<1><3>(cctkGH, gamtyz, i, j, k);
const auto ddgamtxzzz = fd_2nd<1><3>(cctkGH, gamtzz, i, j, k);
const auto ddgamtyyxx = fd_2nd<2><2>(cctkGH, gamtxx, i, j, k);
const auto ddgamtyyxy = fd_2nd<2><2>(cctkGH, gamtxy, i, j, k);
const auto ddgamtyyxz = fd_2nd<2><2>(cctkGH, gamtxz, i, j, k);
const auto ddgamtyyyy = fd_2nd<2><2>(cctkGH, gamtyy, i, j, k);
const auto ddgamtyyyz = fd_2nd<2><2>(cctkGH, gamtyz, i, j, k);
const auto ddgamtyyzz = fd_2nd<2><2>(cctkGH, gamtzz, i, j, k);
const auto ddgamtyzxx = fd_2nd<2><3>(cctkGH, gamtxx, i, j, k);
const auto ddgamtyzxy = fd_2nd<2><3>(cctkGH, gamtxy, i, j, k);
const auto ddgamtyzxz = fd_2nd<2><3>(cctkGH, gamtxz, i, j, k);
const auto ddgamtyzyy = fd_2nd<2><3>(cctkGH, gamtyy, i, j, k);
const auto ddgamtyzyz = fd_2nd<2><3>(cctkGH, gamtyz, i, j, k);
const auto ddgamtyzzz = fd_2nd<2><3>(cctkGH, gamtzz, i, j, k);
const auto ddgamtzzxx = fd_2nd<3><3>(cctkGH, gamtxx, i, j, k);
const auto ddgamtzzxy = fd_2nd<3><3>(cctkGH, gamtxy, i, j, k);
const auto ddgamtzzxz = fd_2nd<3><3>(cctkGH, gamtxz, i, j, k);
const auto ddgamtzzyy = fd_2nd<3><3>(cctkGH, gamtyy, i, j, k);
const auto ddgamtzzyz = fd_2nd<3><3>(cctkGH, gamtyz, i, j, k);
const auto ddgamtzzzz = fd_2nd<3><3>(cctkGH, gamtzz, i, j, k);
const auto ddalphaxx = fd_2nd<1><1>(cctkGH, alpha, i, j, k);
const auto ddalphaxy = fd_2nd<1><2>(cctkGH, alpha, i, j, k);
const auto ddalphaxz = fd_2nd<1><3>(cctkGH, alpha, i, j, k);
const auto ddalphayy = fd_2nd<2><2>(cctkGH, alpha, i, j, k);
const auto ddalphayz = fd_2nd<2><3>(cctkGH, alpha, i, j, k);
const auto ddalphazz = fd_2nd<3><3>(cctkGH, alpha, i, j, k);
const auto ddbetaxxx = fd_2nd<1><1>(cctkGH, betax, i, j, k);
const auto ddbetaxxy = fd_2nd<1><1>(cctkGH, betay, i, j, k);
const auto ddbetaxxz = fd_2nd<1><1>(cctkGH, betaz, i, j, k);
const auto ddbetaxyx = fd_2nd<1><2>(cctkGH, betax, i, j, k);
const auto ddbetaxyy = fd_2nd<1><2>(cctkGH, betay, i, j, k);
const auto ddbetaxyz = fd_2nd<1><2>(cctkGH, betaz, i, j, k);
const auto ddbetaxzx = fd_2nd<1><3>(cctkGH, betax, i, j, k);
const auto ddbetaxzy = fd_2nd<1><3>(cctkGH, betay, i, j, k);
const auto ddbetaxzz = fd_2nd<1><3>(cctkGH, betaz, i, j, k);
const auto ddbetayyx = fd_2nd<2><2>(cctkGH, betax, i, j, k);
const auto ddbetayyy = fd_2nd<2><2>(cctkGH, betay, i, j, k);
const auto ddbetayyz = fd_2nd<2><2>(cctkGH, betaz, i, j, k);
const auto ddbetayzx = fd_2nd<2><3>(cctkGH, betax, i, j, k);
const auto ddbetayzy = fd_2nd<2><3>(cctkGH, betay, i, j, k);
const auto ddbetayzz = fd_2nd<2><3>(cctkGH, betaz, i, j, k);
const auto ddbetazzx = fd_2nd<3><3>(cctkGH, betax, i, j, k);
const auto ddbetazzy = fd_2nd<3><3>(cctkGH, betay, i, j, k);
const auto ddbetazzz = fd_2nd<3><3>(cctkGH, betaz, i, j, k);

const auto
dlnWx
=
dWx/W[ijk]
;

const auto
dlnWy
=
dWy/W[ijk]
;

const auto
dlnWz
=
dWz/W[ijk]
;

const auto
invgamtxx
=
-Power(gamtyz[ijk],2) + gamtyy[ijk]*gamtzz[ijk]
;

const auto
invgamtxy
=
gamtxz[ijk]*gamtyz[ijk] - gamtxy[ijk]*gamtzz[ijk]
;

const auto
invgamtxz
=
-(gamtxz[ijk]*gamtyy[ijk]) + gamtxy[ijk]*gamtyz[ijk]
;

const auto
invgamtyy
=
-Power(gamtxz[ijk],2) + gamtxx[ijk]*gamtzz[ijk]
;

const auto
invgamtyz
=
gamtxy[ijk]*gamtxz[ijk] - gamtxx[ijk]*gamtyz[ijk]
;

const auto
invgamtzz
=
-Power(gamtxy[ijk],2) + gamtxx[ijk]*gamtyy[ijk]
;

const auto
invgamxx
=
invgamtxx*Power(W[ijk],2)
;

const auto
invgamxy
=
invgamtxy*Power(W[ijk],2)
;

const auto
invgamxz
=
invgamtxz*Power(W[ijk],2)
;

const auto
invgamyy
=
invgamtyy*Power(W[ijk],2)
;

const auto
invgamyz
=
invgamtyz*Power(W[ijk],2)
;

const auto
invgamzz
=
invgamtzz*Power(W[ijk],2)
;

const auto
gamxx
=
gamtxx[ijk]/Power(W[ijk],2)
;

const auto
gamxy
=
gamtxy[ijk]/Power(W[ijk],2)
;

const auto
gamxz
=
gamtxz[ijk]/Power(W[ijk],2)
;

const auto
gamyy
=
gamtyy[ijk]/Power(W[ijk],2)
;

const auto
gamyz
=
gamtyz[ijk]/Power(W[ijk],2)
;

const auto
gamzz
=
gamtzz[ijk]/Power(W[ijk],2)
;

const auto
GtDDDxxx
=
dgamtxxx/2.
;

const auto
GtDDDxxy
=
dgamtyxx/2.
;

const auto
GtDDDxxz
=
dgamtzxx/2.
;

const auto
GtDDDxyy
=
-0.5*dgamtxyy + dgamtyxy
;

const auto
GtDDDxyz
=
(-dgamtxyz + dgamtyxz + dgamtzxy)/2.
;

const auto
GtDDDxzz
=
-0.5*dgamtxzz + dgamtzxz
;

const auto
GtDDDyxx
=
dgamtxxy - dgamtyxx/2.
;

const auto
GtDDDyxy
=
dgamtxyy/2.
;

const auto
GtDDDyxz
=
(dgamtxyz - dgamtyxz + dgamtzxy)/2.
;

const auto
GtDDDyyy
=
dgamtyyy/2.
;

const auto
GtDDDyyz
=
dgamtzyy/2.
;

const auto
GtDDDyzz
=
-0.5*dgamtyzz + dgamtzyz
;

const auto
GtDDDzxx
=
dgamtxxz - dgamtzxx/2.
;

const auto
GtDDDzxy
=
(dgamtxyz + dgamtyxz - dgamtzxy)/2.
;

const auto
GtDDDzxz
=
dgamtxzz/2.
;

const auto
GtDDDzyy
=
dgamtyyz - dgamtzyy/2.
;

const auto
GtDDDzyz
=
dgamtyzz/2.
;

const auto
GtDDDzzz
=
dgamtzzz/2.
;

const auto
GtDDUxxx
=
GtDDDxxx*invgamtxx + GtDDDxxy*invgamtxy + GtDDDxxz*invgamtxz
;

const auto
GtDDUxxy
=
GtDDDxxx*invgamtxy + GtDDDxxy*invgamtyy + GtDDDxxz*invgamtyz
;

const auto
GtDDUxxz
=
GtDDDxxx*invgamtxz + GtDDDxxy*invgamtyz + GtDDDxxz*invgamtzz
;

const auto
GtDDUxyx
=
GtDDDxxy*invgamtxx + GtDDDxyy*invgamtxy + GtDDDxyz*invgamtxz
;

const auto
GtDDUxyy
=
GtDDDxxy*invgamtxy + GtDDDxyy*invgamtyy + GtDDDxyz*invgamtyz
;

const auto
GtDDUxyz
=
GtDDDxxy*invgamtxz + GtDDDxyy*invgamtyz + GtDDDxyz*invgamtzz
;

const auto
GtDDUxzx
=
GtDDDxxz*invgamtxx + GtDDDxyz*invgamtxy + GtDDDxzz*invgamtxz
;

const auto
GtDDUxzy
=
GtDDDxxz*invgamtxy + GtDDDxyz*invgamtyy + GtDDDxzz*invgamtyz
;

const auto
GtDDUxzz
=
GtDDDxxz*invgamtxz + GtDDDxyz*invgamtyz + GtDDDxzz*invgamtzz
;

const auto
GtDDUyxx
=
GtDDDyxx*invgamtxx + GtDDDyxy*invgamtxy + GtDDDyxz*invgamtxz
;

const auto
GtDDUyxy
=
GtDDDyxx*invgamtxy + GtDDDyxy*invgamtyy + GtDDDyxz*invgamtyz
;

const auto
GtDDUyxz
=
GtDDDyxx*invgamtxz + GtDDDyxy*invgamtyz + GtDDDyxz*invgamtzz
;

const auto
GtDDUyyx
=
GtDDDyxy*invgamtxx + GtDDDyyy*invgamtxy + GtDDDyyz*invgamtxz
;

const auto
GtDDUyyy
=
GtDDDyxy*invgamtxy + GtDDDyyy*invgamtyy + GtDDDyyz*invgamtyz
;

const auto
GtDDUyyz
=
GtDDDyxy*invgamtxz + GtDDDyyy*invgamtyz + GtDDDyyz*invgamtzz
;

const auto
GtDDUyzx
=
GtDDDyxz*invgamtxx + GtDDDyyz*invgamtxy + GtDDDyzz*invgamtxz
;

const auto
GtDDUyzy
=
GtDDDyxz*invgamtxy + GtDDDyyz*invgamtyy + GtDDDyzz*invgamtyz
;

const auto
GtDDUyzz
=
GtDDDyxz*invgamtxz + GtDDDyyz*invgamtyz + GtDDDyzz*invgamtzz
;

const auto
GtDDUzxx
=
GtDDDzxx*invgamtxx + GtDDDzxy*invgamtxy + GtDDDzxz*invgamtxz
;

const auto
GtDDUzxy
=
GtDDDzxx*invgamtxy + GtDDDzxy*invgamtyy + GtDDDzxz*invgamtyz
;

const auto
GtDDUzxz
=
GtDDDzxx*invgamtxz + GtDDDzxy*invgamtyz + GtDDDzxz*invgamtzz
;

const auto
GtDDUzyx
=
GtDDDzxy*invgamtxx + GtDDDzyy*invgamtxy + GtDDDzyz*invgamtxz
;

const auto
GtDDUzyy
=
GtDDDzxy*invgamtxy + GtDDDzyy*invgamtyy + GtDDDzyz*invgamtyz
;

const auto
GtDDUzyz
=
GtDDDzxy*invgamtxz + GtDDDzyy*invgamtyz + GtDDDzyz*invgamtzz
;

const auto
GtDDUzzx
=
GtDDDzxz*invgamtxx + GtDDDzyz*invgamtxy + GtDDDzzz*invgamtxz
;

const auto
GtDDUzzy
=
GtDDDzxz*invgamtxy + GtDDDzyz*invgamtyy + GtDDDzzz*invgamtyz
;

const auto
GtDDUzzz
=
GtDDDzxz*invgamtxz + GtDDDzyz*invgamtyz + GtDDDzzz*invgamtzz
;

const auto
Gtxxx
=
GtDDDxxx*invgamtxx + GtDDDyxx*invgamtxy + GtDDDzxx*invgamtxz
;

const auto
Gtxxy
=
GtDDDxxy*invgamtxx + GtDDDyxy*invgamtxy + GtDDDzxy*invgamtxz
;

const auto
Gtxxz
=
GtDDDxxz*invgamtxx + GtDDDyxz*invgamtxy + GtDDDzxz*invgamtxz
;

const auto
Gtxyy
=
GtDDDxyy*invgamtxx + GtDDDyyy*invgamtxy + GtDDDzyy*invgamtxz
;

const auto
Gtxyz
=
GtDDDxyz*invgamtxx + GtDDDyyz*invgamtxy + GtDDDzyz*invgamtxz
;

const auto
Gtxzz
=
GtDDDxzz*invgamtxx + GtDDDyzz*invgamtxy + GtDDDzzz*invgamtxz
;

const auto
Gtyxx
=
GtDDDxxx*invgamtxy + GtDDDyxx*invgamtyy + GtDDDzxx*invgamtyz
;

const auto
Gtyxy
=
GtDDDxxy*invgamtxy + GtDDDyxy*invgamtyy + GtDDDzxy*invgamtyz
;

const auto
Gtyxz
=
GtDDDxxz*invgamtxy + GtDDDyxz*invgamtyy + GtDDDzxz*invgamtyz
;

const auto
Gtyyy
=
GtDDDxyy*invgamtxy + GtDDDyyy*invgamtyy + GtDDDzyy*invgamtyz
;

const auto
Gtyyz
=
GtDDDxyz*invgamtxy + GtDDDyyz*invgamtyy + GtDDDzyz*invgamtyz
;

const auto
Gtyzz
=
GtDDDxzz*invgamtxy + GtDDDyzz*invgamtyy + GtDDDzzz*invgamtyz
;

const auto
Gtzxx
=
GtDDDxxx*invgamtxz + GtDDDyxx*invgamtyz + GtDDDzxx*invgamtzz
;

const auto
Gtzxy
=
GtDDDxxy*invgamtxz + GtDDDyxy*invgamtyz + GtDDDzxy*invgamtzz
;

const auto
Gtzxz
=
GtDDDxxz*invgamtxz + GtDDDyxz*invgamtyz + GtDDDzxz*invgamtzz
;

const auto
Gtzyy
=
GtDDDxyy*invgamtxz + GtDDDyyy*invgamtyz + GtDDDzyy*invgamtzz
;

const auto
Gtzyz
=
GtDDDxyz*invgamtxz + GtDDDyyz*invgamtyz + GtDDDzyz*invgamtzz
;

const auto
Gtzzz
=
GtDDDxzz*invgamtxz + GtDDDyzz*invgamtyz + GtDDDzzz*invgamtzz
;

const auto
trGtdx
=
Gtxxx*invgamtxx + 2*Gtxxy*invgamtxy + 2*Gtxxz*invgamtxz + Gtxyy*invgamtyy +
  2*Gtxyz*invgamtyz + Gtxzz*invgamtzz
;

const auto
trGtdy
=
Gtyxx*invgamtxx + 2*Gtyxy*invgamtxy + 2*Gtyxz*invgamtxz + Gtyyy*invgamtyy +
  2*Gtyyz*invgamtyz + Gtyzz*invgamtzz
;

const auto
trGtdz
=
Gtzxx*invgamtxx + 2*Gtzxy*invgamtxy + 2*Gtzxz*invgamtxz + Gtzyy*invgamtyy +
  2*Gtzyz*invgamtyz + Gtzzz*invgamtzz
;

const auto
dgamxxx
=
(dgamtxxx - 2*dlnWx*gamtxx[ijk])/Power(W[ijk],2)
;

const auto
dgamxxy
=
(dgamtxxy - 2*dlnWx*gamtxy[ijk])/Power(W[ijk],2)
;

const auto
dgamxxz
=
(dgamtxxz - 2*dlnWx*gamtxz[ijk])/Power(W[ijk],2)
;

const auto
dgamxyy
=
(dgamtxyy - 2*dlnWx*gamtyy[ijk])/Power(W[ijk],2)
;

const auto
dgamxyz
=
(dgamtxyz - 2*dlnWx*gamtyz[ijk])/Power(W[ijk],2)
;

const auto
dgamxzz
=
(dgamtxzz - 2*dlnWx*gamtzz[ijk])/Power(W[ijk],2)
;

const auto
dgamyxx
=
(dgamtyxx - 2*dlnWy*gamtxx[ijk])/Power(W[ijk],2)
;

const auto
dgamyxy
=
(dgamtyxy - 2*dlnWy*gamtxy[ijk])/Power(W[ijk],2)
;

const auto
dgamyxz
=
(dgamtyxz - 2*dlnWy*gamtxz[ijk])/Power(W[ijk],2)
;

const auto
dgamyyy
=
(dgamtyyy - 2*dlnWy*gamtyy[ijk])/Power(W[ijk],2)
;

const auto
dgamyyz
=
(dgamtyyz - 2*dlnWy*gamtyz[ijk])/Power(W[ijk],2)
;

const auto
dgamyzz
=
(dgamtyzz - 2*dlnWy*gamtzz[ijk])/Power(W[ijk],2)
;

const auto
dgamzxx
=
(dgamtzxx - 2*dlnWz*gamtxx[ijk])/Power(W[ijk],2)
;

const auto
dgamzxy
=
(dgamtzxy - 2*dlnWz*gamtxy[ijk])/Power(W[ijk],2)
;

const auto
dgamzxz
=
(dgamtzxz - 2*dlnWz*gamtxz[ijk])/Power(W[ijk],2)
;

const auto
dgamzyy
=
(dgamtzyy - 2*dlnWz*gamtyy[ijk])/Power(W[ijk],2)
;

const auto
dgamzyz
=
(dgamtzyz - 2*dlnWz*gamtyz[ijk])/Power(W[ijk],2)
;

const auto
dgamzzz
=
(dgamtzzz - 2*dlnWz*gamtzz[ijk])/Power(W[ijk],2)
;

const auto
GamDDDxxx
=
dgamxxx/2.
;

const auto
GamDDDxxy
=
dgamyxx/2.
;

const auto
GamDDDxxz
=
dgamzxx/2.
;

const auto
GamDDDxyy
=
-0.5*dgamxyy + dgamyxy
;

const auto
GamDDDxyz
=
(-dgamxyz + dgamyxz + dgamzxy)/2.
;

const auto
GamDDDxzz
=
-0.5*dgamxzz + dgamzxz
;

const auto
GamDDDyxx
=
dgamxxy - dgamyxx/2.
;

const auto
GamDDDyxy
=
dgamxyy/2.
;

const auto
GamDDDyxz
=
(dgamxyz - dgamyxz + dgamzxy)/2.
;

const auto
GamDDDyyy
=
dgamyyy/2.
;

const auto
GamDDDyyz
=
dgamzyy/2.
;

const auto
GamDDDyzz
=
-0.5*dgamyzz + dgamzyz
;

const auto
GamDDDzxx
=
dgamxxz - dgamzxx/2.
;

const auto
GamDDDzxy
=
(dgamxyz + dgamyxz - dgamzxy)/2.
;

const auto
GamDDDzxz
=
dgamxzz/2.
;

const auto
GamDDDzyy
=
dgamyyz - dgamzyy/2.
;

const auto
GamDDDzyz
=
dgamyzz/2.
;

const auto
GamDDDzzz
=
dgamzzz/2.
;

const auto
Gamxxx
=
GamDDDxxx*invgamxx + GamDDDyxx*invgamxy + GamDDDzxx*invgamxz
;

const auto
Gamxxy
=
GamDDDxxy*invgamxx + GamDDDyxy*invgamxy + GamDDDzxy*invgamxz
;

const auto
Gamxxz
=
GamDDDxxz*invgamxx + GamDDDyxz*invgamxy + GamDDDzxz*invgamxz
;

const auto
Gamxyy
=
GamDDDxyy*invgamxx + GamDDDyyy*invgamxy + GamDDDzyy*invgamxz
;

const auto
Gamxyz
=
GamDDDxyz*invgamxx + GamDDDyyz*invgamxy + GamDDDzyz*invgamxz
;

const auto
Gamxzz
=
GamDDDxzz*invgamxx + GamDDDyzz*invgamxy + GamDDDzzz*invgamxz
;

const auto
Gamyxx
=
GamDDDxxx*invgamxy + GamDDDyxx*invgamyy + GamDDDzxx*invgamyz
;

const auto
Gamyxy
=
GamDDDxxy*invgamxy + GamDDDyxy*invgamyy + GamDDDzxy*invgamyz
;

const auto
Gamyxz
=
GamDDDxxz*invgamxy + GamDDDyxz*invgamyy + GamDDDzxz*invgamyz
;

const auto
Gamyyy
=
GamDDDxyy*invgamxy + GamDDDyyy*invgamyy + GamDDDzyy*invgamyz
;

const auto
Gamyyz
=
GamDDDxyz*invgamxy + GamDDDyyz*invgamyy + GamDDDzyz*invgamyz
;

const auto
Gamyzz
=
GamDDDxzz*invgamxy + GamDDDyzz*invgamyy + GamDDDzzz*invgamyz
;

const auto
Gamzxx
=
GamDDDxxx*invgamxz + GamDDDyxx*invgamyz + GamDDDzxx*invgamzz
;

const auto
Gamzxy
=
GamDDDxxy*invgamxz + GamDDDyxy*invgamyz + GamDDDzxy*invgamzz
;

const auto
Gamzxz
=
GamDDDxxz*invgamxz + GamDDDyxz*invgamyz + GamDDDzxz*invgamzz
;

const auto
Gamzyy
=
GamDDDxyy*invgamxz + GamDDDyyy*invgamyz + GamDDDzyy*invgamzz
;

const auto
Gamzyz
=
GamDDDxyz*invgamxz + GamDDDyyz*invgamyz + GamDDDzyz*invgamzz
;

const auto
Gamzzz
=
GamDDDxzz*invgamxz + GamDDDyzz*invgamyz + GamDDDzzz*invgamzz
;

const auto
exAtUUxx
=
Power(invgamtxx,2)*exAtxx[ijk] + 2*invgamtxx*invgamtxy*exAtxy[ijk] +
  2*invgamtxx*invgamtxz*exAtxz[ijk] + Power(invgamtxy,2)*exAtyy[ijk] +
  2*invgamtxy*invgamtxz*exAtyz[ijk] + Power(invgamtxz,2)*exAtzz[ijk]
;

const auto
exAtUUxy
=
invgamtxx*invgamtxy*exAtxx[ijk] +
  (Power(invgamtxy,2) + invgamtxx*invgamtyy)*exAtxy[ijk] +
  invgamtxy*invgamtxz*exAtxz[ijk] + invgamtxx*invgamtyz*exAtxz[ijk] +
  invgamtxy*invgamtyy*exAtyy[ijk] + invgamtxz*invgamtyy*exAtyz[ijk] +
  invgamtxy*invgamtyz*exAtyz[ijk] + invgamtxz*invgamtyz*exAtzz[ijk]
;

const auto
exAtUUxz
=
invgamtxx*invgamtxz*exAtxx[ijk] +
  (invgamtxy*invgamtxz + invgamtxx*invgamtyz)*exAtxy[ijk] +
  Power(invgamtxz,2)*exAtxz[ijk] + invgamtxx*invgamtzz*exAtxz[ijk] +
  invgamtxy*invgamtyz*exAtyy[ijk] + invgamtxz*invgamtyz*exAtyz[ijk] +
  invgamtxy*invgamtzz*exAtyz[ijk] + invgamtxz*invgamtzz*exAtzz[ijk]
;

const auto
exAtUUyy
=
Power(invgamtxy,2)*exAtxx[ijk] + 2*invgamtxy*invgamtyy*exAtxy[ijk] +
  2*invgamtxy*invgamtyz*exAtxz[ijk] + Power(invgamtyy,2)*exAtyy[ijk] +
  2*invgamtyy*invgamtyz*exAtyz[ijk] + Power(invgamtyz,2)*exAtzz[ijk]
;

const auto
exAtUUyz
=
invgamtxy*invgamtxz*exAtxx[ijk] +
  (invgamtxz*invgamtyy + invgamtxy*invgamtyz)*exAtxy[ijk] +
  invgamtxz*invgamtyz*exAtxz[ijk] + invgamtxy*invgamtzz*exAtxz[ijk] +
  invgamtyy*invgamtyz*exAtyy[ijk] + Power(invgamtyz,2)*exAtyz[ijk] +
  invgamtyy*invgamtzz*exAtyz[ijk] + invgamtyz*invgamtzz*exAtzz[ijk]
;

const auto
exAtUUzz
=
Power(invgamtxz,2)*exAtxx[ijk] + 2*invgamtxz*invgamtyz*exAtxy[ijk] +
  2*invgamtxz*invgamtzz*exAtxz[ijk] + Power(invgamtyz,2)*exAtyy[ijk] +
  2*invgamtyz*invgamtzz*exAtyz[ijk] + Power(invgamtzz,2)*exAtzz[ijk]
;

const auto
tDtDWxx
=
ddWxx - dWx*Gtxxx - dWy*Gtyxx - dWz*Gtzxx
;

const auto
tDtDWxy
=
ddWxy - dWx*Gtxxy - dWy*Gtyxy - dWz*Gtzxy
;

const auto
tDtDWxz
=
ddWxz - dWx*Gtxxz - dWy*Gtyxz - dWz*Gtzxz
;

const auto
tDtDWyy
=
ddWyy - dWx*Gtxyy - dWy*Gtyyy - dWz*Gtzyy
;

const auto
tDtDWyz
=
ddWyz - dWx*Gtxyz - dWy*Gtyyz - dWz*Gtzyz
;

const auto
tDtDWzz
=
ddWzz - dWx*Gtxzz - dWy*Gtyzz - dWz*Gtzzz
;

const auto
DDalphaxx
=
ddalphaxx - dalphax*Gamxxx - dalphay*Gamyxx - dalphaz*Gamzxx
;

const auto
DDalphaxy
=
ddalphaxy - dalphax*Gamxxy - dalphay*Gamyxy - dalphaz*Gamzxy
;

const auto
DDalphaxz
=
ddalphaxz - dalphax*Gamxxz - dalphay*Gamyxz - dalphaz*Gamzxz
;

const auto
DDalphayy
=
ddalphayy - dalphax*Gamxyy - dalphay*Gamyyy - dalphaz*Gamzyy
;

const auto
DDalphayz
=
ddalphayz - dalphax*Gamxyz - dalphay*Gamyyz - dalphaz*Gamzyz
;

const auto
DDalphazz
=
ddalphazz - dalphax*Gamxzz - dalphay*Gamyzz - dalphaz*Gamzzz
;

const auto
RtWxx
=
(tDtDWxx + gamtxx[ijk]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[ijk]))/W[ijk]
;

const auto
RtWxy
=
(tDtDWxy + gamtxy[ijk]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[ijk]))/W[ijk]
;

const auto
RtWxz
=
(tDtDWxz + gamtxz[ijk]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[ijk]))/W[ijk]
;

const auto
RtWyy
=
(tDtDWyy + gamtyy[ijk]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[ijk]))/W[ijk]
;

const auto
RtWyz
=
(tDtDWyz + gamtyz[ijk]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[ijk]))/W[ijk]
;

const auto
RtWzz
=
(tDtDWzz + gamtzz[ijk]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[ijk]))/W[ijk]
;

const auto
Rtxx
=
3*GtDDUxxx*Gtxxx + 3*GtDDUxxy*Gtxxy + 3*GtDDUxxz*Gtxxz + 2*GtDDUxyx*Gtyxx +
  GtDDUyxx*Gtyxx + 2*GtDDUxyy*Gtyxy + GtDDUyxy*Gtyxy + 2*GtDDUxyz*Gtyxz +
  GtDDUyxz*Gtyxz + 2*GtDDUxzx*Gtzxx + GtDDUzxx*Gtzxx + 2*GtDDUxzy*Gtzxy +
  GtDDUzxy*Gtzxy + 2*GtDDUxzz*Gtzxz + GtDDUzxz*Gtzxz -
  (ddgamtxxxx*invgamtxx)/2. - ddgamtxyxx*invgamtxy - ddgamtxzxx*invgamtxz -
  (ddgamtyyxx*invgamtyy)/2. - ddgamtyzxx*invgamtyz -
  (ddgamtzzxx*invgamtzz)/2. + GtDDDxxx*trGtdx + GtDDDxxy*trGtdy +
  GtDDDxxz*trGtdz + dtrGtxx*gamtxx[ijk] + dtrGtxy*gamtxy[ijk] +
  dtrGtxz*gamtxz[ijk]
;

const auto
Rtxy
=
(2*GtDDUxyx*Gtxxx + 2*GtDDUyxx*Gtxxx + 2*GtDDUxxx*Gtxxy +
    2*GtDDUxyy*Gtxxy + 2*GtDDUyxy*Gtxxy + 2*GtDDUxyz*Gtxxz +
    2*GtDDUyxz*Gtxxz + 2*GtDDUxxy*Gtxyy + 2*GtDDUxxz*Gtxyz +
    4*GtDDUyyx*Gtyxx + 2*GtDDUxyx*Gtyxy + 4*GtDDUyyy*Gtyxy +
    4*GtDDUyyz*Gtyxz + 2*GtDDUxyy*Gtyyy + 2*GtDDUxyz*Gtyyz +
    2*GtDDUyzx*Gtzxx + 2*GtDDUzyx*Gtzxx + 2*GtDDUxzx*Gtzxy +
    2*GtDDUyzy*Gtzxy + 2*GtDDUzyy*Gtzxy + 2*GtDDUyzz*Gtzxz +
    2*GtDDUzyz*Gtzxz + 2*GtDDUxzy*Gtzyy + 2*GtDDUxzz*Gtzyz -
    ddgamtxxxy*invgamtxx - 2*ddgamtxyxy*invgamtxy -
    2*ddgamtxzxy*invgamtxz - ddgamtyyxy*invgamtyy -
    2*ddgamtyzxy*invgamtyz - ddgamtzzxy*invgamtzz + GtDDDxxy*trGtdx +
    GtDDDyxx*trGtdx + GtDDDxyy*trGtdy + GtDDDyxy*trGtdy + GtDDDxyz*trGtdz +
    GtDDDyxz*trGtdz + dtrGtyx*gamtxx[ijk] +
    (dtrGtxx + dtrGtyy)*gamtxy[ijk] + dtrGtyz*gamtxz[ijk] +
    dtrGtxy*gamtyy[ijk] + dtrGtxz*gamtyz[ijk])/2.
;

const auto
Rtxz
=
(2*GtDDUxzx*Gtxxx + 2*GtDDUzxx*Gtxxx + 2*GtDDUxzy*Gtxxy +
    2*GtDDUzxy*Gtxxy + 2*GtDDUxxx*Gtxxz + 2*GtDDUxzz*Gtxxz +
    2*GtDDUzxz*Gtxxz + 2*GtDDUxxy*Gtxyz + 2*GtDDUxxz*Gtxzz +
    2*GtDDUyzx*Gtyxx + 2*GtDDUzyx*Gtyxx + 2*GtDDUyzy*Gtyxy +
    2*GtDDUzyy*Gtyxy + 2*GtDDUxyx*Gtyxz + 2*GtDDUyzz*Gtyxz +
    2*GtDDUzyz*Gtyxz + 2*GtDDUxyy*Gtyyz + 2*GtDDUxyz*Gtyzz +
    4*GtDDUzzx*Gtzxx + 4*GtDDUzzy*Gtzxy + 2*GtDDUxzx*Gtzxz +
    4*GtDDUzzz*Gtzxz + 2*GtDDUxzy*Gtzyz + 2*GtDDUxzz*Gtzzz -
    ddgamtxxxz*invgamtxx - 2*ddgamtxyxz*invgamtxy -
    2*ddgamtxzxz*invgamtxz - ddgamtyyxz*invgamtyy -
    2*ddgamtyzxz*invgamtyz - ddgamtzzxz*invgamtzz + GtDDDxxz*trGtdx +
    GtDDDzxx*trGtdx + GtDDDxyz*trGtdy + GtDDDzxy*trGtdy + GtDDDxzz*trGtdz +
    GtDDDzxz*trGtdz + dtrGtzx*gamtxx[ijk] + dtrGtzy*gamtxy[ijk] +
    dtrGtxx*gamtxz[ijk] + dtrGtzz*gamtxz[ijk] + dtrGtxy*gamtyz[ijk] +
    dtrGtxz*gamtzz[ijk])/2.
;

const auto
Rtyy
=
GtDDUxyx*Gtxxy + 2*GtDDUyxx*Gtxxy + GtDDUxyy*Gtxyy + 2*GtDDUyxy*Gtxyy +
  GtDDUxyz*Gtxyz + 2*GtDDUyxz*Gtxyz + 3*GtDDUyyx*Gtyxy + 3*GtDDUyyy*Gtyyy +
  3*GtDDUyyz*Gtyyz + 2*GtDDUyzx*Gtzxy + GtDDUzyx*Gtzxy + 2*GtDDUyzy*Gtzyy +
  GtDDUzyy*Gtzyy + 2*GtDDUyzz*Gtzyz + GtDDUzyz*Gtzyz -
  (ddgamtxxyy*invgamtxx)/2. - ddgamtxyyy*invgamtxy - ddgamtxzyy*invgamtxz -
  (ddgamtyyyy*invgamtyy)/2. - ddgamtyzyy*invgamtyz -
  (ddgamtzzyy*invgamtzz)/2. + GtDDDyxy*trGtdx + GtDDDyyy*trGtdy +
  GtDDDyyz*trGtdz + dtrGtyx*gamtxy[ijk] + dtrGtyy*gamtyy[ijk] +
  dtrGtyz*gamtyz[ijk]
;

const auto
Rtyz
=
(2*GtDDUxzx*Gtxxy + 2*GtDDUzxx*Gtxxy + 2*GtDDUyxx*Gtxxz +
    2*GtDDUxzy*Gtxyy + 2*GtDDUzxy*Gtxyy + 2*GtDDUxzz*Gtxyz +
    2*GtDDUyxy*Gtxyz + 2*GtDDUzxz*Gtxyz + 2*GtDDUyxz*Gtxzz +
    2*GtDDUyzx*Gtyxy + 2*GtDDUzyx*Gtyxy + 2*GtDDUyyx*Gtyxz +
    2*GtDDUyzy*Gtyyy + 2*GtDDUzyy*Gtyyy + 2*GtDDUyyy*Gtyyz +
    2*GtDDUyzz*Gtyyz + 2*GtDDUzyz*Gtyyz + 2*GtDDUyyz*Gtyzz +
    4*GtDDUzzx*Gtzxy + 2*GtDDUyzx*Gtzxz + 4*GtDDUzzy*Gtzyy +
    2*GtDDUyzy*Gtzyz + 4*GtDDUzzz*Gtzyz + 2*GtDDUyzz*Gtzzz -
    ddgamtxxyz*invgamtxx - 2*ddgamtxyyz*invgamtxy -
    2*ddgamtxzyz*invgamtxz - ddgamtyyyz*invgamtyy -
    2*ddgamtyzyz*invgamtyz - ddgamtzzyz*invgamtzz + GtDDDyxz*trGtdx +
    GtDDDzxy*trGtdx + GtDDDyyz*trGtdy + GtDDDzyy*trGtdy + GtDDDyzz*trGtdz +
    GtDDDzyz*trGtdz + dtrGtzx*gamtxy[ijk] + dtrGtyx*gamtxz[ijk] +
    dtrGtzy*gamtyy[ijk] + dtrGtyy*gamtyz[ijk] + dtrGtzz*gamtyz[ijk] +
    dtrGtyz*gamtzz[ijk])/2.
;

const auto
Rtzz
=
GtDDUxzx*Gtxxz + 2*GtDDUzxx*Gtxxz + GtDDUxzy*Gtxyz + 2*GtDDUzxy*Gtxyz +
  GtDDUxzz*Gtxzz + 2*GtDDUzxz*Gtxzz + GtDDUyzx*Gtyxz + 2*GtDDUzyx*Gtyxz +
  GtDDUyzy*Gtyyz + 2*GtDDUzyy*Gtyyz + GtDDUyzz*Gtyzz + 2*GtDDUzyz*Gtyzz +
  3*GtDDUzzx*Gtzxz + 3*GtDDUzzy*Gtzyz + 3*GtDDUzzz*Gtzzz -
  (ddgamtxxzz*invgamtxx)/2. - ddgamtxyzz*invgamtxy - ddgamtxzzz*invgamtxz -
  (ddgamtyyzz*invgamtyy)/2. - ddgamtyzzz*invgamtyz -
  (ddgamtzzzz*invgamtzz)/2. + GtDDDzxz*trGtdx + GtDDDzyz*trGtdy +
  GtDDDzzz*trGtdz + dtrGtzx*gamtxz[ijk] + dtrGtzy*gamtyz[ijk] +
  dtrGtzz*gamtzz[ijk]
;

const auto
Rxx
=
RtWxx + Rtxx
;

const auto
Rxy
=
RtWxy + Rtxy
;

const auto
Rxz
=
RtWxz + Rtxz
;

const auto
Ryy
=
RtWyy + Rtyy
;

const auto
Ryz
=
RtWyz + Rtyz
;

const auto
Rzz
=
RtWzz + Rtzz
;

const auto
trR
=
invgamxx*Rxx + 2*invgamxy*Rxy + 2*invgamxz*Rxz + invgamyy*Ryy +
  2*invgamyz*Ryz + invgamzz*Rzz
;

const auto
rho
=
(eTtt[ijk] - 2*betay[ijk]*eTty[ijk] - 2*betaz[ijk]*eTtz[ijk] +
    Power(betax[ijk],2)*eTxx[ijk] +
    2*betax[ijk]*(-eTtx[ijk] + betay[ijk]*eTxy[ijk] +
       betaz[ijk]*eTxz[ijk]) + Power(betay[ijk],2)*eTyy[ijk] +
    2*betay[ijk]*betaz[ijk]*eTyz[ijk] + Power(betaz[ijk],2)*eTzz[ijk])/
  Power(alpha[ijk],2)
;

const auto
Smx
=
(-eTtx[ijk] + betax[ijk]*eTxx[ijk] + betay[ijk]*eTxy[ijk] +
    betaz[ijk]*eTxz[ijk])/alpha[ijk]
;

const auto
Smy
=
(-eTty[ijk] + betax[ijk]*eTxy[ijk] + betay[ijk]*eTyy[ijk] +
    betaz[ijk]*eTyz[ijk])/alpha[ijk]
;

const auto
Smz
=
(-eTtz[ijk] + betax[ijk]*eTxz[ijk] + betay[ijk]*eTyz[ijk] +
    betaz[ijk]*eTzz[ijk])/alpha[ijk]
;

const auto
Ssxx
=
eTxx[ijk]
;

const auto
Ssxy
=
eTxy[ijk]
;

const auto
Ssxz
=
eTxz[ijk]
;

const auto
Ssyy
=
eTyy[ijk]
;

const auto
Ssyz
=
eTyz[ijk]
;

const auto
Sszz
=
eTzz[ijk]
;

const auto
trSs
=
invgamxx*Ssxx + 2*invgamxy*Ssxy + 2*invgamxz*Ssxz + invgamyy*Ssyy +
  2*invgamyz*Ssyz + invgamzz*Sszz
;


dtW[ijk]
=
dWx*betax[ijk] + dWy*betay[ijk] + dWz*betaz[ijk] -
  ((dbetaxx + dbetayy + dbetazz)*W[ijk])/3. +
  (alpha[ijk]*exKh[ijk]*W[ijk])/3. + (2*alpha[ijk]*Theta[ijk]*W[ijk])/3.
;

dtgamtxx[ijk]
=
dgamtxxx*betax[ijk] + dgamtyxx*betay[ijk] + dgamtzxx*betaz[ijk] -
  2*alpha[ijk]*exAtxx[ijk] + 2*dbetaxx*gamtxx[ijk] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtxx[ijk])/3. + 2*dbetaxy*gamtxy[ijk] +
  2*dbetaxz*gamtxz[ijk]
;

dtgamtxy[ijk]
=
dgamtxxy*betax[ijk] + dgamtyxy*betay[ijk] + dgamtzxy*betaz[ijk] -
  2*alpha[ijk]*exAtxy[ijk] + dbetayx*gamtxx[ijk] + dbetaxx*gamtxy[ijk] +
  dbetayy*gamtxy[ijk] - (2*(dbetaxx + dbetayy + dbetazz)*gamtxy[ijk])/3. +
  dbetayz*gamtxz[ijk] + dbetaxy*gamtyy[ijk] + dbetaxz*gamtyz[ijk]
;

dtgamtxz[ijk]
=
dgamtxxz*betax[ijk] + dgamtyxz*betay[ijk] + dgamtzxz*betaz[ijk] -
  2*alpha[ijk]*exAtxz[ijk] + dbetazx*gamtxx[ijk] + dbetazy*gamtxy[ijk] +
  dbetaxx*gamtxz[ijk] + dbetazz*gamtxz[ijk] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtxz[ijk])/3. + dbetaxy*gamtyz[ijk] +
  dbetaxz*gamtzz[ijk]
;

dtgamtyy[ijk]
=
dgamtxyy*betax[ijk] + dgamtyyy*betay[ijk] + dgamtzyy*betaz[ijk] -
  2*alpha[ijk]*exAtyy[ijk] + 2*dbetayx*gamtxy[ijk] + 2*dbetayy*gamtyy[ijk] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtyy[ijk])/3. + 2*dbetayz*gamtyz[ijk]
;

dtgamtyz[ijk]
=
dgamtxyz*betax[ijk] + dgamtyyz*betay[ijk] + dgamtzyz*betaz[ijk] -
  2*alpha[ijk]*exAtyz[ijk] + dbetazx*gamtxy[ijk] + dbetayx*gamtxz[ijk] +
  dbetazy*gamtyy[ijk] + dbetayy*gamtyz[ijk] + dbetazz*gamtyz[ijk] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtyz[ijk])/3. + dbetayz*gamtzz[ijk]
;

dtgamtzz[ijk]
=
dgamtxzz*betax[ijk] + dgamtyzz*betay[ijk] + dgamtzzz*betaz[ijk] -
  2*alpha[ijk]*exAtzz[ijk] + 2*dbetazx*gamtxz[ijk] + 2*dbetazy*gamtyz[ijk] +
  2*dbetazz*gamtzz[ijk] - (2*(dbetaxx + dbetayy + dbetazz)*gamtzz[ijk])/3.
;

dtexKh[ijk]
=
-(DDalphaxx*invgamxx) - 2*DDalphaxy*invgamxy - 2*DDalphaxz*invgamxz -
  DDalphayy*invgamyy - 2*DDalphayz*invgamyz - DDalphazz*invgamzz +
  dexKhx*betax[ijk] + dexKhy*betay[ijk] + dexKhz*betaz[ijk] +
  alpha[ijk]*(4*cpi*rho + 4*cpi*trSs + exAtUUxx*exAtxx[ijk] +
     2*exAtUUxy*exAtxy[ijk] + 2*exAtUUxz*exAtxz[ijk] +
     exAtUUyy*exAtyy[ijk] + 2*exAtUUyz*exAtyz[ijk] + exAtUUzz*exAtzz[ijk] +
     Power(exKh[ijk],2)/3. + ckappa1*Theta[ijk] -
     ckappa1*ckappa2*Theta[ijk] + (4*exKh[ijk]*Theta[ijk])/3. +
     (4*Power(Theta[ijk],2))/3.)
;

dtexAtxx[ijk]
=
(3*dexAtxxx*betax[ijk] + 3*dexAtyxx*betay[ijk] + 3*dexAtzxx*betaz[ijk] +
    4*dbetaxx*exAtxx[ijk] - 2*dbetayy*exAtxx[ijk] - 2*dbetazz*exAtxx[ijk] -
    6*invgamtxx*alpha[ijk]*Power(exAtxx[ijk],2) + 6*dbetaxy*exAtxy[ijk] -
    12*invgamtxy*alpha[ijk]*exAtxx[ijk]*exAtxy[ijk] -
    6*invgamtyy*alpha[ijk]*Power(exAtxy[ijk],2) + 6*dbetaxz*exAtxz[ijk] -
    12*invgamtxz*alpha[ijk]*exAtxx[ijk]*exAtxz[ijk] -
    12*invgamtyz*alpha[ijk]*exAtxy[ijk]*exAtxz[ijk] -
    6*invgamtzz*alpha[ijk]*Power(exAtxz[ijk],2) +
    3*alpha[ijk]*exAtxx[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAtxx[ijk]*Theta[ijk] - 3*DDalphaxx*Power(W[ijk],2) +
    DDalphaxx*gamxx*invgamxx*Power(W[ijk],2) +
    2*DDalphaxy*gamxx*invgamxy*Power(W[ijk],2) +
    2*DDalphaxz*gamxx*invgamxz*Power(W[ijk],2) +
    DDalphayy*gamxx*invgamyy*Power(W[ijk],2) +
    2*DDalphayz*gamxx*invgamyz*Power(W[ijk],2) +
    DDalphazz*gamxx*invgamzz*Power(W[ijk],2) +
    3*Rxx*alpha[ijk]*Power(W[ijk],2) -
    gamxx*invgamxx*Rxx*alpha[ijk]*Power(W[ijk],2) -
    2*gamxx*invgamxy*Rxy*alpha[ijk]*Power(W[ijk],2) -
    2*gamxx*invgamxz*Rxz*alpha[ijk]*Power(W[ijk],2) -
    gamxx*invgamyy*Ryy*alpha[ijk]*Power(W[ijk],2) -
    2*gamxx*invgamyz*Ryz*alpha[ijk]*Power(W[ijk],2) -
    gamxx*invgamzz*Rzz*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ssxx*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxx*invgamxx*Ssxx*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxx*invgamxy*Ssxy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxx*invgamxz*Ssxz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxx*invgamyy*Ssyy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxx*invgamyz*Ssyz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxx*invgamzz*Sszz*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAtxy[ijk]
=
(3*dexAtxxy*betax[ijk] + 3*dexAtyxy*betay[ijk] + 3*dexAtzxy*betaz[ijk] +
    3*dbetayx*exAtxx[ijk] + dbetaxx*exAtxy[ijk] + dbetayy*exAtxy[ijk] -
    2*dbetazz*exAtxy[ijk] - 6*invgamtxx*alpha[ijk]*exAtxx[ijk]*
     exAtxy[ijk] - 6*invgamtxy*alpha[ijk]*Power(exAtxy[ijk],2) +
    3*dbetayz*exAtxz[ijk] - 6*invgamtxz*alpha[ijk]*exAtxy[ijk]*
     exAtxz[ijk] + 3*dbetaxy*exAtyy[ijk] -
    6*invgamtxy*alpha[ijk]*exAtxx[ijk]*exAtyy[ijk] -
    6*invgamtyy*alpha[ijk]*exAtxy[ijk]*exAtyy[ijk] -
    6*invgamtyz*alpha[ijk]*exAtxz[ijk]*exAtyy[ijk] +
    3*dbetaxz*exAtyz[ijk] - 6*invgamtxz*alpha[ijk]*exAtxx[ijk]*
     exAtyz[ijk] - 6*invgamtyz*alpha[ijk]*exAtxy[ijk]*exAtyz[ijk] -
    6*invgamtzz*alpha[ijk]*exAtxz[ijk]*exAtyz[ijk] +
    3*alpha[ijk]*exAtxy[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAtxy[ijk]*Theta[ijk] - 3*DDalphaxy*Power(W[ijk],2) +
    DDalphaxx*gamxy*invgamxx*Power(W[ijk],2) +
    2*DDalphaxy*gamxy*invgamxy*Power(W[ijk],2) +
    2*DDalphaxz*gamxy*invgamxz*Power(W[ijk],2) +
    DDalphayy*gamxy*invgamyy*Power(W[ijk],2) +
    2*DDalphayz*gamxy*invgamyz*Power(W[ijk],2) +
    DDalphazz*gamxy*invgamzz*Power(W[ijk],2) -
    gamxy*invgamxx*Rxx*alpha[ijk]*Power(W[ijk],2) +
    3*Rxy*alpha[ijk]*Power(W[ijk],2) -
    2*gamxy*invgamxy*Rxy*alpha[ijk]*Power(W[ijk],2) -
    2*gamxy*invgamxz*Rxz*alpha[ijk]*Power(W[ijk],2) -
    gamxy*invgamyy*Ryy*alpha[ijk]*Power(W[ijk],2) -
    2*gamxy*invgamyz*Ryz*alpha[ijk]*Power(W[ijk],2) -
    gamxy*invgamzz*Rzz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxy*invgamxx*Ssxx*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ssxy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxy*invgamxy*Ssxy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxy*invgamxz*Ssxz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxy*invgamyy*Ssyy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxy*invgamyz*Ssyz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxy*invgamzz*Sszz*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAtxz[ijk]
=
(3*dexAtxxz*betax[ijk] + 3*dexAtyxz*betay[ijk] + 3*dexAtzxz*betaz[ijk] +
    3*dbetazx*exAtxx[ijk] + 3*dbetazy*exAtxy[ijk] + dbetaxx*exAtxz[ijk] -
    2*dbetayy*exAtxz[ijk] + dbetazz*exAtxz[ijk] -
    6*invgamtxx*alpha[ijk]*exAtxx[ijk]*exAtxz[ijk] -
    6*invgamtxy*alpha[ijk]*exAtxy[ijk]*exAtxz[ijk] -
    6*invgamtxz*alpha[ijk]*Power(exAtxz[ijk],2) + 3*dbetaxy*exAtyz[ijk] -
    6*invgamtxy*alpha[ijk]*exAtxx[ijk]*exAtyz[ijk] -
    6*invgamtyy*alpha[ijk]*exAtxy[ijk]*exAtyz[ijk] -
    6*invgamtyz*alpha[ijk]*exAtxz[ijk]*exAtyz[ijk] +
    3*dbetaxz*exAtzz[ijk] - 6*invgamtxz*alpha[ijk]*exAtxx[ijk]*
     exAtzz[ijk] - 6*invgamtyz*alpha[ijk]*exAtxy[ijk]*exAtzz[ijk] -
    6*invgamtzz*alpha[ijk]*exAtxz[ijk]*exAtzz[ijk] +
    3*alpha[ijk]*exAtxz[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAtxz[ijk]*Theta[ijk] - 3*DDalphaxz*Power(W[ijk],2) +
    DDalphaxx*gamxz*invgamxx*Power(W[ijk],2) +
    2*DDalphaxy*gamxz*invgamxy*Power(W[ijk],2) +
    2*DDalphaxz*gamxz*invgamxz*Power(W[ijk],2) +
    DDalphayy*gamxz*invgamyy*Power(W[ijk],2) +
    2*DDalphayz*gamxz*invgamyz*Power(W[ijk],2) +
    DDalphazz*gamxz*invgamzz*Power(W[ijk],2) -
    gamxz*invgamxx*Rxx*alpha[ijk]*Power(W[ijk],2) -
    2*gamxz*invgamxy*Rxy*alpha[ijk]*Power(W[ijk],2) +
    3*Rxz*alpha[ijk]*Power(W[ijk],2) -
    2*gamxz*invgamxz*Rxz*alpha[ijk]*Power(W[ijk],2) -
    gamxz*invgamyy*Ryy*alpha[ijk]*Power(W[ijk],2) -
    2*gamxz*invgamyz*Ryz*alpha[ijk]*Power(W[ijk],2) -
    gamxz*invgamzz*Rzz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxz*invgamxx*Ssxx*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxz*invgamxy*Ssxy*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ssxz*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxz*invgamxz*Ssxz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxz*invgamyy*Ssyy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamxz*invgamyz*Ssyz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamxz*invgamzz*Sszz*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAtyy[ijk]
=
(3*dexAtxyy*betax[ijk] + 3*dexAtyyy*betay[ijk] + 3*dexAtzyy*betaz[ijk] +
    6*dbetayx*exAtxy[ijk] - 6*invgamtxx*alpha[ijk]*Power(exAtxy[ijk],2) -
    2*dbetaxx*exAtyy[ijk] + 4*dbetayy*exAtyy[ijk] - 2*dbetazz*exAtyy[ijk] -
    12*invgamtxy*alpha[ijk]*exAtxy[ijk]*exAtyy[ijk] -
    6*invgamtyy*alpha[ijk]*Power(exAtyy[ijk],2) + 6*dbetayz*exAtyz[ijk] -
    12*invgamtxz*alpha[ijk]*exAtxy[ijk]*exAtyz[ijk] -
    12*invgamtyz*alpha[ijk]*exAtyy[ijk]*exAtyz[ijk] -
    6*invgamtzz*alpha[ijk]*Power(exAtyz[ijk],2) +
    3*alpha[ijk]*exAtyy[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAtyy[ijk]*Theta[ijk] - 3*DDalphayy*Power(W[ijk],2) +
    DDalphaxx*gamyy*invgamxx*Power(W[ijk],2) +
    2*DDalphaxy*gamyy*invgamxy*Power(W[ijk],2) +
    2*DDalphaxz*gamyy*invgamxz*Power(W[ijk],2) +
    DDalphayy*gamyy*invgamyy*Power(W[ijk],2) +
    2*DDalphayz*gamyy*invgamyz*Power(W[ijk],2) +
    DDalphazz*gamyy*invgamzz*Power(W[ijk],2) -
    gamyy*invgamxx*Rxx*alpha[ijk]*Power(W[ijk],2) -
    2*gamyy*invgamxy*Rxy*alpha[ijk]*Power(W[ijk],2) -
    2*gamyy*invgamxz*Rxz*alpha[ijk]*Power(W[ijk],2) +
    3*Ryy*alpha[ijk]*Power(W[ijk],2) -
    gamyy*invgamyy*Ryy*alpha[ijk]*Power(W[ijk],2) -
    2*gamyy*invgamyz*Ryz*alpha[ijk]*Power(W[ijk],2) -
    gamyy*invgamzz*Rzz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamyy*invgamxx*Ssxx*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamyy*invgamxy*Ssxy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamyy*invgamxz*Ssxz*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ssyy*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamyy*invgamyy*Ssyy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamyy*invgamyz*Ssyz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamyy*invgamzz*Sszz*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAtyz[ijk]
=
(3*dexAtxyz*betax[ijk] + 3*dexAtyyz*betay[ijk] + 3*dexAtzyz*betaz[ijk] +
    3*dbetazx*exAtxy[ijk] + 3*dbetayx*exAtxz[ijk] -
    6*invgamtxx*alpha[ijk]*exAtxy[ijk]*exAtxz[ijk] +
    3*dbetazy*exAtyy[ijk] - 6*invgamtxy*alpha[ijk]*exAtxz[ijk]*
     exAtyy[ijk] - 2*dbetaxx*exAtyz[ijk] + dbetayy*exAtyz[ijk] +
    dbetazz*exAtyz[ijk] - 6*invgamtxy*alpha[ijk]*exAtxy[ijk]*exAtyz[ijk] -
    6*invgamtxz*alpha[ijk]*exAtxz[ijk]*exAtyz[ijk] -
    6*invgamtyy*alpha[ijk]*exAtyy[ijk]*exAtyz[ijk] -
    6*invgamtyz*alpha[ijk]*Power(exAtyz[ijk],2) + 3*dbetayz*exAtzz[ijk] -
    6*invgamtxz*alpha[ijk]*exAtxy[ijk]*exAtzz[ijk] -
    6*invgamtyz*alpha[ijk]*exAtyy[ijk]*exAtzz[ijk] -
    6*invgamtzz*alpha[ijk]*exAtyz[ijk]*exAtzz[ijk] +
    3*alpha[ijk]*exAtyz[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAtyz[ijk]*Theta[ijk] - 3*DDalphayz*Power(W[ijk],2) +
    DDalphaxx*gamyz*invgamxx*Power(W[ijk],2) +
    2*DDalphaxy*gamyz*invgamxy*Power(W[ijk],2) +
    2*DDalphaxz*gamyz*invgamxz*Power(W[ijk],2) +
    DDalphayy*gamyz*invgamyy*Power(W[ijk],2) +
    2*DDalphayz*gamyz*invgamyz*Power(W[ijk],2) +
    DDalphazz*gamyz*invgamzz*Power(W[ijk],2) -
    gamyz*invgamxx*Rxx*alpha[ijk]*Power(W[ijk],2) -
    2*gamyz*invgamxy*Rxy*alpha[ijk]*Power(W[ijk],2) -
    2*gamyz*invgamxz*Rxz*alpha[ijk]*Power(W[ijk],2) -
    gamyz*invgamyy*Ryy*alpha[ijk]*Power(W[ijk],2) +
    3*Ryz*alpha[ijk]*Power(W[ijk],2) -
    2*gamyz*invgamyz*Ryz*alpha[ijk]*Power(W[ijk],2) -
    gamyz*invgamzz*Rzz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamyz*invgamxx*Ssxx*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamyz*invgamxy*Ssxy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamyz*invgamxz*Ssxz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamyz*invgamyy*Ssyy*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Ssyz*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamyz*invgamyz*Ssyz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamyz*invgamzz*Sszz*alpha[ijk]*Power(W[ijk],2))/3.
;

dtexAtzz[ijk]
=
(3*dexAtxzz*betax[ijk] + 3*dexAtyzz*betay[ijk] + 3*dexAtzzz*betaz[ijk] +
    6*dbetazx*exAtxz[ijk] - 6*invgamtxx*alpha[ijk]*Power(exAtxz[ijk],2) +
    6*dbetazy*exAtyz[ijk] - 12*invgamtxy*alpha[ijk]*exAtxz[ijk]*
     exAtyz[ijk] - 6*invgamtyy*alpha[ijk]*Power(exAtyz[ijk],2) -
    2*dbetaxx*exAtzz[ijk] - 2*dbetayy*exAtzz[ijk] + 4*dbetazz*exAtzz[ijk] -
    12*invgamtxz*alpha[ijk]*exAtxz[ijk]*exAtzz[ijk] -
    12*invgamtyz*alpha[ijk]*exAtyz[ijk]*exAtzz[ijk] -
    6*invgamtzz*alpha[ijk]*Power(exAtzz[ijk],2) +
    3*alpha[ijk]*exAtzz[ijk]*exKh[ijk] +
    6*alpha[ijk]*exAtzz[ijk]*Theta[ijk] - 3*DDalphazz*Power(W[ijk],2) +
    DDalphaxx*gamzz*invgamxx*Power(W[ijk],2) +
    2*DDalphaxy*gamzz*invgamxy*Power(W[ijk],2) +
    2*DDalphaxz*gamzz*invgamxz*Power(W[ijk],2) +
    DDalphayy*gamzz*invgamyy*Power(W[ijk],2) +
    2*DDalphayz*gamzz*invgamyz*Power(W[ijk],2) +
    DDalphazz*gamzz*invgamzz*Power(W[ijk],2) -
    gamzz*invgamxx*Rxx*alpha[ijk]*Power(W[ijk],2) -
    2*gamzz*invgamxy*Rxy*alpha[ijk]*Power(W[ijk],2) -
    2*gamzz*invgamxz*Rxz*alpha[ijk]*Power(W[ijk],2) -
    gamzz*invgamyy*Ryy*alpha[ijk]*Power(W[ijk],2) -
    2*gamzz*invgamyz*Ryz*alpha[ijk]*Power(W[ijk],2) +
    3*Rzz*alpha[ijk]*Power(W[ijk],2) -
    gamzz*invgamzz*Rzz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamzz*invgamxx*Ssxx*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamzz*invgamxy*Ssxy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamzz*invgamxz*Ssxz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamzz*invgamyy*Ssyy*alpha[ijk]*Power(W[ijk],2) +
    16*cpi*gamzz*invgamyz*Ssyz*alpha[ijk]*Power(W[ijk],2) -
    24*cpi*Sszz*alpha[ijk]*Power(W[ijk],2) +
    8*cpi*gamzz*invgamzz*Sszz*alpha[ijk]*Power(W[ijk],2))/3.
;

dttrGtx[ijk]
=
(-6*dalphax*exAtUUxx - 6*dalphay*exAtUUxy - 6*dalphaz*exAtUUxz +
    4*ddbetaxxx*invgamtxx + ddbetaxyy*invgamtxx + ddbetaxzz*invgamtxx +
    7*ddbetaxyx*invgamtxy + ddbetayyy*invgamtxy + ddbetayzz*invgamtxy +
    7*ddbetaxzx*invgamtxz + ddbetayzy*invgamtxz + ddbetazzz*invgamtxz +
    3*ddbetayyx*invgamtyy + 6*ddbetayzx*invgamtyz + 3*ddbetazzx*invgamtzz -
    dbetaxx*trGtdx + 2*dbetayy*trGtdx + 2*dbetazz*trGtdx -
    3*dbetayx*trGtdy - 3*dbetazx*trGtdz + 3*dtrGtxx*betax[ijk] +
    3*dtrGtyx*betay[ijk] + 3*dtrGtzx*betaz[ijk] -
    2*alpha[ijk]*(9*dlnWx*exAtUUxx + 9*dlnWy*exAtUUxy + 9*dlnWz*exAtUUxz -
       3*exAtUUxx*Gtxxx - 6*exAtUUxy*Gtxxy - 6*exAtUUxz*Gtxxz -
       3*exAtUUyy*Gtxyy - 6*exAtUUyz*Gtxyz - 3*exAtUUzz*Gtxzz +
       2*dexKhx*invgamtxx + dThetax*invgamtxx + 2*dexKhy*invgamtxy +
       dThetay*invgamtxy + 2*dexKhz*invgamtxz + dThetaz*invgamtxz +
       24*cpi*invgamtxx*Smx + 24*cpi*invgamtxy*Smy + 24*cpi*invgamtxz*Smz -
       3*ckappa1*trGtdx + 3*ckappa1*trGtx[ijk]))/3.
;

dttrGty[ijk]
=
(-6*dalphax*exAtUUxy - 6*dalphay*exAtUUyy - 6*dalphaz*exAtUUyz +
    3*ddbetaxxy*invgamtxx + ddbetaxxx*invgamtxy + 7*ddbetaxyy*invgamtxy +
    ddbetaxzz*invgamtxy + 6*ddbetaxzy*invgamtxz + ddbetaxyx*invgamtyy +
    4*ddbetayyy*invgamtyy + ddbetayzz*invgamtyy + ddbetaxzx*invgamtyz +
    7*ddbetayzy*invgamtyz + ddbetazzz*invgamtyz + 3*ddbetazzy*invgamtzz -
    3*dbetaxy*trGtdx + 2*dbetaxx*trGtdy - dbetayy*trGtdy +
    2*dbetazz*trGtdy - 3*dbetazy*trGtdz + 3*dtrGtxy*betax[ijk] +
    3*dtrGtyy*betay[ijk] + 3*dtrGtzy*betaz[ijk] -
    2*alpha[ijk]*(9*dlnWx*exAtUUxy + 9*dlnWy*exAtUUyy + 9*dlnWz*exAtUUyz -
       3*exAtUUxx*Gtyxx - 6*exAtUUxy*Gtyxy - 6*exAtUUxz*Gtyxz -
       3*exAtUUyy*Gtyyy - 6*exAtUUyz*Gtyyz - 3*exAtUUzz*Gtyzz +
       2*dexKhx*invgamtxy + dThetax*invgamtxy + 2*dexKhy*invgamtyy +
       dThetay*invgamtyy + 2*dexKhz*invgamtyz + dThetaz*invgamtyz +
       24*cpi*invgamtxy*Smx + 24*cpi*invgamtyy*Smy + 24*cpi*invgamtyz*Smz -
       3*ckappa1*trGtdy + 3*ckappa1*trGty[ijk]))/3.
;

dttrGtz[ijk]
=
(-6*dalphax*exAtUUxz - 6*dalphay*exAtUUyz - 6*dalphaz*exAtUUzz +
    3*ddbetaxxz*invgamtxx + 6*ddbetaxyz*invgamtxy + ddbetaxxx*invgamtxz +
    ddbetaxyy*invgamtxz + 7*ddbetaxzz*invgamtxz + 3*ddbetayyz*invgamtyy +
    ddbetaxyx*invgamtyz + ddbetayyy*invgamtyz + 7*ddbetayzz*invgamtyz +
    ddbetaxzx*invgamtzz + ddbetayzy*invgamtzz + 4*ddbetazzz*invgamtzz -
    3*dbetaxz*trGtdx - 3*dbetayz*trGtdy + 2*dbetaxx*trGtdz +
    2*dbetayy*trGtdz - dbetazz*trGtdz + 3*dtrGtxz*betax[ijk] +
    3*dtrGtyz*betay[ijk] + 3*dtrGtzz*betaz[ijk] -
    2*alpha[ijk]*(9*dlnWx*exAtUUxz + 9*dlnWy*exAtUUyz + 9*dlnWz*exAtUUzz -
       3*exAtUUxx*Gtzxx - 6*exAtUUxy*Gtzxy - 6*exAtUUxz*Gtzxz -
       3*exAtUUyy*Gtzyy - 6*exAtUUyz*Gtzyz - 3*exAtUUzz*Gtzzz +
       2*dexKhx*invgamtxz + dThetax*invgamtxz + 2*dexKhy*invgamtyz +
       dThetay*invgamtyz + 2*dexKhz*invgamtzz + dThetaz*invgamtzz +
       24*cpi*invgamtxz*Smx + 24*cpi*invgamtyz*Smy + 24*cpi*invgamtzz*Smz -
       3*ckappa1*trGtdz + 3*ckappa1*trGtz[ijk]))/3.
;

dtTheta[ijk]
=
dThetax*betax[ijk] + dThetay*betay[ijk] + dThetaz*betaz[ijk] -
  (alpha[ijk]*(48*cpi*rho - 3*trR + 3*exAtUUxx*exAtxx[ijk] +
       6*exAtUUxy*exAtxy[ijk] + 6*exAtUUxz*exAtxz[ijk] +
       3*exAtUUyy*exAtyy[ijk] + 6*exAtUUyz*exAtyz[ijk] +
       3*exAtUUzz*exAtzz[ijk] - 2*Power(exKh[ijk],2) +
       12*ckappa1*Theta[ijk] + 6*ckappa1*ckappa2*Theta[ijk] -
       8*exKh[ijk]*Theta[ijk] - 8*Power(Theta[ijk],2)))/6.
;

dtalpha[ijk]
=
dalphax*betax[ijk] + dalphay*betay[ijk] + dalphaz*betaz[ijk] -
  cmuL*alpha[ijk]*exKh[ijk]
;

dtbetax[ijk]
=
(-ceta + dbetaxx)*betax[ijk] + dbetayx*betay[ijk] + dbetazx*betaz[ijk] +
  cmuS*trGtx[ijk]
;

dtbetay[ijk]
=
dbetaxy*betax[ijk] + (-ceta + dbetayy)*betay[ijk] + dbetazy*betaz[ijk] +
  cmuS*trGty[ijk]
;

dtbetaz[ijk]
=
dbetaxz*betax[ijk] + dbetayz*betay[ijk] - ceta*betaz[ijk] +
  dbetazz*betaz[ijk] + cmuS*trGtz[ijk]
;


    }
  }
}

#endif // #ifndef Z4COW_SET_RHS_HXX

/* Z4cow_set_rhs.hxx */
