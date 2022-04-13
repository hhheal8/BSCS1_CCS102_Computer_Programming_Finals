#include "create_user_file.hpp"

auto create_user_file(const_str &user_file_name) -> void {

  //REVIEW: Local Variables Declaration

  std::string file_path = "../html/";

  const_str create_file = file_path.append(user_file_name);

  //ANCHOR: Algorithm and Statements to Execute

  std::fstream file_html(create_file, std::ios::app);

  if(file_html.is_open()) {
    std::cout << "\n\"" << user_file_name << "\" is now open";
  }

  file_html.close();

}

//ANCHOR: Learning reference for setting file path for fstream file
//LINK: https://stackoverflow.com/questions/8068921/how-to-use-fstream-objects-with-relative-path
