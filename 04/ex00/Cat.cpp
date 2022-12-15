#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Constructor called for Cat" << std::endl;
  _type = "Cat";
}


Cat::Cat(const Cat& other)
{
  std::cout << "Copy constructor called for Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& other) { return (*this); }

Cat::~Cat() { std::cout << "Destructor called for Cat" << std::endl; }

void Cat::makeSound() const { std::cout << "Meow ya-ong" << std::endl; }
