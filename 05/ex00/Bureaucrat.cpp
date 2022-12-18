#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const unsigned int grade)
{

}

Bureaucrat::~Bureaucrat(){}

unsinged int Bureaucrat::getGrade() const
{
  return (_grade);
}

std::string Bureaucrat::getName() const
{
  return (_name);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
  return out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
}
