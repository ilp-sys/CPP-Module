#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
 
#include <iostream>

class Zombie
{
    std::string _name;
  public:
    Zombie();
    void setName(std::string name);
    std::string getName();
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif
