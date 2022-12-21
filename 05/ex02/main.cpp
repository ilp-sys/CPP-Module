#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Bureaucrat.hpp"
#include <unistd.h>

int main()
{
  Bureaucrat a(1);
  Bureaucrat b(150);

  std::cout << "\nTest for ShrubberyCreationForm" << std::endl;
  ShrubberyCreationForm sForm("home");

  a.signForm(sForm);
  a.executeForm(sForm);

  std::cout << "\nTest for RobotomyRequestForm" << std::endl;
  RobotomyRequestForm rForm("robo");
  a.signForm(rForm);
  for (int i = 0; i < 5; i++)
  {  
    a.executeForm(rForm);
    sleep(1);
    std::cout << std::endl;
  }
  
  //Test for PresidentialPardonForm
  std::cout << "\nTest for PresidentialPardonForm" << std::endl;
  PresidentialPardonForm pForm("42");
  b.signForm(pForm);
  a.signForm(pForm);
  b.executeForm(pForm);
  a.executeForm(pForm);
  
  return (0);
}
