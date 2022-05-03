#ifndef VALIDATE_USER_H
#define VALIDATE_USER_H

#include "types_aliases.hpp"

template<typename Var>
auto validate_user_var(Var &val, const_str &msg) -> void;

//REVIEW: Template specialization

//NOTE: Template specialization for unsigned int

template<>
auto validate_user_var(unint &val, const_str &msg) -> void;

#endif // VALIDATE_USER_H