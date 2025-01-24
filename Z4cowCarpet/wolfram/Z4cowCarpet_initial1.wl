(* ::Package:: *)

(* Z4cowCarpet_initial1.wl *)

(* (c) Liwei Ji, 07/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"
  }]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

(*SetUseLetterForTensorComponet[True];*)

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Derivatives *)

(* Define Variables *)

<<wl/ADM_vars.wl

<<wl/Z4c_vars.wl

<<wl/Z4cInADM_rhs.wl

Module[{Mat, invMat},
  Mat = Table[ADMgam[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> invdetgamma};
  SetEQNDelayed[invdetgamma[], 1 / Det[Mat] // Simplify];
  SetEQNDelayed[invgamma[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];

SetOutputFile[FileNameJoin[{Directory[], "Z4cowCarpet_initial1.hxx"}]];

SetMainPrint[
  (* initail grid function names *)
  PrintInitializations[{Mode -> "MainOut"}, Delete[EvolVarlist, {{1}, {5}, {-3}}]];
  pr[];

  PrintInitializations[{Mode -> "MainIn"}, ADMVarlist];
  pr[];

  (* Loops *)
  pr["#pragma omp parallel collapse(3)"];
  pr[];
  pr["for (int k=kstart; k<kend; k++) {"];
  pr["  for (int j=jstart; j<jend; j++) {"];
  pr["    for (int i=istart; i<iend; i++) {"];
  pr["    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);"];
  pr[];

  PrintEquations[{Mode -> "Temp"}, Drop[ADMTempVarlist, -2]];
  pr[];

  pr["const auto tempW = cbrt(sqrt(invdetgamma));"];
  pr[];

  PrintEquations[{Mode -> "Main"}, Drop[EvolVarlist, {5}]];
  pr[];

  pr["    }"];
  pr["  }"];
  pr["}"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
