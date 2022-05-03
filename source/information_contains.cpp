#include "information_contains.hpp"

#include "create_destroy_arrays.hpp"
#include "validate_user.hpp"

auto information_as_rows() -> unint {

  unint rows = 0; 

  const_str warning_msg = "\nInvalid format. Please try again.\nRe-enter number of basic information of a business (Store Name, Contact Info, Address): ";

  std::cout << "\nEnter number of basic information of a business (Store Name, Contact Info, Address)   : ";
  validate_user_var(rows, warning_msg);

  return rows;

}

auto information_as_columns() -> unint {

  unint columns = 0;

  const_str warning_msg = "\nInvalid format. Please try again.\nRe-enter number of local business/business to consider (Local Branch, Internation)    : ";

  std::cout << "\nEnter number of local business/businesses to consider (Local Branch, Nationwide)      : ";
  validate_user_var(columns, warning_msg);

  return columns;

}

auto business_basic_info(std::string *table_data, const_ull &rows) -> void {

  std::string basic_info = "";

  std::cin.ignore();
  for(size_t i = 0; i < rows; ++i) {

    std::cout << "Enter business basic info no. " << i + 1 << ": ";
    std::getline(std::cin, basic_info);

    table_data[i] = basic_info;

  }

}

auto number_of_information() -> void {

  unint rows    = information_as_rows();
  unint columns = information_as_columns();

  std::string *list_business_info  = create_1d_array<std::string>(rows);
  std::string **list_business_data = create_2d_array<std::string>(rows, columns);

  system("cls");
  std::cout << "\nEnter business basic info (Store Name, Contact Info, Email, Address, Location, etc)   :-\n";
  business_basic_info(list_business_info, rows);

  destroy_1d_array<std::string>(list_business_info, rows);
  destroy_2d_array<std::string>(list_business_data, rows);

}
