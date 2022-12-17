#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Constructor called for Cat" << std::endl;
  _type = "Cat";
  _brain = new Brain();
}

Cat::Cat(const Cat& other)
{
  std::cout << "Copy constructor called for Cat" << std::endl;
  _brain = new Brain();
  *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
  if (this != &other)
    _brain->operator=(*other._brain);
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Destructor called for Cat" << std::endl;
  delete _brain;
}

void Cat::makeSound() const { std::cout << "—ฅ/ᐠ. ̫ .ᐟ\\ฅ —"  << std::endl; }

void Cat::addIdeas(const std::string idea) { _brain->addIdeas(idea); }

void Cat::printAllIdeas(void) { _brain->printAllIdeas(); }
