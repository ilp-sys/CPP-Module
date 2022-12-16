#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  std::cout << "Constructor called for WrongCat" << std::endl;
  _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
  std::cout << "Copy constructor called for WrongCat" << std::endl;
  *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
  (void)other;
  return (*this);
}

WrongCat::~WrongCat() { std::cout << "Destructor called for WrongCat" << std::endl; }

void WrongCat::makeSound() const { std::cout << "—ฅ/ᐠ. ̫ .ᐟ\\ฅ —"  << std::endl; }
