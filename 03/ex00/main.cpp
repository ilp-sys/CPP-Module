#include "ClapTrap.hpp"

int main()
{
  ClapTrap a("A");
  ClapTrap b("B");
  ClapTrap c(a);
  ClapTrap d = b;

  //ClapTrap e = ClapTrap("D");
  
  std::cout << std::endl << "All opbjects are created" << std::endl;

  a.attack("B");
 

  std::cout << std::endl << "All operations ended" << std::endl;

  return (0);
}
