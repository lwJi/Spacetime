/* derivsinline.hxx */
/* Produced with Generato */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

template <int D, typename T>
inline T fd_1st(const cGH *restrict const cctkGH, T *gf, int i, int j, int k) inline {
  constexpr int DI = D - 1;
  const int m2 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? -2 : 0),
                                        j + (D == 2 ? -2 : 0),
                                        k + (D == 3 ? -2 : 0));
  const int m1 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? -1 : 0),
                                        j + (D == 2 ? -1 : 0),
                                        k + (D == 3 ? -1 : 0));
  const int p1 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? 1 : 0),
                                        j + (D == 2 ? 1 : 0),
                                        k + (D == 3 ? 1 : 0));
  const int p2 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? 2 : 0),
                                        j + (D == 2 ? 2 : 0),
                                        k + (D == 3 ? 2 : 0));
  return
    ((-8*gf[m1] + gf[m2] + 8*gf[p1] - gf[p2])*idx[DI])/12.;
};

template <int D1, int D2, typename T>
inline T fd_2nd(const cGH *restrict const cctkGH, T *gf, int i, int j, int k) inline {
  if constexpr (D1 == D2) {
  constexpr int D = D1;
  constexpr int DI = D - 1;
  const int m2 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? -2 : 0),
                                        j + (D == 2 ? -2 : 0),
                                        k + (D == 3 ? -2 : 0));
  const int m1 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? -1 : 0),
                                        j + (D == 2 ? -1 : 0),
                                        k + (D == 3 ? -1 : 0));
  const int c0 = CCTK_GFINDEX3D(cctkGH, i, j, k);
  const int p1 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? 1 : 0),
                                        j + (D == 2 ? 1 : 0),
                                        k + (D == 3 ? 1 : 0));
  const int p2 = CCTK_GFINDEX3D(cctkGH, i + (D == 1 ? 2 : 0),
                                        j + (D == 2 ? 2 : 0),
                                        k + (D == 3 ? 2 : 0));
    return
    ((-30*gf[c0] + 16*gf[m1] - gf[m2] + 16*gf[p1] - gf[p2])*Power(idx[DI],2))/12.;
  } else {
  constexpr int DI1 = D1 - 1;
  constexpr int DI2 = D2 - 1;
  const int m2m2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : -2),
                                          j + (D1 != 2 && D2 != 2 ? 0 : -2),
                                          k + (D1 != 3 && D2 != 3 ? 0 : -2));
  const int m2m1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -2 : -1)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -2 : -1)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? -2 : -1)));
  const int m2p1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -2 : 1)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -2 : 1)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? -2 : 1)));
  const int m2p2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -2 : 2)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -2 : 2)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? -2 : 2)));
  const int m1m2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -1 : -2)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -1 : -2)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? -1 : -2)));
  const int m1m1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : -1),
                                          j + (D1 != 2 && D2 != 2 ? 0 : -1),
                                          k + (D1 != 3 && D2 != 3 ? 0 : -1));
  const int m1p1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -1 : 1)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -1 : 1)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? -1 : 1)));
  const int m1p2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -1 : 2)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -1 : 2)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? -1 : 2)));
  const int p1m2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 1 : -2)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 1 : -2)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? 1 : -2)));
  const int p1m1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 1 : -1)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 1 : -1)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? 1 : -1)));
  const int p1p1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : 1),
                                          j + (D1 != 2 && D2 != 2 ? 0 : 1),
                                          k + (D1 != 3 && D2 != 3 ? 0 : 1));
  const int p1p2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 1 : 2)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 1 : 2)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? 1 : 2)));
  const int p2m2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 2 : -2)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 2 : -2)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? 2 : -2)));
  const int p2m1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 2 : -1)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 2 : -1)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? 2 : -1)));
  const int p2p1 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 2 : 1)),
                                          j + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 2 : 1)),
                                          k + (D1 != 3 && D2 != 3 ? 0 : (D1 == 3 ? 2 : 1)));
  const int p2p2 = CCTK_GFINDEX3D(cctkGH, i + (D1 != 1 && D2 != 1 ? 0 : 2),
                                          j + (D1 != 2 && D2 != 2 ? 0 : 2),
                                          k + (D1 != 3 && D2 != 3 ? 0 : 2));
    return
    ((64*gf[m1m1] - 8*gf[m1m2] - 64*gf[m1p1] + 8*gf[m1p2] - 8*gf[m2m1] + gf[m2m2] + 8*gf[m2p1] - gf[m2p2] - 64*gf[p1m1] + 8*gf[p1m2] + 64*gf[p1p1] - 8*gf[p1p2] + 8*gf[p2m1] - gf[p2m2] - 8*gf[p2p1] + gf[p2p2])*idx[DI1]*idx[DI2])/144.;
  }
};


#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
