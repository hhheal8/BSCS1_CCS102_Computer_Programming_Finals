#include "create_user_file.hpp"

#include "create_table_data.hpp"
#include "information_contains.hpp"

auto create_user_file(const_str &user_file_name) -> std::string {

  //REVIEW: Local Variables Declaration

  const_str file_path = "../html/";

  const_str file_path_name = file_path + user_file_name;

  const_str create_file = file_path_name;

  return create_file;

}

//ANCHOR: Learning reference for setting file path for fstream file
//LINK: https://stackoverflow.com/questions/8068921/how-to-use-fstream-objects-with-relative-path

//ANCHOR: 
//LINK: https://stackoverflow.com/questions/25225948/how-to-check-if-a-file-exists-in-c-with-fstreamopen
