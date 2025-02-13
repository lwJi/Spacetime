(* ::Package:: *)

(* Enforce_rhs.wl *)

(* (c) Liwei Ji, 02/2025 *)

(***************************)

(* Temporary Old Variables *)

(***************************)

SetEQN[Wold[], W[]];

SetEQN[gamtold[i_, j_], gamt[i, j]];

SetEQN[exAtold[i_, j_], exAt[i, j]];

SetEQN[alphaold[], alpha[]];

(********************************)

(* Enforce Algebric Constraints *)

(********************************)

SetEQN[gamt[i_, j_], Wfac[] ^ 2 gamtold[i, j]];

SetEQN[trexAtold[], invgamt[i, j] exAtold[-i, -j]];

SetEQN[exAt[i_, j_], exAtold[i, j] - (trexAtold[] / 3) gamt[i, j]];

