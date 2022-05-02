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


auto number_of_information() -> void {

  unint rows    = information_as_rows();
  unint columns = information_as_columns();

  std::string *list_business_info  = create_1d_array<std::string>(rows);

  std::string **list_business_data = create_2d_array<std::string>(rows, columns);



}
