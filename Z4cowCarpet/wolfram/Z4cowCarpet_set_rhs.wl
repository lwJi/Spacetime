(* ::Package:: *)

(* Z4cowCarpet_set_rhs.wl *)

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

<<wl/Z4c_vars.wl

<<wl/Z4c_rhs.wl

Module[{Mat, invMat},
  Mat =
    Table[gamt[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> 1}; (* det(gamt) = 1 enforced *)
  (* SetEQNDelayed[detinvgamt[], 1 / Det[Mat] // Simplify]; *)
  SetEQNDelayed[invgamt[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];


(******************)
(* Print to Files *)
(******************)

SetOutputFile[FileNameJoin[{Directory[], "Z4cowCarpet_set_rhs.hxx"}]];

SetMainPrint[
  (* Initialize grid function names *)
  PrintInitializations[{Mode -> "MainOut"}, dtEvolVarlist];
  (*PrintInitializations[{Mode -> "MainIn"}, Drop[TmunuVarlist, 1]];*)
  PrintInitializations[{Mode -> "MainIn"}, Delete[EvolVarlist, {{1}, {-3}}]];
  pr[];

  (* Loops *)
  pr["#pragma omp parallel for collapse(3)"];
  pr["for (int k=kstart; k<kend; k++) {"];
  pr["  for (int j=jstart; j<jend; j++) {"];
  pr["    for (int i=istart; i<iend; i++) {"];
  pr["    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);"];
  pr[];

  pr["const CCTK_REAL ceta = calceta(r[ijk]);"];
  pr[];

  PrintInitializations[{Mode -> "Derivs", DerivsOrder -> 1},
                       dEvolVarlist];
  PrintInitializations[{Mode -> "Derivs", DerivsOrder -> 2},
                       ddEvolVarlist];
  pr[];

  PrintEquations[{Mode -> "Temp"}, IntermediateVarlist];
  PrintEquations[{Mode -> "Temp"}, DDVarlist];
  PrintEquations[{Mode -> "Temp"}, RVarlist];
  PrintEquations[{Mode -> "Temp"}, MatterVarlist];
  pr[];

  PrintEquations[{Mode -> "Main"}, dtEvolVarlist];
  pr[];

  pr["    }"];
  pr["  }"];
  pr["}"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
