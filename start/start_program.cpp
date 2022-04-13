#include "create_user_file.hpp"
#include "enter_name_of_the_file.hpp"
#include "start_program.hpp"

auto start_program() -> void {

  std::string user_file_name = enter_file_name();

  const_str dot_html_file  = user_file_name;

  create_user_file(dot_html_file);

}
