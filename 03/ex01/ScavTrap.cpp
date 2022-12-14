#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  setName("default");
  setHitPoint(100);
  setEnergyPoint(50);
  setAttackDamage(20);
  std::cout << "ScavTrap constructor called"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
  setName(name);
  setHitPoint(100);
  setEnergyPoint(50);
  setAttackDamage(20);
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
    setName(other.getName());
    setHitPoint(other.getHitPoint());
    setEnergyPoint(other.getEnergyPoint());
    setAttackDamage(other.getAttackDamage());
  }
  return (*this);
}

ScavTrap::~ScavTrap(){ std::cout << "Destructor called for " << getName() << std::endl; }

void ScavTrap::attack(const std::string& target)
{
  if (getEnergyPoint() > 0)
  {
    setEnergyPoint(getEnergyPoint() - 1);
    std::cout << "ScavTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
  }
  else
    std::cout << "Missed! ScavTrap " << getName() << " lacks of energy point!" << std::endl;
}


void ScavTrap::takeDamage(unsigned int amount)
{
  if (getHitPoint() > 0)
  {
    setHitPoint(getHitPoint() - amount);
    std::cout << "ScavTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << " points of HP!" << std::endl;
  }
  else
    std::cout << "ScavTrap " << getName() << " already dead" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
if (getEnergyPoint() > 0)
{
  setEnergyPoint(getEnergyPoint() - 1);
  setHitPoint(getHitPoint() + amount);
  std::cout << "ScavTrap " << getName() << " repaired itself, HP left " << getHitPoint() << std::endl;
}
else
  std::cout << "Repair failed, lacks of Energy point!" << std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "Now in Gate keeper mode." << std::endl;
}
