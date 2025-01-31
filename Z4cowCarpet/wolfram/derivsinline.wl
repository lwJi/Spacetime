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
  pr["#include <array>"];
  pr["#include <cmath>"];
  pr[];

  pr["namespace Z4cowCarpet {"];
  pr[];

  pr["template <typename T>"];
  pr["inline T Power(T x, int y) {"];
  pr["  return pow(x, y);"];
  pr["}"];
  pr[];

  pr["template <int DI, typename T>"];
  pr["inline T fd_1st(const cGH *restrict const cctkGH, const T *gf, int i, int j, int k, const std::array<T, 3> idx) {"];
  PrintIndexes3D[4, 1, "DI"];
  pr["  return"];
  PrintFDExpression[4, 1, "idx"];
  pr["}"];
  pr[];

  pr["template <int DI, int DJ, typename T>"];
  pr["inline T fd_2nd(const cGH *restrict const cctkGH, const T *gf, int i, int j, int k, const std::array<T, 3> idx) {"];
  pr["  if constexpr (DI == DJ) {"];
  PrintIndexes3D[4, 2, "DI"];
  pr["    return"];
  PrintFDExpression[4, 2, "idx"];
  pr["  } else {"];
  PrintIndexes3DMix2nd[4, "DI", "DJ"];
  pr["    return"];
  PrintFDExpressionMix2nd[4, "idx"];
  pr["  }"];
  pr["}"];

  pr["} // namespace Z4cowCarpet"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
