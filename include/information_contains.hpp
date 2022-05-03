#ifndef INFORMATION_CONTAINS_H
#define INFORMATION_CONTAINS_H

#include "types_aliases.hpp"

auto information_as_rows() -> unint;
auto information_as_columns() -> unint;

auto business_basic_info(std::string *table_data, const_ull &rows) -> void;

auto number_of_information() -> void;

#endif // INFORMATION_CONTAINS_H