#include "FragTrap.hpp"

FragTrap::FragTrap()
{
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap constructor called"<< std::endl;
}

FragTrap::FragTrap(std::string name)
{
  _name = name;
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap constructor called"<< std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
  std::cout << "FragTrap constructor called"<< std::endl;
  *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap(){ std::cout << "Destructor called for " << getName() << std::endl; }

void FragTrap::attack(const std::string& target)
{
  if (getEnergyPoint() > 0 || getHitPoint() > 0)
  {
    --_energyPoints;
    std::cout << "FragTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
  }
  else if (getEnergyPoint() <= 0)
    std::cout << "Missed! FragTrap " << getName() << " lacks of energy point!" << std::endl;
  else 
    std::cout << "Failed! FragTrap " << getName() << "already dead" << std::endl;
}


void FragTrap::takeDamage(unsigned int amount)
{
  if (getHitPoint() > 0)
  {
    if (_hitPoints < amount)
      _hitPoints = 0;
    else
      _hitPoints -= amount;
    std::cout << "FragTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << " points of HP!" << std::endl;
  }
  else
    std::cout << "FragTrap " << getName() << " already dead" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
  if (getEnergyPoint() > 0 || getHitPoint() > 0)
  {
    if (_hitPoints <= UINT_MAX - amount)
      _hitPoints += amount;
    --_energyPoints;
    std::cout << "FragTrap " << getName() << " repaired itself, HP left " << getHitPoint() << std::endl;
  }
  else if (getEnergyPoint() <= 0)
    std::cout << "Repair failed, lacks of Energy point!" << std::endl;
  else
    std::cout << "Failed! FragTrap "  << getName() << " already dead" << std::endl;
}


void FragTrap::highFivesGuys()
{
  std::cout << "High Five Guys" << std::endl;
}
