#ifndef PYTHONIC_MATH_COPYSIGN_HPP
#define PYTHONIC_MATH_COPYSIGN_HPP

#include "pythonic/include/math/copysign.hpp"

#include "pythonic/utils/functor.hpp"
#include <cmath>

PYTHONIC_NS_BEGIN

namespace math
{
  DEFINE_FUNCTOR_2(copysign, std::copysign);
}
PYTHONIC_NS_END

#endif
