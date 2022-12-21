#include "Form.hpp"

int main()
{
  try
  {
    Form A;
    std::cout << A << std::endl;

    Bureaucrat B(101);
    std::cout << B << std::endl;

    A.beSigned(B);

    B.upgradeBureaucrat();
    A.beSigned(B);

    std::cout << A << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  return (0);
}
