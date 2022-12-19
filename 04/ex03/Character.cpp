#include "Character.hpp"

Character::Character()
{
  _name = "default";
  for (int i = 0; i < MAX_SLOT; i++)
  {
    _capa[i] = false;
    _slot[i] = NULL;
  }
}

Character::Character(std::string name)
{
  _name = name;
  for (int i = 0; i < MAX_SLOT; i++)
  {
    _capa[i] = false;
    _slot[i] = NULL;
  }
}

Character::Character(const Character& other) { *this = other; }

Character& Character::operator=(const Character& other)
{
  if (this != &other)
  {
    for (int i = 0; i < MAX_SLOT; i++)
    {
        if (_capa[i] == true)
          delete _slot[i];
    }
    for (int i = 0; i < MAX_SLOT; i++)
        _capa[i] = other.getCapaIdx(i);
    for (int i = 0; i < MAX_SLOT; i++)
    {
        if (_capa[i] == true)
        {
          if (other.getSlotIdx(i)->getType() == "ice")
            _slot[i] = new Ice();
          else
            _slot[i] = new Cure();
        }
    }
    _name = other.getName();
  }
  return (*this);
}

Character::~Character() {}

std::string const &Character::getName() const { return (_name); }

void Character::equip(AMateria* m)
{
  for (int i = 0; i < MAX_SLOT; i++)
  {
      if (_capa[i] == false)
      {
        _capa[i] = true;
        _slot[i] = m;
        break;
      }
  }
}

void Character::unequip(int idx)
{
  _capa[idx] = false;
  _slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
  if (_capa[idx] == true)
    _slot[idx]->use(target);
}

bool Character::getCapaIdx(int i) const
{
  if (i >= MAX_SLOT)
  {
    std::cerr << "Index out of range" << std::endl;
    return (false);
  }
  return (_capa[i]);
}

AMateria* Character::getSlotIdx(int i) const
{
  if (i >= MAX_SLOT)
  {
    std::cerr << "Index out of range" << std::endl;
    return (0);
  }
  return (_slot[i]);
}
