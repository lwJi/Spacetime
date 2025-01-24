(* ::Package:: *)

(* ADM_vars.wl *)

(* (c) Liwei Ji, 07/2024 *)

(* ADM variables *)

ADMVarlist =
  GridTensors[
    {ADMgam[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SuperscriptBox[\(\[Gamma]\), \((ADM)\)]\)"},
    {ADMK[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SuperscriptBox[\(K\), \((ADM)\)]\)"},
    {ADMalpha[], PrintAs -> "\!\(\*SuperscriptBox[\(\[Alpha]\), \((ADM)\)]\)"},
    {ADMbeta[i], PrintAs -> "\!\(\*SuperscriptBox[\(\[Beta]\), \((ADM)\)]\)"}
    (*,
    {ADMdtalpha[], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \\(t\)]\)\!\(\*SuperscriptBox[\(\[Alpha]\), \((ADM)\)]\)"},
    {ADMdtbeta[i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \\(t\)]\)\!\(\*SuperscriptBox[\(\[Beta]\), \((ADM)\)]\)"}
    *)
  ];

ADMTempVarlist =
  TempTensors[
    {invdetgamma [], PrintAs->"1/\[Gamma]"},
    {invgamma[i, j], Symmetric[{i, j}], PrintAs->"\[Gamma]"},
    {trexK       [], PrintAs -> "K"},
    {Gt[-k, -i, -j], Symmetric[{-i, -j}], PrintAs->"\[CapitalGamma]"},
    {tempW       [], PrintAs -> "W"}
  ];
