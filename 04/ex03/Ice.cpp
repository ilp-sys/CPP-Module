#include "Ice.hpp"

Ice::Ice(){ _type = "ice"; };

Ice::Ice(const Ice& other)
{
  _type = other.getType();
}

Ice& Ice::operator=(const Ice& other)
{
  (void)other;
  return (*this);
}

Ice::~Ice(){}

void Ice::use(ICharacter& target)
{
  std::cout << "* shoots an bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{

}
