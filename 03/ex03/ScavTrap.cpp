#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap constructor called"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
  _name = name;
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap constructor called"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
  std::cout << "ScavTrap constructor called"<< std::endl;
  *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::~ScavTrap(){ std::cout << "Destructor called for " << getName() << std::endl; }

void ScavTrap::attack(const std::string& target)
{
  if (getEnergyPoint() > 0 || getHitPoint() > 0)
  {
    --_energyPoints;
    std::cout << "ScavTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
  }
  else if (getEnergyPoint() <= 0)
    std::cout << "Missed! ScavTrap " << getName() << " lacks of energy point!" << std::endl;
  else 
    std::cout << "Failed! ScavTrap " << getName() << "already dead" << std::endl;
}


void ScavTrap::takeDamage(unsigned int amount)
{
  if (getHitPoint() > 0)
  {
    _hitPoints -= amount;
    std::cout << "ScavTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << " points of HP!" << std::endl;
  }
  else
    std::cout << "ScavTrap " << getName() << " already dead" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
  if (getEnergyPoint() > 0 || getHitPoint() > 0)
  {
    --_energyPoints;
    _hitPoints += amount;
    std::cout << "ScavTrap " << getName() << " repaired itself, HP left " << getHitPoint() << std::endl;
  }
  else if (getEnergyPoint() <= 0)
    std::cout << "Repair failed, lacks of Energy point!" << std::endl;
  else
    std::cout << "Failed! ScavTrap "  << getName() << " already dead" << std::endl;
}


void ScavTrap::guardGate()
{
  std::cout << "Now in Gate keeper mode." << std::endl;
}
