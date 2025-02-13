(* ::Package:: *)

(* Enforce_vars.wl *)

(* (c) Liwei Ji, 02/2025 *)

(*********************************************************)

(* Temporary Variable for Enforcing Algebric Constraints *)

(*********************************************************)

EnforceVarlist =
  TempTensors[
    {Wold[], PrintAs -> "\!\(\*SuperscriptBox[\(W\), \((old)\)]\)"},
    {gamtold[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SuperscriptBox[OverscriptBox[\(\[Gamma]\), \(~\)], \((old)\)]\)"},
    {exAtold[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SuperscriptBox[OverscriptBox[\(A\), \(~\)], \((old)\)]\)"},
    {alphaold[], PrintAs -> "\!\(\*SuperscriptBox[\(\[Alpha]\), \((old)\)]\)"},
    {invdetgamtold[], PrintAs -> "1/\!\(\*SuperscriptBox[OverscriptBox[\(\[Gamma]\), \(~\)], \((old)\)]\)"},
    {Wfac[], PrintAs -> "\!\(\*SuperscriptBox[\(W\), \((fac)\)]\)"},
    {trexAtold[], PrintAs -> "\!\(\*SuperscriptBox[OverscriptBox[\(A\), \(~\)], \((old)\)]\)"}
  ];

