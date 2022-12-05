#include "Zombie.hpp"

Zombie::Zombie(std::string name) { _name = name; };
Zombie::~Zombie() { std::cout << "destructor called for " << _name << std::endl; }

std::string Zombie::getName() { return (_name); }

void Zombie::announce(void)
{
  std::cout << getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
