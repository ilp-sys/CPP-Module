#include "Brain.hpp"
#include <iostream>

Brain::Brain() { std::cout << "Constructor called for Brain" << std::endl; }

Brain::Brain(const Brain& other)
{
  std::cout << "Constructor called for Brain" << std::endl; 
  *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
  if (this != &other)
  {
    for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
  }
  return (*this);
}

Brain::~Brain() { std::cout << "Destructor called for Brain" << std::endl; }

void Brain::addIdeas(const std::string idea)
{
  _ideas[_idx % 100] = idea;
  ++_idx;
}

void Brain::printAllIdeas(void)
{
  for (unsigned int i = 0; i < (_idx % 100); i++)
      std::cout << _ideas[i] << std::endl;
}
