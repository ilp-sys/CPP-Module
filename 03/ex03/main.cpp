#include "DiamondTrap.hpp"

int main()
{
  DiamondTrap diamond("diamond");

  std::cout << "Hit point of FragTrap :" << diamond.getHitPoint() << std::endl;
  std::cout << "Energy point of ScavTrap:" << diamond.getEnergyPoint() << std::endl;
  std::cout << "Attack point of FragTrap :" << diamond.getAttackDamage() << std::endl;

  diamond.whoAmI();
  diamond.attack("someone");

  diamond.guardGate();
  diamond.highFivesGuys();

  return (0);
}
