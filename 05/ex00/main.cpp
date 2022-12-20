#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat a(5);

  Bureaucrat b(0);
  Bureaucrat c(1000);

  std::cout << a << std::endl;

  for (int i = 0; i < 10; i++)
  {
      a.upgradeBureaucrat();
      std::cout << a << std::endl;
  }

  return (0);
}

