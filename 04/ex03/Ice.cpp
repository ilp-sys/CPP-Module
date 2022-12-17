#include "Ice.hpp"

Ice::Ice(){ _type = "ice"; };

Ice::Ice(const Ice&)
{

}

Ice& Ice::operator=(const Ice& other)
{

}

Ice::~Ice(){}

void Ice::use(ICharacter& target)
{
  std::cout << "* shoots an bolt at " << target.getName() << " *" << std::endl;
}
