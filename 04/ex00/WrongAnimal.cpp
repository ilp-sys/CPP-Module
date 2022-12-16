#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { std::cout << "Constructor called for WrongAnimal" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
  std::cout << "Copy constructor called for WrongAnimal" << std::endl; 
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
  if (this != &other)
    _type = other.getType();
  return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "Destructor called for WrongAnimal" << std::endl; }

std::string WrongAnimal::getType() const { return (_type); }

void WrongAnimal::makeSound() const
{
  std::cout << "make wrong sound" << std::endl;
}
