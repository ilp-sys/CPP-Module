#include "Zombie.hpp"

int main()
{
  std::cout << "=== Test for newZombie ===" << std::endl;
  Zombie *zombie = newZombie("jiwahn");
  delete(zombie);

  std::cout << std::endl << "=== Test for randomChump ===" << std::endl;
  randomChump("A");
  return (EXIT_SUCCESS);
}
