#include "Zombie.hpp"

std::string Zombie::getName() { return (_name); }

void Zombie::announce(void)
{
  std::cout << getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
