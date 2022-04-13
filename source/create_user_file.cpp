#include "create_user_file.hpp"

auto create_user_file(const_str &user_file_name) -> void {

  //REVIEW: Local Variables Declaration

  const_str file_path = "../html/";

  const_str file_path_name = file_path + user_file_name;

  const_str create_file = file_path_name;

  //ANCHOR: Algorithm and Statements to Execute

  std::fstream file_html(create_file, std::ios::app);

  if(file_html.is_open()) {
    std::cout << "\n\"" << user_file_name << "\" is now open";
  }

  file_html.close();

}

//ANCHOR: Learning reference for setting file path for fstream file
//LINK: https://stackoverflow.com/questions/8068921/how-to-use-fstream-objects-with-relative-path

//ANCHOR: 
//LINK: https://stackoverflow.com/questions/25225948/how-to-check-if-a-file-exists-in-c-with-fstreamopen
