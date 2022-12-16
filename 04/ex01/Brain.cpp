#include "Brain.hpp"
#include <iostream>

Brain::Brain() { std::cout << "Constructor called for Brain" << std::endl; }

Brain::Brain(const Brain& other)
{
  *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
  //TODO: copy _ideas
  return (*this);
}

Brain::~Brain() { std::cout << "Destructor called for Brain" << std::endl; }
