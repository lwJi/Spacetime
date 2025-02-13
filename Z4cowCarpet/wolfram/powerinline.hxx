#ifndef POWERINLINE_HXX
#define POWERINLINE_HXX

#include <array>
#include <cmath>
#include <type_traits>

namespace Z4cowCarpet {

template <typename T, typename U> constexpr T Power(T x, U y) {
  // If y is an integer, use exponentiation by squaring
  if constexpr (std::is_integral<U>::value) {
    if (y < 0) {
      return static_cast<T>(1) / Power(x, -y); // Handle negative exponents
    }
    T result = 1;
    while (y) {
      if (y % 2) {
        result *= x;
      }
      x *= x;
      y /= 2;
    }
    return result;
  } else {
    // Use std::pow for non-integer exponents
    return std::pow(x, y);
  }
}

} // namespace Z4cowCarpet

#endif // #ifndef POWERINLINE_HXX
