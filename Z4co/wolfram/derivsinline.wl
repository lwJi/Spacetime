(* ::Package:: *)

(* Z4co_set_rhs.wl *)

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

GetGFIndexName[index_?IntegerQ] :=
  Module[{gfindex},
    If[index == 0,
      gfindex = ToExpression["ijkc0"]
      ,
      If[index > 0,
        gfindex = ToExpression["ijkp" <> ToString[index]]
        ,
        gfindex = ToExpression["ijkm" <> ToString[Abs[index]]]
      ]
    ];
    Return[gfindex]
  ];

PrintIndexes3D[ord_?IntegerQ] :=
  Module[{stencils, index, buf},
    stencils = GetCenteringStencils[ord];
    Do[
      index = stencils[[i]];
      If[index == 0,
        buf = "  const int " <> ToString[GetGFIndexName[index]] <> " = CCTK_GFINDEX3D(GH, i, j, k);"
        ,
        buf = "  const int " <> ToString[GetGFIndexName[index]] <> " = CCTK_GFINDEX3D(GH, "
          <> "((dir == 1) ? i" <> If[index == 0, "", If[index < 0, ToString[index], "+" <> ToString[index]]] <> " : i), "
          <> "((dir == 2) ? j" <> If[index == 0, "", If[index < 0, ToString[index], "+" <> ToString[index]]] <> " : j), "
          <> "((dir == 3) ? j" <> If[index == 0, "", If[index < 0, ToString[index], "+" <> ToString[index]]] <> " : k));"
      ];
      pr[buf];
      ,
      {i, 1, Length[stencils]}
    ];
  ];

$MainPrint[] :=
  Module[{},
    pr["template <typename T>"];
    pr["inline T fd_1st(const cGH *GH, T *gf, int i, int j, int k, int dir) {"];
    PrintIndexes3D[4];
    pr["  const int ijk = CCTK_GFINDEX3D(GH, i, j, k);"];
    pr["  return"];
    pr[";"];
    pr["}"];
  ];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
