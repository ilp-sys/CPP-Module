#include "ClapTrap.hpp"

int main()
{
  ClapTrap a("A");
  ClapTrap b("B");
  ClapTrap c(a);
  ClapTrap d = b;


  std::cout << std::endl << "All opbjects are created" << std::endl;

  a.attack("B");
  b.takeDamage(a.getAttackDamage());

  b.beRepaired(10);
  for (int i = 0; i < 10; i++)
  {
      b.attack("c");
      c.takeDamage(b.getAttackDamage());
  } 

  d.beRepaired(10);

  std::cout << std::endl << "All operations ended" << std::endl;

  return (0);
}
