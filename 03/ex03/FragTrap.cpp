#include "FragTrap.hpp"

FragTrap::FragTrap()
{
  setName("default");
  setHitPoint(100);
  setEnergyPoint(100);
  setAttackDamage(30);
  std::cout << "FragTrap constructor called"<< std::endl;
}

FragTrap::FragTrap(std::string name)
{
  setName(name);
  setHitPoint(100);
  setEnergyPoint(100);
  setAttackDamage(30);
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
    setName(other.getName());
    setHitPoint(other.getHitPoint());
    setEnergyPoint(other.getEnergyPoint());
    setAttackDamage(other.getAttackDamage());
  }
  return (*this);
}

FragTrap::~FragTrap(){ std::cout << "Destructor called for " << getName() << std::endl; }

void FragTrap::attack(const std::string& target)
{
  if (getEnergyPoint() > 0)
  {
    setEnergyPoint(getEnergyPoint() - 1);
    std::cout << "FragTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
  }
  else
    std::cout << "Missed! FragTrap " << getName() << " lacks of energy point!" << std::endl;
}


void FragTrap::takeDamage(unsigned int amount)
{
  if (getHitPoint() > 0)
  {
    setHitPoint(getHitPoint() - amount);
    std::cout << "FragTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << " points of HP!" << std::endl;
  }
  else
    std::cout << "FragTrap " << getName() << " already dead" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
  if (getEnergyPoint() > 0)
  {
    setEnergyPoint(getEnergyPoint() - 1);
    setHitPoint(getHitPoint() + amount);
    std::cout << "FragTrap " << getName() << " repaired itself, HP left " << getHitPoint() << std::endl;
  }
  else
    std::cout << "Repair failed, lacks of Energy point!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "High five guys!" << std::endl;
}
