#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
  _name = ClapTrap::getName();
  _hitPoints = FragTrap::getHitPoint();
  _energyPoints = ScavTrap::getEnergyPoint();
  _attackDamage = ScavTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string name)
{
  _name = name; 
  _hitPoints = FragTrap::getHitPoint();
  _energyPoints = ScavTrap::getEnergyPoint();
  _attackDamage = ScavTrap::getAttackDamage();
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

void DiamondTrap::whoAmI()
{
  std::cout << _name << " " << ClapTrap::getName() + "_clap_name" << std::endl;
}

void DiamondTrap::attack(const std::string& other)
{
  ScavTrap::attack(other);
}
