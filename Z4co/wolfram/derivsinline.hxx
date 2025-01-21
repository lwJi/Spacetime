/* derivsinline.hxx */
/* Produced with Mathematica */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

template <typename T>
inline T fd_1st(const cGH *GH, T *gf, int i, int j, int k, int dir) {
  const int ijkm2 = CCTK_GFINDEX3D(GH, ((dir == 1) ? i-2 : i), ((dir == 2) ? j-2 : j), ((dir == 3) ? j-2 : k));
  const int ijkm1 = CCTK_GFINDEX3D(GH, ((dir == 1) ? i-1 : i), ((dir == 2) ? j-1 : j), ((dir == 3) ? j-1 : k));
  const int ijkc0 = CCTK_GFINDEX3D(GH, i, j, k);
  const int ijkp1 = CCTK_GFINDEX3D(GH, ((dir == 1) ? i+1 : i), ((dir == 2) ? j+1 : j), ((dir == 3) ? j+1 : k));
  const int ijkp2 = CCTK_GFINDEX3D(GH, ((dir == 1) ? i+2 : i), ((dir == 2) ? j+2 : j), ((dir == 3) ? j+2 : k));
  const int ijk = CCTK_GFINDEX3D(GH, i, j, k);
  return
;
}

#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
