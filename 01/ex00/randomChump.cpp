#include "Zombie.hpp"

void randomChump(std::string name)
{
  Zombie zombie(name);
  zombie.announce();

  //Zombie* zombie = newZombie(name);
  //zombie->announce();
  //delete(zombie);
}
