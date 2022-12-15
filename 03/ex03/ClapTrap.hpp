#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

#define HIT_POINT	    10
#define ENERGY_POINT	10
#define ATTACK_DAMAGE	0

class ClapTrap
{
  protected:
    std::string	  _name;
    unsigned int  _hitPoints;
    unsigned int  _energyPoints;
    unsigned int  _attackDamage;

  public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    void	      attack(const std::string& target);
    void	      takeDamage(unsigned int amount);
    void	      beRepaired(unsigned int amount);

    std::string	  getName() const;
    unsigned int	getHitPoint() const;
    unsigned int	getEnergyPoint() const;
    unsigned int	getAttackDamage() const;
};
#endif

