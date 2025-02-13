/* dissinline.hxx */
/* Produced with Generato */

#ifndef DISSINLINE_HXX
#define DISSINLINE_HXX

#include <array>
#include <cmath>

#include "derivsinline.hxx"

namespace Z4cowCarpet {

template <int deriv_order, typename T>
CCTK_ATTRIBUTE_ALWAYS_INLINE inline T
calc_diss(const cGH *restrict const cctkGH, const T *gf, int i, int j, int k,
          const std::array<T, 3> &invDx) {
  constexpr int diss_order = deriv_order + 2;
  constexpr int sign = diss_order % 4 == 0 ? -1 : +1;
  if constexpr (deriv_order == 2) {
    return sign / T(Power(2, deriv_order + 2)) *
           (diss_4_o4<1>(cctkGH, gf, i, j, k, invDx) +
            diss_4_o4<2>(cctkGH, gf, i, j, k, invDx) +
            diss_4_o4<3>(cctkGH, gf, i, j, k, invDx));
  } else if constexpr (deriv_order == 4) {
    return sign / T(Power(2, deriv_order + 2)) *
           (diss_6_o6<1>(cctkGH, gf, i, j, k, invDx) +
            diss_6_o6<2>(cctkGH, gf, i, j, k, invDx) +
            diss_6_o6<3>(cctkGH, gf, i, j, k, invDx));
  } else if constexpr (deriv_order == 6) {
    return sign / T(Power(2, deriv_order + 2)) *
           (diss_8_o8<1>(cctkGH, gf, i, j, k, invDx) +
            diss_8_o8<2>(cctkGH, gf, i, j, k, invDx) +
            diss_8_o8<3>(cctkGH, gf, i, j, k, invDx));
  } else if constexpr (deriv_order == 8) {
    return sign / T(Power(2, deriv_order + 2)) *
           (diss_10_o10<1>(cctkGH, gf, i, j, k, invDx) +
            diss_10_o10<2>(cctkGH, gf, i, j, k, invDx) +
            diss_10_o10<3>(cctkGH, gf, i, j, k, invDx));
  } else {
    assert(0);
  }
}

} // namespace Z4cowCarpet

#endif // #ifndef DISSINLINE_HXX

/* dissinline.hxx */
