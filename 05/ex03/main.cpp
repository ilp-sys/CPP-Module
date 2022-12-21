#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
  Intern intern;

  AForm *form = intern.makeForm("presidential pardon", "home");

  if (form)
  {
    try
    {
      Bureaucrat b(30);

      b.signForm(*form);
      b.executeForm(*form);

      delete form;
    }
    catch (std::exception& e)
    {
      std::cerr << e.what() << std::endl;
    }
  }
  return (0);
}
