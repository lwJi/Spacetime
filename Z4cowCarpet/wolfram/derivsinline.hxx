/* derivsinline.hxx */
/* Produced with Mathematica */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

const auto fd_1st = [&] (T *gf, int i, int j, int k, int dir) inline {
  const int m2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), k + (dir == 3 ? -2 : 0));
  const int m1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), k + (dir == 3 ? -1 : 0));
  const int p1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), k + (dir == 3 ? 1 : 0));
  const int p2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), k + (dir == 3 ? 2 : 0));
  return
    ((-8*gf[m1] + gf[m2] + 8*gf[p1] - gf[p2])*idx[-1 + dir])/12.;
};

const auto fd_2nd = [&] (T *gf, int i, int j, int k, int dir) inline {
  const int m2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), k + (dir == 3 ? -2 : 0));
  const int m1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), k + (dir == 3 ? -1 : 0));
  const int c0 = CCTK_GFINDEX3D(cctkGH, i, j, k);
  const int p1 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), k + (dir == 3 ? 1 : 0));
  const int p2 = CCTK_GFINDEX3D(cctkGH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), k + (dir == 3 ? 2 : 0));
  return
    ((-30*gf[c0] + 16*gf[m1] - gf[m2] + 16*gf[p1] - gf[p2])*Power(idx[-1 + dir],2))/12.;
};

const auto fd_2nd_mix = [&] (T *gf, int i, int j, int k, int dir1, int dir2) inline {
  const int m2m2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : -2),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : -2),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : -2));
  const int m2m1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? -2 : -1)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? -2 : -1)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? -2 : -1)));
  const int m2p1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? -2 : 1)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? -2 : 1)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? -2 : 1)));
  const int m2p2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? -2 : 2)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? -2 : 2)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? -2 : 2)));
  const int m1m2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? -1 : -2)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? -1 : -2)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? -1 : -2)));
  const int m1m1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : -1),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : -1),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : -1));
  const int m1p1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? -1 : 1)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? -1 : 1)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? -1 : 1)));
  const int m1p2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? -1 : 2)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? -1 : 2)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? -1 : 2)));
  const int p1m2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? 1 : -2)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? 1 : -2)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? 1 : -2)));
  const int p1m1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? 1 : -1)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? 1 : -1)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? 1 : -1)));
  const int p1p1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : 1),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : 1),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : 1));
  const int p1p2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? 1 : 2)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? 1 : 2)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? 1 : 2)));
  const int p2m2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? 2 : -2)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? 2 : -2)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? 2 : -2)));
  const int p2m1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? 2 : -1)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? 2 : -1)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? 2 : -1)));
  const int p2p1 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : (dir1 == 1 ? 2 : 1)),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : (dir1 == 2 ? 2 : 1)),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : (dir1 == 3 ? 2 : 1)));
  const int p2p2 = CCTK_GFINDEX3D(cctkGH, i + (dir1 != 1 && dir2 != 1 ? 0 : 2),
                                          j + (dir1 != 2 && dir2 != 2 ? 0 : 2),
                                          k + (dir1 != 3 && dir2 != 3 ? 0 : 2));
  return
    ((64*gf[m1m1] - 8*gf[m1m2] - 64*gf[m1p1] + 8*gf[m1p2] - 8*gf[m2m1] + gf[m2m2] + 8*gf[m2p1] - gf[m2p2] - 64*gf[p1m1] + 8*gf[p1m2] + 64*gf[p1p1] - 8*gf[p1p2] + 8*gf[p2m1] - gf[p2m2] - 8*gf[p2p1] + gf[p2p2])*idx[-1 + dir1]*idx[-1 + dir2])/144.;
};


#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
