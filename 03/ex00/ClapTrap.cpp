#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(HIT_POINT), _energyPoints(ENERGY_POINT), _attackDamage(ATTACK_DAMAGE)
{
  std::cout << "ClapTrap constructor called"<< std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(HIT_POINT), _energyPoints(ENERGY_POINT), _attackDamage(ATTACK_DAMAGE)
{
  std::cout << "ClapTrap constructor called"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
  std::cout << "ClapTrap constructor called"<< std::endl;
  *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap(){ std::cout << "Destructor called for " << getName() << std::endl; }

void ClapTrap::attack(const std::string& target)
{
  if (_energyPoints > 0 || _hitPoints > 0)
  {
    --_energyPoints;
    std::cout << "ClapTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
  }
  else if (_energyPoints <= 0)
    std::cout << "Missed! ClapTrap " << getName() << " lacks of energy point!" << std::endl;
  else
    std::cout << "Failed! ClapTrap " << getName() << " alread dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (_hitPoints > 0)
  {
    if (_hitPoints < amount)
      _hitPoints = 0;
    else
      _hitPoints -= amount;
    std::cout << "ClapTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << " points of HP!" << std::endl;
  }
  else
    std::cout << "ClapTrap " << getName() << " already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (_energyPoints > 0 || _hitPoints > 0)
  {
    if (_hitPoints <= UINT_MAX - amount)
      _hitPoints += amount;
    --_energyPoints;
    std::cout << "ClapTrap " << getName() << " repaired itself, HP left " << getHitPoint() << std::endl;
  }
  else if (_energyPoints <= 0)
    std::cout << "Repair failed, lacks of Energy point!" << std::endl;
  else
    std::cout << "Failed! ClapTrap " << getName() << " alread dead" << std::endl;
}

std::string ClapTrap::getName() const { return (_name); }
unsigned int ClapTrap::getHitPoint() const { return (_hitPoints); }
unsigned int ClapTrap::getEnergyPoint() const { return (_energyPoints); }
unsigned int ClapTrap::getAttackDamage() const { return (_attackDamage); }
