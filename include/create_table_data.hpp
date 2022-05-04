#ifndef CREATE_TABLE_DATA_H
#define CREATE_TABLE_DATA_H

#include "types_aliases.hpp"

auto create_table_data(std::fstream &file_html, std::string *table_data, const_ull &rows) -> void;

#endif // CREATE_TABLE_DATA_H