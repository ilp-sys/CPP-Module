#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
    std::string _name;
    Weapon &_weapon;
  public:
    HumanA(std::string name, Weapon &weapon):_name(name), _weapon(weapon){};
    void attack();
    std::string getName();
    Weapon getWeapon();
};

#endif
