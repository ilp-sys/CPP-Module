#include "Zombie.hpp"

int main(int argc, char *argv[])
{
  if (argc == 3)
  {
    Zombie *zombies = zombieHorde(atoi(argv[1]), argv[2]);
    for(int i = 0; i < atoi(argv[1]); i++)
      zombies[i].announce();
    delete[] zombies;
  }
  else
    std::cout << "Usage: ./zombiehorde [num_of_zombies] [name_of_zombies]" << std::endl;

  return (EXIT_SUCCESS);
}
