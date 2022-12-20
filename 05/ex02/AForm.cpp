#include "AForm.hpp"

class AForm::GradeTooHighException : public std::exception
{
  public:
    const char* what() const throw() { return "Grade too high"; }
};

class AForm::GradeTooLowException : public std::exception
{
  public:
    const char* what() const throw() { return "Grade too low"; }
};


AForm::AForm() : _name(DEFAULT_NAME), _sGrade(DEFAULT_SGRD), _eGrade(DEFAULT_EGRD) { _signed  = false; }

AForm::AForm(const AForm& other) : _name(other.getName()), _sGrade(other.getSignGrade()), _eGrade(other.getExecuteGrade())
{
  *this = other;
}

AForm& AForm::operator=(const AForm &other)
{
  if (this != &other)
    _signed = other.getSigned();
  return (*this);
}

AForm::~AForm() {}

int AForm::getSignGrade() const { return (_sGrade); }

int AForm::getExecuteGrade() const { return (_eGrade); }

bool AForm::getSigned() const { return (_signed); }

std::string AForm::getName() const { return (_name); }

void AForm::beSigned(Bureaucrat &b)
{
  try
  {
    if (b.getGrade() > getSignGrade())
      throw GradeTooLowException();
    b.signForm();
    _signed = true;
    std::cout << b.getName() << " signed " << getName() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cerr << b.getName() << " couldn't sign " << getName() << " because ";
    std::cerr << e.what() << std::endl;
  }
}

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
  out << f.getName() << " form sgrade " << f.getSignGrade() << " egrade " << f.getExecuteGrade();
  if (f.getSigned())
    out << " is already signed";
  else
    out << " not yet signed";
  return (out);
}
