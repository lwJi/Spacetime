(* ::Package:: *)

(* Z4cowCarpet_applydiss.wl *)

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

SetOutputFile[FileNameJoin[{Directory[], "Z4cowCarpet_applydiss.hxx"}]];

SetMainPrint[
  pr["const auto applydiss = "
     <> "[&](const CCTK_REAL *gf_, CCTK_REAL *gf_rhs_) {"];
  pr["switch (diss_order) {"];
  Do[
    pr["case " <> ToString[aOrd + 1] <> ": {"];
    pr["  #pragma omp parallel for collapse(3)"];
    pr["  for (int k=kstart; k<kend; k++) {"];
    pr["  for (int j=jstart; j<jend; j++) {"];
    pr["  for (int i=istart; i<iend; i++) {"];
    pr["    const int ijk = CCTK_GFINDEX3D(cctkGH,i,j,k);"];
    pr["      const auto rhs_old = gf_rhs_[ijk];"];
    pr["      const auto rhs_new ="];
    pr["          rhs_old +"];
    pr["          epsdiss * calc_diss<"
                    <> ToString[aOrd]
                    <> ">(cctkGH, gf_, i, j, k, invDxyz);"];
    pr["      gf_rhs_[ijk] = rhs_new;"];
    pr["  }"];
    pr["  }"];
    pr["  }"];
    pr["  break;"];
    pr["}"]
    ,
    {aOrd, 2, 8, 2}
  ];
  pr["default:"];
  pr["  assert(0);"];
  pr["}"];
  pr["};"];
  pr[]
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/Carpet.wl"}]];
