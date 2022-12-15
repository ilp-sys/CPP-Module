#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
  _hitPoints = 100;
  _attackDamage = 30;
}

DiamondTrap::~DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string name)
{
  _name = name; 
  _hitPoints = 100;
  _attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
  *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
  if (this != &other)
  {
    _name = other.getName();
    _hitPoints = other.getHitPoint();
    _energyPoints = other.getEnergyPoint();
    _attackDamage = other.getAttackDamage();
  }
  return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
  if (getEnergyPoint() > 0 || getHitPoint() > 0)
  {
    --_energyPoints;
    std::cout << "DiamondTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
  }
  else if (getEnergyPoint() <= 0)
    std::cout << "Missed! DiamondTrap " << getName() << " lacks of energy point!" << std::endl;
  else 
    std::cout << "Failed! DiamondTrap " << getName() << "already dead" << std::endl;
}


void DiamondTrap::takeDamage(unsigned int amount)
{
  if (getHitPoint() > 0)
  {
    _hitPoints -= amount;
    std::cout << "DiamondTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << " points of HP!" << std::endl;
  }
  else
    std::cout << "DiamondTrap " << getName() << " already dead" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
  if (getEnergyPoint() > 0 || getHitPoint() > 0)
  {
    --_energyPoints;
    _hitPoints += amount;
    std::cout << "DiamondTrap " << getName() << " repaired itself, HP left " << getHitPoint() << std::endl;
  }
  else if (getEnergyPoint() <= 0)
    std::cout << "Repair failed, lacks of Energy point!" << std::endl;
  else
    std::cout << "Failed! DiamondTrap "  << getName() << " already dead" << std::endl;
}


void DiamondTrap::whoAmI()
{
  std::cout << _name << " " << ClapTrap::getName() + "_clap_name" << std::endl;
}
