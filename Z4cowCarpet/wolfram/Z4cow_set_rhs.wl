(* ::Package:: *)

(* Z4cow_set_rhs.wl *)

(* (c) Liwei Ji, 07/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"
  }]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Derivatives *)

(* Define Variables *)

<<wl/Z4c_vars.wl

<<wl/Z4c_rhs.wl

Module[{Mat, invMat},
  Mat = Table[gamt[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> 1}; (* since we enforced that det(gamt) = 1 *)
  (* SetEQNDelayed[detinvgamt[], 1 / Det[Mat] // Simplify]; *)
  SetEQNDelayed[invgamt[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];

SetOutputFile[FileNameJoin[{Directory[], "Z4cow_set_rhs.hxx"}]];

$MainPrint[] :=
  Module[{},
    (* Define lambdas for taking derivs *)
    pr["const auto fd_1st = [&] (T *gf, int i, int j, int k, int dir) inline {"];
    PrintIndexes3D[4, 1];
    pr["  return"];
    PrintFDExpression[4, 1];
    pr["};"];
    pr[];

    pr["const auto fd_2nd = [&] (T *gf, int i, int j, int k, int dir) inline {"];
    PrintIndexes3D[4, 2];
    pr["  return"];
    PrintFDExpression[4, 2];
    pr["};"];
    pr[];

    pr["const auto fd_2nd_mix = [&] (T *gf, int i, int j, int k, int dir1, int dir2) inline {"];
    PrintIndexes3DMix[4];
    pr["  return"];
    PrintFDExpressionMix[4];
    pr["};"];
    pr[];

    (* Loops *)
    pr["for (k=kstart; k<kend; k++) {"];
    pr["  for (j=jstart; j<jend; j++) {"];
    pr["    for (i=istart; i<iend; i++) {"];
    pr["    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);"];
    pr[];

    (*
    PrintInitializations[{Mode -> "MainIn"}, TmunuVarlist];
    PrintInitializations[{Mode -> "MainIn"}, EvolVarlist];
    pr[];
    *)

    PrintInitializations[{Mode -> "Derivs1st"}, dEvolVarlist];
    PrintInitializations[{Mode -> "Derivs2nd"}, ddEvolVarlist];
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
