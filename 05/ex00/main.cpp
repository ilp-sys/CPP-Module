#include "Bureaucrat.hpp"

int main()
{
  try
  {
    std::cout << "\n=CREATE BUREAUCRAT A=\n" << std::endl;
    Bureaucrat a(5);
    std::cout << a << std::endl;
    for (int i = 0; i < 10; i++)
    {
        a.upgradeBureaucrat();
        std::cout << a << std::endl;
    }
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  try
  {
    std::cout << "\n=CREATE BUREAUCRAT B=\n" << std::endl;
    Bureaucrat b(0);
    std::cout << b << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  try
  {
    std::cout << "\n=CREATE BUREAUCRAT C=\n" << std::endl;
    Bureaucrat c(1000);
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  return (0);
}

