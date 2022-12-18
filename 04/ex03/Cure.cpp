#include "Cure.hpp"

Cure::Cure(){ _type = "cure"; }

Cure::Cure(const Cure& other)
{
  _type = other.getType();
}

Cure& Cure::operator=(const Cure &other)
{
  (void)other;
  return (*this);
}
 
Cure::~Cure(){}

void Cure::use(ICharacter& target)
{
  std::cout << "*heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{

}
