#include "create_destroy_arrays.hpp"

//REVIEW: Allocate 1D Array 
template<typename ArrayType>
constexpr ArrayType *create_1d_array(const_ull &size) {

  ArrayType *table_data = nullptr;
  table_data = new ArrayType[size];

  return table_data;

}

//REVIEW: Allocate 2D Array
template<typename ArrayType>
constexpr ArrayType **create_2d_array(const_ull &rows, const_ull &columns) {

  ArrayType **table_data = nullptr;
  table_data = new ArrayType*[rows];

  for(ull i = 0; i < rows; ++i) {
    table_data[i] = new ArrayType[columns];
  }

  return table_data;

}

//REVIEW: Deallocate 1D Array
template<typename ArrayType> 
auto destroy_1d_array(ArrayType *table_data, const_ull &size) -> void {
  
  delete[] table_data;
  table_data = nullptr;

}

//REVIEW: Deallocate 2D Array
template<typename ArrayType>
auto destroy_2d_array(ArrayType **table_data, const_ull &size) -> void {

  for(ull i = 0; i < size; ++i) {
    delete[] table_data[i];
  }
  
  delete[] table_data;
  table_data = nullptr;

}