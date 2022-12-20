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


Form::Form() : _name(DEFAULT_NAME), _grade(DEFAULT_GRD){ _signed  = false; }

Form::Form(const Form& other) : _name(other.getName()), _grade(other.getGrade())
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

int Form::getGrade() const { return (_grade); }

bool Form::getSigned() const { return (_signed); }

std::string Form::getName() const { return (_name); }

void Form::beSigned(Bureaucrat &b)
{
  try
  {
    if (b.getGrade() > getGrade())
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
  out << f.getName() << " form grade " << f.getGrade();
  if (f.getSigned())
    out << " is already signed";
  else
    out << " not yet signed";
  return (out);
}
