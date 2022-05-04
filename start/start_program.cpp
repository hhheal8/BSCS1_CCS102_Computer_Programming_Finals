#include "start_program.hpp"

#include "create_user_file.hpp"
#include "enter_name_of_the_file.hpp"
#include "information_contains.hpp"

auto start_program() -> void {

  std::string user_file_name = enter_file_name();

  const_str dot_html_file  = user_file_name;

  const_str user_file = create_user_file(dot_html_file);

  std::fstream file_html; //REVIEW: Instantiate

  file_html.open(user_file, std::ios::out);

  number_of_information(file_html);
  
}
