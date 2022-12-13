#include "ScavTrap.hpp"

int main()
{
  ScavTrap a("A");
  ScavTrap b("B");
  ScavTrap c(a);
  ScavTrap d = b;
  c.setName("C"); d.setName("D");


  std::cout << std::endl << "All opbjects are created" << std::endl;

  a.attack("B");
  b.takeDamage(a.getAttackDamage());

  b.beRepaired(10);
  for (int i = 0; i < 10; i++)
  {
      b.attack("c");
      c.takeDamage(b.getAttackDamage());
  } 

  d.guardGate();

  std::cout << std::endl << "All operations ended" << std::endl;

  return (0);
}
