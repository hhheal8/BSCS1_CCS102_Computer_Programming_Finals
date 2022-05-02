#include "validate_user.hpp"

template<typename Var>
auto validate_user_var(Var &val, const_str &msg) -> void {

  std::cin >> val;

  if(!std::cin) {
    std::cout << msg;
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    validate_user_var(val, msg);
  }

}

//REVIEW: Template specialization

//NOTE: Template specialization for unsigned int
template<>
auto validate_user_var(unint &val, const_str &msg) -> void {

  std::cin >> val;

  if(!std::cin) {
    std::cout << msg;
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    validate_user_var(val, msg);
  }

}