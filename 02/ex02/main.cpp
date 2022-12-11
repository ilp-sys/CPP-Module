#include "Fixed.hpp"

int main(void)
{
  Fixed	      a;
  const Fixed	b;
  
  
  std::cout << "Test for the 6 comparison operators" << std::endl << std::endl;



  std::cout << "Test for the 4 arithmetic operators" << std::endl << std::endl;

  std::cout << "Test for the 4 in/decrement operators" << std::endl << std::endl;

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;

  std::cout << "Test for min/max member functions" << std::endl << std::endl;

  std::cout << Fixed::max(a, b) << std::endl;
  std::cout << Fixed::min(a, b) << std::endl;

  return (0);
}
