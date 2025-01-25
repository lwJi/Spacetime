(* ::Package:: *)

(* ADM_rhs.wl *)

(* (c) Liwei Ji, 07/2024 *)

(* Z4c in ADM intermediate *)

SetEQN[trexK[], invgamma[i, j] ADMK[-i, -j]];

SetEQN[Gt[i_, k_, l_], 1 / 2 (dgamt[k, l, i] + dgamt[l, i, k] - dgamt[i, k, l])];

SetEQN[tempTheta[], 0];

(* Z4c in ADM *)

SetEQN[W[], tempW[]];

SetEQN[gamt[i_, j_], tempW[] ^ 2 ADMgam[i, j]];

SetEQN[exKh[], trexK[] - 2 tempTheta[]];

SetEQN[exAt[i_, j_], tempW[] ^ 2 (ADMK[i, j] - (trexK[] / 3) ADMgam[i, j])];

SetEQN[trGt[i_], invgamt[i, j] invgamt[k, l] Gt[-j, -k, -l]];

SetEQN[Theta[], tempTheta[]];

SetEQN[alpha[], ADMalpha[]];

SetEQN[beta[i_], ADMbeta[i]];

