(* ::Package:: *)

(* Z4cInADM_rhs.wl *)

(* (c) Liwei Ji, 02/2025 *)

(****************************)

(* Z4c in ADM: for initial1 *)

(****************************)

SetEQN[trexK[], invgamma[i, j] ADMK[-i, -j]];

SetEQN[tempTheta[], 0];

SetEQN[W[], tempW[]];

SetEQN[gamt[i_, j_], tempW[] ^ 2 ADMgam[i, j]];

SetEQN[exKh[], trexK[] - 2 tempTheta[]];

SetEQN[exAt[i_, j_], tempW[] ^ 2 (ADMK[i, j] - (trexK[] / 3) ADMgam[i, j])];

SetEQN[Theta[], tempTheta[]];

SetEQN[alpha[], ADMalpha[]];

SetEQN[beta[i_], ADMbeta[i]];

(****************************)

(* Z4c in ADM: for initial2 *)

(****************************)

SetEQN[trGt[i_], invgamt[i, j] invgamt[k, l] GtDDD[-j, -k, -l]];

