#ifndef PYTHONIC_INCLUDE_BUILTIN_LIST_REMOVE_HPP
#define PYTHONIC_INCLUDE_BUILTIN_LIST_REMOVE_HPP

#include "pythonic/include/__dispatch__/remove.hpp"
#include "pythonic/include/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace __builtin__
{

  namespace list
  {
    USING_FUNCTOR(remove, pythonic::__dispatch__::functor::remove);
  }
}
PYTHONIC_NS_END
#endif
