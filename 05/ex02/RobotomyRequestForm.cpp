#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(72, 45, "RobotomyRequestForm") {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(72, 45, "RobotomyRequestForm")
{
  *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
  if (this != &other)
  {
    setSigned(other.getSigned());
  }
  return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(72, 45, "RobotomyRequestForm")
{
  _target = target;
  setSigned(false);
}

void RobotomyRequestForm::execute(const Bureaucrat &) const
{
  std::cout << "drrrr............" << std::endl;
  std::srand(std::time(nullptr));

  int randomVar = std::rand();
  if (randomVar % 2)
    std::cout << _target << " has been robotomized" << std::endl;
  else
    std::cout << "robotomy failed" << std::endl;
}
