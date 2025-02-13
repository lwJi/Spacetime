(* ::Package:: *)

(* Z4cowCarpet_initial1.wl *)

(* (c) Liwei Ji, 02/2025 *)

(******************)
(* Configurations *)
(******************)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"}]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

(*SetUseLetterForTensorComponet[True];*)

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];


(**********************************)
(* Define Variables and Equations *)
(**********************************)

<<wl/ADM_vars.wl

<<wl/Z4c_vars.wl

<<wl/Z4cInADM_vars.wl

<<wl/Z4cInADM_rhs.wl

Module[{Mat, invMat},
  Mat =
    Table[ADMgam[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> invdetgamma};
  SetEQNDelayed[invdetgamma[], 1 / Det[Mat] // Simplify];
  SetEQNDelayed[invgamma[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];


(******************)
(* Print to Files *)
(******************)

SetOutputFile[FileNameJoin[{Directory[], "Z4cowCarpet_initial1.hxx"}]];

SetMainPrint[
  (* Initialize grid function names *)
  PrintInitializations[{Mode -> "MainOut"},
                       Delete[EvolVarlist, {{1}, {5}, {-3}}]];
  PrintInitializations[{Mode -> "MainIn"}, ADMVarlist];
  pr[];

  (* Loops *)
  pr["#pragma omp parallel for collapse(3)"];
  pr["for (int k=kstart; k<kend; k++) {"];
  pr["  for (int j=jstart; j<jend; j++) {"];
  pr["    for (int i=istart; i<iend; i++) {"];
  pr["    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);"];
  pr[];

  (* invdetgamma, invgamma, trexK, tempTheta *)
  PrintEquations[{Mode -> "Temp"}, Drop[Z4cInADMTempVarlist, -1]];

  pr["const auto tempW = cbrt(sqrt(invdetgamma));"];
  pr[];

  (* W, gamt, exKh, exAt, Theta, alpha, beta *)
  PrintEquations[{Mode -> "Main"}, Drop[EvolVarlist, {5}]];
  pr[];

  pr["    }"];
  pr["  }"];
  pr["}"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
