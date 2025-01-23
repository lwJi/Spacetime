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

(* Derivatives *)

(* Define Variables *)

SetOutputFile[FileNameJoin[{Directory[], "derivsinline.hxx"}]];

SetMainPrint[
  pr["template <int D, typename T>"];
  pr["inline T fd_1st(const cGH *restrict const cctkGH, T *gf, int i, int j, int k) {"];
  PrintIndexes3D[4, 1];
  pr["  return"];
  PrintFDExpression[4, 1];
  pr["};"];
  pr[];

  pr["template <int D1, int D2, typename T>"];
  pr["inline T fd_2nd(const cGH *restrict const cctkGH, T *gf, int i, int j, int k) {"];
  pr["  if constexpr (D1 == D2) {"];
  pr["  constexpr int D = D1;"];
  PrintIndexes3D[4, 2];
  pr["    return"];
  PrintFDExpression[4, 2];
  pr["  } else {"];
  PrintIndexes3DMix2nd[4];
  pr["    return"];
  PrintFDExpressionMix2nd[4];
  pr["  }"];
  pr["};"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
