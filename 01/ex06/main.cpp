#include "Harl.hpp"

int main(int argc, char *argv[])
{
  Harl harl;
  std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "EXCEPTION"};
  int i = 0;

  if (argc == 2)
  {
    for (i = 0; i < 5; i++)
      if (levels[i] == std::string(argv[1]))
        break ; 
    switch (i)
    {
        case 0: harl.complain("DEBUG");
        case 1: harl.complain("INFO");
        case 2: harl.complain("WARNING");
        case 3: harl.complain("ERROR"); break ;
        default:
          std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
  }
  else
  {
    std::cout << "Usage)./a.out [DEBUG/ INFO/ WARNING/ ERROR]" << std::endl;
  }
}
