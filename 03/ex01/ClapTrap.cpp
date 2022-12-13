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
  if (_energyPoints > 0)
  {
    --_energyPoints;
    std::cout << "ClapTrap " << getName() << " attacks " << target << " , causing " <<  getAttackDamage() << " points of damage!" << std::endl;
  }
  else
    std::cout << "Missed! ClapTrap " << getName() << " lacks of energy point!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (amount < 0)
    std::cout << "amount can't be negative" << std::endl;
  else
  {
    if (_hitPoints > 0)
    {
      _hitPoints -= amount;
      std::cout << "ClapTrap " << getName() << " damaged for " << amount << ", left " << getHitPoint() << " points of HP!" << std::endl;
    }
    else
      std::cout << "ClapTrap " << getName() << " already dead" << std::endl;
  } 
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (amount < 0)
    std::cout << "amount can't be negative" << std::endl;
  else
  {
    if (_energyPoints >= 0)
    {
      --_energyPoints;
      _hitPoints += amount;
      std::cout << "ClapTrap " << getName() << " repaired itself, HP left " << getHitPoint() << std::endl;
    }
    else
      std::cout << "Repair failed, lacks of Energy point!" << std::endl;
  }

}

std::string ClapTrap::getName() const { return (_name); }
int ClapTrap::getHitPoint() const { return (_hitPoints); }
int ClapTrap::getEnergyPoint() const { return (_energyPoints); }
int ClapTrap::getAttackDamage() const { return (_attackDamage); }

void ClapTrap::setName(std::string name) { _name = name; }
void ClapTrap::setHitPoint(int hitPoint) { _hitPoints = hitPoint; }
void ClapTrap::setEnergyPoint(int energyPoint) { _energyPoints = energyPoint; }
void ClapTrap::setAttackDamage(int attackDamage) { _attackDamage = attackDamage; }
