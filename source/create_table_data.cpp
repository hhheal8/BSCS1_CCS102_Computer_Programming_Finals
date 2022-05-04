#include "create_table_data.hpp"

auto create_table_data(std::fstream &file_html, std::string *table_data, const_ull &rows) -> void {

  tags *starting_tags = new tags();

  starting_tags->start       = "<!DOCTYPE html>";
  starting_tags->start_html  = "\n<html>";
  starting_tags->start_head  = "\n<head>";
  starting_tags->start_style = "\n<style>";

starting_tags->style_tags = R"css(
table {
  font-family: arial, sans-serif;
  border-collapse: collapse;
  width: 100%
}
td, th {
  border: 1px solid #dddddd;
  text-align: left;
  padding: 6px;
}
tr:nth-child(even) {
  background-color: #dddddd;
}
)css";

  starting_tags->close_style = "</style>";
  starting_tags->close_head  = "\n</head>";

  starting_tags->start_body  = "\n<body>";

  starting_tags->start_table = "\n<table>";
  starting_tags->start_table_r = "\n\t<tr>";
  starting_tags->start_table_h = "\n\t\t<th>";

  starting_tags->close_table_r = "\n\t</tr>";
  starting_tags->close_table_h = "</th>";

  //NOTE: out in file
  
  file_html << starting_tags->start;
  file_html << starting_tags->start_html;

  file_html << "\n";

  file_html << starting_tags->start_head;
  file_html << starting_tags->start_style;

  file_html << starting_tags->style_tags;

  file_html << starting_tags->close_style;
  file_html << starting_tags->close_head;

  file_html << "\n";

  file_html << starting_tags->start_body;

  file_html << starting_tags->start_table;

  file_html << starting_tags->start_table_r;
  for(size_t i = 0; i < rows; ++i) {
    file_html << starting_tags->start_table_h << table_data[i] << starting_tags->close_table_h;
  }
  file_html << starting_tags->close_table_r;

  

  delete starting_tags;
  starting_tags = nullptr;

}

//ANCHOR: Learning reference for raw string literals
//LINK: https://en.cppreference.com/w/cpp/language/string_literal