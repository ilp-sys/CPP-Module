#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Constructor called for Cat" << std::endl;
  _type = "Cat";
}

Cat::Cat(const Cat& other)
{
  std::cout << "Copy constructor called for Cat" << std::endl;
  *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
  (void)other;
  return (*this);
}

Cat::~Cat() { std::cout << "Destructor called for Cat" << std::endl; }

void Cat::makeSound() const { std::cout << "—ฅ/ᐠ. ̫ .ᐟ\\ฅ —"  << std::endl; }
