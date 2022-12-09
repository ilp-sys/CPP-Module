#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

#define HIT_POINT	    10
#define ENERGY_POINT	10
#define ATTACK_DAMAGE	0

class ClapTrap
{
    std::string	_name;
    int	        _hitPoints;
    int	        _energyPoints;
    int	        _attackDamage;

    ClapTrap();

  public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    void	      attack(const std::string& target);
    void	      takeDamage(unsigned int amount);
    void	      beRepaired(unsigned int amount);

    std::string	getName();
    int	        getHitPoint();
    int	        getEnergyPoint();
    int	        getAttackDamage();
};

#endif
