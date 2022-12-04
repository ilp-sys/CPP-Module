#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
 
#include <iostream>

class Zombie
{
    std::string _name;
  public:
    void setName(std::string name) { _name = name; }
    std::string getName();
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif
