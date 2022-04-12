export module create_user_file_name;

import <cstddef>;
import <iostream>;
import <string>;

export auto enter_file_name() -> std::string {

  std::string enter_proper_file_name = "";

  std::string dot_html_extn = ".html";

  char enter_key = 0;

  const char confirmation_key_big_y   = 'Y',
             confirmation_key_small_y = 'y';

  bool is_valid_key = false;

  std::cout << "Enter Proper File Name (Without Spaces): ";
  std::cin >> enter_proper_file_name;

  std::cout << "Confirm File Name     :\n";
  std::cout << "\"" << enter_proper_file_name << "\"\n";
  std::cout << "Enter [Y/y] to Confirm: ";
  std::cin >> enter_key;

  if((enter_key == confirmation_key_big_y) || (enter_key == confirmation_key_small_y)) {
    is_valid_key = true;
    std::cout << "\n\"" << enter_proper_file_name << "\" successfully created.";
  }

  if(is_valid_key == false) {
    std::cout << "\nInvalid Format -> \"" << enter_proper_file_name << "\" file failed to create.";
    return enter_file_name();
  }

  for(size_t i = 0; i < dot_html_extn[i] != '\0'; ++i) {
    enter_proper_file_name.push_back(dot_html_extn[i]);
  }

  std::cout << "New File Name: " << enter_proper_file_name;

  return enter_proper_file_name;

}