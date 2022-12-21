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

AForm::AForm(int sGrade, int eGrade, std::string name): _name(name), _sGrade(sGrade), _eGrade(eGrade)
{
  _signed = false;
}

AForm& AForm::operator=(const AForm &other)
{
  if (this != &other)
    _signed = other.getSigned();
  return (*this);
}

AForm::~AForm() {}

void AForm::setSigned(bool s) { _signed = s; }


int AForm::getSignGrade() const { return (_sGrade); }

int AForm::getExecuteGrade() const { return (_eGrade); }

bool AForm::getSigned() const { return (_signed); }

std::string AForm::getName() const { return (_name); }

void AForm::beSigned(Bureaucrat &) { _signed = true; }

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
  out << f.getName() << " form sgrade " << f.getSignGrade() << " egrade " << f.getExecuteGrade();
  if (f.getSigned())
    out << " is already signed";
  else
    out << " not yet signed";
  return (out);
}
