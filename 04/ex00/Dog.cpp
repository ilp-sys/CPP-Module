#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Constructor called for Dog" << std::endl;
  _type = "Dog";
}

Dog::Dog(const Dog& other)
{
  std::cout << "Copy constructor called for Dog" << std::endl;
  *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
  (void)other;
  return (*this);
}

Dog::~Dog() { std::cout << "Destructor called for Dog" << std::endl; }

void Dog::makeSound() const { std::cout << "_(U ´x` U)_" << std::endl; }
