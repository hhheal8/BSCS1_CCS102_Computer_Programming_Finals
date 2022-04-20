#ifndef RECURSIVE_FUN_H
#define RECURSIVE_FUN_H

#include "types_aliases.hpp"

constexpr decltype(auto) recur(auto callable_fun, auto ...params);

#endif // RECURSIVE_FUN_H