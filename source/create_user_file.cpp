#include "create_user_file.hpp"

auto create_user_file(const_str &user_file_name) -> void {

  //REVIEW: Local Variables Declaration

  std::string file_path = "/BSCS1_CCS102_Computer_Programming_Finals/html/";

  // const_str create_file = file_path.append(user_file_name);

  //REVIEW: Algorithm and Statements to Execute

  std::fstream file_html(user_file_name, std::ios::app);

  if(file_html.is_open()) {
    std::cout << "\n\"" << user_file_name << "\" is now open";
  }

  file_html.close();

}

//ANCHOR: Learning reference
//LINK: https://stackoverflow.com/questions/9739948/write-a-file-in-a-specific-path-in-c
//LINK: https://stackoverflow.com/questions/37857717/set-default-directory-path-in-fstream-in-c
