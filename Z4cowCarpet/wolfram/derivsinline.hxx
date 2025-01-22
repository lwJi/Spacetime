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

template <int D, typename T>
inline T fd_2nd(const cGH *restrict const cctkGH, T *gf, int i, int j, int k) inline {
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
};


#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
