#include "Cure.hpp"

Cure::Cure() { _type = "ice"; }

Cure::Cure(const Cure& other) { _type = other.getType(); }

Cure& Cure::operator=(const Cure& other)
{
  (void)other;
  return (*this);
}

AMateria* Cure::clone() const
{
  return (new Cure());
}

void Cure::use(ICharacter& target)
{
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {}
