#include "Aanimal.hpp"

Aanimal::Aanimal() { std::cout << "Constructor called for Aanimal" << std::endl; }

Aanimal::Aanimal(const Aanimal& other)
{
  std::cout << "Copy constructor called for Aanimal" << std::endl; 
  *this = other;
}

Aanimal& Aanimal::operator=(const Aanimal& other)
{
  if (this != &other)
    _type = other.getType();
  return (*this);
}

Aanimal::~Aanimal() { std::cout << "Destructor called for Aanimal" << std::endl; }

std::string Aanimal::getType() const { return (_type); }
