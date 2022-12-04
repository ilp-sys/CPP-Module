#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
    std::string _name;
    Weapon *_weapon;
  public:
    HumanB(std::string name) { _name = name; };
    std::string getName();
    Weapon getWeapon();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif
