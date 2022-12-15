#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Constructor called for Dog" << std::endl;
  _type = "Dog";
}

Dog::Dog(const Dog& other)
{
  std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& other) { return (*this); }

Dog::~Dog() { std::cout << "Destructor called for Dog" << std::endl; }

void Dog::makeSound() const { std::cout << "Barking meong meong" << std::endl; }
