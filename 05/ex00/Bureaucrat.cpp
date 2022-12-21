#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception
{
  public:
    const char* what() const throw() { return "Grade too high"; }
};

class Bureaucrat::GradeTooLowException : public std::exception
{
  public:
    const char* what() const throw() { return "Grade too low"; }
};

Bureaucrat::Bureaucrat() : _name("A"){}

Bureaucrat::Bureaucrat(const int grade) : _name("A")
{
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
  _grade = grade;
}

Bureaucrat::~Bureaucrat(){}

int Bureaucrat::getGrade() const { return (_grade); }

std::string Bureaucrat::getName() const { return (_name); }

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
  return out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
}

void Bureaucrat::upgradeBureaucrat()
{
  try
  {
    if (_grade == 1)
      throw GradeTooHighException();
    --_grade;
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }  
}

void Bureaucrat::degradeBureaucrat()
{
  try
  {
    if (_grade == 150)
      throw GradeTooLowException();
    ++_grade;
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }  
}
