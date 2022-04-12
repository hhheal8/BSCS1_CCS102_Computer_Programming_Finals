#include "enter_name_of_the_file.hpp"

auto enter_file_name() -> std::string {

  std::string enter_proper_file_name = "";

  const_str dot_html_extn = ".html";

  char enter_key = 0;

  const char confirmation_key_big_y   = 'Y',
             confirmation_key_small_y = 'y';

  bool is_valid_key = false;

  std::cout << "Enter Proper File Name (Without Spaces): ";
  std::cin >> enter_proper_file_name;

  std::cout << "\nConfirm Your File Name                 : \"" << enter_proper_file_name << "\"\n";
  std::cout << "Please Enter [Y/y] to Confirm          : ";
  std::cin >> enter_key;

  if((enter_key == confirmation_key_big_y) || (enter_key == confirmation_key_small_y)) {
    is_valid_key = true;
    std::cout << "\n\"" << enter_proper_file_name << "\" Successfully Created.";
  }

  if(is_valid_key == false) {
    std::cout << "\nInvalid Confirmation Key.\nPlease Enter the Valid Confirmation Key.\n";
    return enter_file_name();
  }

  for(size_t i = 0; i < dot_html_extn[i] != '\0'; ++i) {
    enter_proper_file_name.push_back(dot_html_extn[i]);
  }

  std::cout << "\nNew File Name: " << enter_proper_file_name;

  return enter_proper_file_name;

}