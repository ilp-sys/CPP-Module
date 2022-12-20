#include "Form.hpp"

class Form::GradeTooHighException : public std::exception
{
  public:
    const char* what() const throw() { return "Grade too high"; }
};

class Form::GradeTooLowException : public std::exception
{
  public:
    const char* what() const throw() { return "Grade too low"; }
};


Form::Form() : _name(DEFAULT_NAME), _sGrade(DEFAULT_SGRD), _eGrade(DEFAULT_EGRD) { _signed  = false; }

Form::Form(const Form& other) : _name(other.getName()), _sGrade(other.getSignGrade()), _eGrade(other.getExecuteGrade())
{
  *this = other;
}

Form& Form::operator=(const Form &other)
{
  if (this != &other)
    _signed = other.getSigned();
  return (*this);
}

Form::~Form() {}

int Form::getSignGrade() const { return (_sGrade); }

int Form::getExecuteGrade() const { return (_eGrade); }

bool Form::getSigned() const { return (_signed); }

std::string Form::getName() const { return (_name); }

void Form::beSigned(Bureaucrat &b)
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

std::ostream& operator<<(std::ostream& out, const Form& f)
{
  out << f.getName() << " form grade " << f.getSignGrade();
  if (f.getSigned())
    out << " is already signed";
  else
    out << " not yet signed";
  return (out);
}
