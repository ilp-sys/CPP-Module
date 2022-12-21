#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern&) {}

Intern& Intern::operator=(const Intern&) { return (*this); }

Intern::~Intern(){}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
  std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

  int i;
  for (i = 0; i < 4; i++)
  {
      if (forms[i] == formName)
        break;
  }
  switch (i)
  {
      case 0:
        std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
        return new ShrubberyCreationForm(formTarget);
        break;
      case 1:
        std::cout << "Intern creates RobotomyRequestForm" << std::endl;
        return new RobotomyRequestForm(formTarget);
        break;
      case 2:
        std::cout << "Intern creates PresidentialPardonForm" << std::endl;
        return new PresidentialPardonForm(formTarget);
        break;
      default:
        std::cerr << "Form not found" << std::endl;
        return (NULL);
  }
}
