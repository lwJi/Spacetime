(* ::Package:: *)

(* Z4cowCarpet_initial2.wl *)

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
  Mat = Table[gamt[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> 1}; (* since we enforced that det(gamt) = 1 *)
  (* SetEQNDelayed[detinvgamt[], 1 / Det[Mat] // Simplify]; *)
  SetEQNDelayed[invgamt[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];

SetOutputFile[FileNameJoin[{Directory[], "Z4cowCarpet_initial2.hxx"}]];

SetMainPrint[
  (* initail grid function names *)
  PrintInitializations[{Mode -> "MainOut"}, Take[EvolVarlist, {5}]];
  pr[];

  PrintInitializations[{Mode -> "MainOut"}, Take[EvolVarlist, {2}]];
  pr[];

  (* Loops *)
  pr["#pragma omp parallel for collapse(3)"];
  pr["for (int k=kstart; k<kend; k++) {"];
  pr["  for (int j=jstart; j<jend; j++) {"];
  pr["    for (int i=istart; i<iend; i++) {"];
  pr["    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);"];
  pr[];

  PrintInitializations[{Mode -> "Derivs1st", TensorType -> "Vect"}, Take[dEvolVarlist, {2}]];
  pr[];

  PrintEquations[{Mode -> "Temp"}, Take[IntermediateVarlist, {2}]];
  PrintEquations[{Mode -> "Temp"}, Take[ADMTempVarlist, {-2}]];
  pr[];

  PrintEquations[{Mode -> "Main"}, Take[EvolVarlist, {5}]];
  pr[];

  pr["    }"];
  pr["  }"];
  pr["}"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
