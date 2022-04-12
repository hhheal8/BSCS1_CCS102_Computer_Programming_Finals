#ifndef CREATE_DESTROY_ARRAYS_H
#define CREATE_DESTROY_ARRAYS_H

#include "types_and_type_aliases.hpp"

template<typename ArrayType>
constexpr ArrayType *create_1d_array(const_ull &size);

template<typename ArrayType>
constexpr ArrayType **create_2d_array(const_ull &rows, const_ull &columns);

template<typename ArrayType> 
auto destroy_1d_array(ArrayType *table_data, const_ull &size) -> void;

template<typename ArrayType>
auto destroy_2d_array(ArrayType **table_data, const_ull &size) -> void;


#endif // CREATE_DESTROY_ARRAYS_H