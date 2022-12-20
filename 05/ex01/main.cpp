#include "Form.hpp"

int main()
{
  Form A;
  std::cout << A << std::endl;

  Bureaucrat B(101);
  std::cout << B << std::endl;

  A.beSigned(B);

  B.upgradeBureaucrat();
  A.beSigned(B);

  std::cout << A << std::endl;

  return (0);
}
