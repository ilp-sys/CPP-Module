#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(HIT_POINT), _energyPoints(ENERGY_POINT), _attackDamage(ATTACK_DAMAGE)
{
  std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){ /*TODO*/ }

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
  return (*this);
}

ClapTrap::~ClapTrap(){ std::cout << "Destructor called for " << getName() << std::endl; }

void ClapTrap::attack(const std::string& target)
{
  std::cout << "ClapTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << "ClapTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << "points of HP!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  std::cout << "ClapTrap " << getName() << " repaired itself" << std::endl;
}

std::string ClapTrap::getName() { return (_name); }
int ClapTrap::getHitPoint() { return (_hitPoints); }
int ClapTrap::getEnergyPoint() { return (_energyPoints); }
int ClapTrap::getAttackDamage() { return (_attackDamage); }
