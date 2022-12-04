#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon
{
    std::string _type;
  public:
    Weapon() {};
    Weapon(std::string type) { _type = type; };
    const std::string& getType();
    void setType(std::string type);
};

#endif
