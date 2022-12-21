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
  try
  {
    if (grade < 1)
      throw GradeTooHighException();
    if (grade > 150)
      throw GradeTooLowException();
    _grade = grade;
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
}

Bureaucrat::~Bureaucrat(){}

int Bureaucrat::getGrade() const { return (_grade); }

std::string Bureaucrat::getName() const { return (_name); }

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
  return out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
}

void Bureaucrat::signForm(AForm &form)
{
  try
  {
    if (form.getSignGrade() < getGrade())
    {
      std::cerr << getName() << " couldn't sign " << form.getName() << " because ";
      throw GradeTooLowException();
    }
    form.beSigned(*this);
    std::cout << getName() << " signed " << form.getName() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
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

void Bureaucrat::executeForm(AForm const & form)
{
  try
  {
    if (form.getExecuteGrade() < getGrade())
    {
      std::cout << getName() << " couldn't execute form " << form.getName() << " because ";
      throw GradeTooLowException();
    }
    if (form.getSigned() == true)
    {
      std::cout << getName() << " executed " << form.getName() << std::endl;
      form.execute(*this);
    }
    else
    {
      std::cout << "Form " << getName() << " is not signed yet!" << std::endl;
    }
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
}
