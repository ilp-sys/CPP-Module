#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat a(1);
  Bureaucrat b(150);

  ShrubberyCreationForm	  scf;
  RobotomyRequestForm	    rrf;
  PresidentialPardonForm	ppf;

  scf.beSigned(a);
  scf.beSigned(b);

  return (0);
}
