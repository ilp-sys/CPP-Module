#include "Animal.hpp"

Animal::Animal() { std::cout << "Constructor called for Animal" << std::endl; }

Animal::Animal(const Animal& other)
{
  std::cout << "Copy constructor called for Animal" << std::endl; 
  *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
  if (this != &other)
    _type = other.getType();
  return (*this);
}

Animal::~Animal() { std::cout << "Destructor called for Animal" << std::endl; }

std::string Animal::getType() const { return (_type); }

void Animal::makeSound() const{}
