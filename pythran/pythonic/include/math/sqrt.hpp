#ifndef PYTHONIC_INCLUDE_MATH_SQRT_HPP
#define PYTHONIC_INCLUDE_MATH_SQRT_HPP

#include "pythonic/include/utils/functor.hpp"
#include <cmath>

PYTHONIC_NS_BEGIN

namespace math
{
  DECLARE_FUNCTOR_2(sqrt, std::sqrt);
}
PYTHONIC_NS_END

#endif
