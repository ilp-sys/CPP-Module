#include "HumanA.hpp"

std::string HumanA::getName() { return (_name); }

Weapon HumanA::getWeapon() { return (_weapon); }

void HumanA::attack()
{
  std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}
