/* derivsinline.hxx */
/* Produced with Mathematica */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

template <typename T>
inline T fd_1st(const cGH *GH, T *gf, int i, int j, int k, int dir) {
  const int ijkm2 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), j + (dir == 3 ? -2 : 0));
  const int ijkm1 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), j + (dir == 3 ? -1 : 0));
  const int ijkp1 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), j + (dir == 3 ? 1 : 0));
  const int ijkp2 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), j + (dir == 3 ? 2 : 0));

  return
    (-8*gf[ijkm1] + gf[ijkm2] + 8*gf[ijkp1] - gf[ijkp2])/12.;
}

#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
