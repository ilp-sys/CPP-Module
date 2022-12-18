#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("jiwahn"){}

Bureaucrat::Bureaucrat(const unsigned int grade) : _name("jiwahn")
{
  try
  {
    if (_grade < 1)
      throw GradeTooHighException();
    if (_grade > 150)
      throw GradeTooLowException();
    _grade = grade;
  }
  catch (const GradeTooHighException & e)
  {
    std::cerr << e.what();
  }
  catch (const GradeTooLowException & e)
  {
    std::cerr << e.what();
  }
}

Bureaucrat::~Bureaucrat(){}

unsigned int Bureaucrat::getGrade() const { return (_grade); }

std::string Bureaucrat::getName() const { return (_name); }

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
  return out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
}
