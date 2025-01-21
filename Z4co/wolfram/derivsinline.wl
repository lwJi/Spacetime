(* ::Package:: *)

(* derivsinline.wl *)

(* (c) Liwei Ji, 07/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"
  }]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Define Variables *)

SetOutputFile[FileNameJoin[{Directory[], "derivsinline.hxx"}]];

(* Function to get GF index name *)
GetGFIndexName[index_?IntegerQ] :=
  Module[{gfindex},
    gfindex =
      Which[
        index > 0, "ijkp" <> ToString[index],
        index < 0, "ijkm" <> ToString[Abs[index]],
        True, "ijkc0"
      ];
    ToExpression[gfindex]
  ];

(* Function to print 3D indexes *)
PrintIndexes3D[accuracyord_?IntegerQ, fdord_?IntegerQ] :=
  Module[{stencils, solution, index, buf},
    stencils = GetCenteringStencils[accuracyord];
    solution = GetFiniteDifferenceCoefficients[stencils, fdord];
    Do[
      index = stencils[[i]];
      If[(Subscript[c, index] /. solution) == 0, Continue[]];

      buf = "  const int " <> ToString[GetGFIndexName[index]] <>
      If[index == 0,
        " = CCTK_GFINDEX3D(GH, i, j, k);"
        ,
        " = CCTK_GFINDEX3D(GH, "
          <> "i + (dir == 1 ? " <> ToString[index] <> " : 0), "
          <> "j + (dir == 2 ? " <> ToString[index] <> " : 0), "
          <> "j + (dir == 3 ? " <> ToString[index] <> " : 0));"
      ];
      pr[buf]
      ,
      {i, 1, Length[stencils]}
    ];
  ];

(* Function to print FD expression *)
PrintFDExpression[accuracyord_?IntegerQ, fdord_?IntegerQ] :=
  Module[{stencils, solution, buf},
    stencils = GetCenteringStencils[accuracyord];
    solution = GetFiniteDifferenceCoefficients[stencils, fdord];

    buf = "    " <> ToString[CForm[
      Sum[
        index = stencils[[i]];
        (Subscript[c, index] /. solution) gf[[GetGFIndexName[index]]], {i, 1, Length[stencils]}]
      Product[idx[[dir-1]], {i, 1, fdord}]
      (*// Simplify*)
    ]] <> ";";
    pr[buf];
  ];

$MainPrint[] :=
  Module[{},
    pr["template <typename T>"];
    pr["inline T fd_1st(const cGH *GH, T *gf, T *idx, int i, int j, int k, int dir) {"];
    PrintIndexes3D[4, 1];
    pr["  return"];
    PrintFDExpression[4, 1];
    pr["}"];
    pr[];

    pr["template <typename T>"];
    pr["inline T fd_2nd(const cGH *GH, T *gf, T *idx, int i, int j, int k, int dir) {"];
    PrintIndexes3D[4, 2];
    pr["  return"];
    PrintFDExpression[4, 2];
    pr["}"];
  ];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
