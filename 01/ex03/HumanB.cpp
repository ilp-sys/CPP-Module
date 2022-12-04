#include "HumanB.hpp"

std::string HumanB::getName() { return (_name); }

Weapon HumanB::getWeapon() { return (*_weapon); }

void HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }

void HumanB::attack()
{
  std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}
