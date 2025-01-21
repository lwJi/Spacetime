/* derivsinline.hxx */
/* Produced with Mathematica */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

template <typename T>
inline T fd_1st(const cGH *GH, T *gf, T *idx, int i, int j, int k, int dir) {
  const int ijkm2 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), j + (dir == 3 ? -2 : 0));
  const int ijkm1 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), j + (dir == 3 ? -1 : 0));
  const int ijkp1 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), j + (dir == 3 ? 1 : 0));
  const int ijkp2 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), j + (dir == 3 ? 2 : 0));
  return
    ((-2*gf[ijkm1])/3. + gf[ijkm2]/12. + (2*gf[ijkp1])/3. - gf[ijkp2]/12.)*idx[-1 + dir];
}

template <typename T>
inline T fd_2nd(const cGH *GH, T *gf, T *idx, int i, int j, int k, int dir) {
  const int ijkm2 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? -2 : 0), j + (dir == 2 ? -2 : 0), j + (dir == 3 ? -2 : 0));
  const int ijkm1 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? -1 : 0), j + (dir == 2 ? -1 : 0), j + (dir == 3 ? -1 : 0));
  const int ijkc0 = CCTK_GFINDEX3D(GH, i, j, k);
  const int ijkp1 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? 1 : 0), j + (dir == 2 ? 1 : 0), j + (dir == 3 ? 1 : 0));
  const int ijkp2 = CCTK_GFINDEX3D(GH, i + (dir == 1 ? 2 : 0), j + (dir == 2 ? 2 : 0), j + (dir == 3 ? 2 : 0));
  return
    ((-5*gf[ijkc0])/2. + (4*gf[ijkm1])/3. - gf[ijkm2]/12. + (4*gf[ijkp1])/3. - gf[ijkp2]/12.)*Power(idx[-1 + dir],2);
}

#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
