(* ::Package:: *)

(* Z4cInADM_vars.wl *)

(* (c) Liwei Ji, 02/2025 *)

(************************************)

(* Temporary Variables for Z4cInADM *)

(************************************)

Z4cInADMTempVarlist =
  TempTensors[
    {invdetgamma [], PrintAs->"1/\[Gamma]"},
    {invgamma[i, j], Symmetric[{i, j}], PrintAs->"\[Gamma]"},
    {trexK       [], PrintAs -> "K"},
    {tempTheta   [], PrintAs -> "\[CapitalTheta]"},
    {tempW       [], PrintAs -> "W"}
  ];

