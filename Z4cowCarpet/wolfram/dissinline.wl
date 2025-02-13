(* ::Package:: *)

(* dissinline.wl *)

(* (c) Liwei Ji, 02/2025 *)

(******************)
(* Configurations *)
(******************)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"}]]

SetPVerbose[False];

SetPrintDate[False];


(******************)
(* Print to Files *)
(******************)

SetOutputFile[FileNameJoin[{Directory[], "dissinline.hxx"}]];

SetMainPrint[
  pr["#include <array>"];
  pr["#include <cmath>"];
  pr[];
  pr["#include \"derivsinline.hxx\""];
  pr[];
  pr["namespace Z4cowCarpet {"];
  pr[];
  pr["template <int deriv_order, typename T>"];
  pr["CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
  pr["calc_diss(const cGH *restrict const cctkGH, const T *gf, int i, int j, int k,"];
  pr["          const std::array<T, 3> &invDx) {"];
  pr["  constexpr int diss_order = deriv_order + 2;"];
  pr["  constexpr int sign = diss_order % 4 == 0 ? -1 : +1;"];
  Do[
    pr[If[aOrd == 2, "  ", "  } else "]
      <> "if constexpr (deriv_order == " <> ToString[aOrd] <>") {"];
    pr["    return sign / T(Power(2, deriv_order + 2)) *"];
    pr["           (diss_" <>  ToString[aOrd + 2] <> "_o" <> ToString[aOrd + 2]
                           <> "<1>(cctkGH, gf, i, j, k, invDx) +"];
    pr["            diss_" <>  ToString[aOrd + 2] <> "_o" <> ToString[aOrd + 2]
                           <> "<2>(cctkGH, gf, i, j, k, invDx) +"];
    pr["            diss_" <>  ToString[aOrd + 2] <> "_o" <> ToString[aOrd + 2]
                           <> "<3>(cctkGH, gf, i, j, k, invDx));"];
    ,
    {aOrd, 2, 8, 2}
  ];
  pr["  } else {"];
  pr["    assert(0);"];
  pr["  }"];
  pr["}"];
  pr[];

  pr["} // namespace Z4cowCarpet"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
