#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    std::string	  _name;
    unsigned int  _hitPoints;
    unsigned int  _energyPoints;
    unsigned int  _attackDamage;
  public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &);
    DiamondTrap& operator=(const DiamondTrap&);
    ~DiamondTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void whoAmI();
};

#endif
