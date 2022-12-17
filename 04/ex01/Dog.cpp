#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Constructor called for Dog" << std::endl;
  _type = "Dog";
  _brain = new Brain();
}

Dog::Dog(const Dog& other)
{
  std::cout << "Copy constructor called for Dog" << std::endl;
  _brain = new Brain();
  *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
  if (this != &other)
    _brain->operator=(*other._brain);
  return (*this);
}

Dog::~Dog()
{
  std::cout << "Destructor called for Dog" << std::endl;
  delete _brain;
}

void Dog::makeSound() const { std::cout << "_(U ´x` U)_" << std::endl; }

void Dog::addIdeas(const std::string idea) { _brain->addIdeas(idea); }

void Dog::printAllIdeas(void) { _brain->printAllIdeas(); }
