#include "recursive_fun.hpp"

constexpr decltype(auto) recur(auto callable_fun, auto ...params) {

  if constexpr(
    requires { std::invoke(callable_fun, params...); }
  ) {
    return std::invoke(callable_fun, params...);
  }
  else {
    return [callable_fun, params...](auto ...params2) -> decltype(auto) {
      return recur(callable_fun, params..., params2...);
    };
  }

}
