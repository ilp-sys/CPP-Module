#include "Character.hpp"

Character::Character(){}

Character::Character(std::string name)
{
  _name = name;
}

Character::Character(const Character& other)
{
}

Character& Character::operator=(Character& other)
{
  return (*this);
}

Character::~Character(){}

std::string const & Character::getName() const
{
  return (_name);
}

void Character::equip(AMateria *m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}
