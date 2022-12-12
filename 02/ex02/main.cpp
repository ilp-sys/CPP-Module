#include "Fixed.hpp"

int main(void)
{
  Fixed	      a(42.42f);
  const Fixed	b(1234.4321f);
  
  
  std::cout << "\nTest for the 6 comparison operators" << std::endl;

  std::cout << "a == b :" << (a == b) << std::endl;
  std::cout << "a != b :" << (a != b) << std::endl;
  std::cout << "a < b  :" << (a < b) << std::endl;
  std::cout << "a > b  :" << (a > b) << std::endl;
  std::cout << "a <= b :" << (a <= b) << std::endl;
  std::cout << "a >= b :" << (a >= b) << std::endl;


  std::cout << "\nTest for the 4 arithmetic operators" << std::endl;

  std::cout << "a + b :" << a + b << std::endl;
  std::cout << "a - b :" << a - b << std::endl;
  std::cout << "a * b :" << a * b << std::endl;
  std::cout << "a / b :" << a / b << std::endl;

  std::cout << "\nTest for the 4 in/decrement operators" << std::endl;

  std::cout << "a   :" << a << std::endl;
  std::cout << "++a :" << ++a << std::endl;
  std::cout << "a   :" << a << std::endl;
  std::cout << "a++ :" << a++ << std::endl;
  std::cout << "a   :" << a << std::endl;

  std::cout << "a   :" << a << std::endl;
  std::cout << "--a :" << --a << std::endl;
  std::cout << "a   :" << a << std::endl;
  std::cout << "a-- :" << a-- << std::endl;
  std::cout << "a   :" << a << std::endl;

  std::cout << "\nTest for min/max member functions"<< std::endl;

  std::cout << "max(a, b) :" << Fixed::max(a, b) << std::endl;
  std::cout << "min(a, b) :" << Fixed::min(a, b) << std::endl;

  return (0);
}
