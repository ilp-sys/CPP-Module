#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "PresidentialPardonForm") {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(25, 5, "PresidentialPardonForm")
{
  *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
  if (this != &other)
  {
    setSigned(other.getSigned());
  }
  return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(25, 5, "PresidentialPardonForm")
{
  _target = target;
  setSigned(false);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
  std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
