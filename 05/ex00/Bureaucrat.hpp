#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class Bureaucrat
{
    std::string const _name;
    int      	        _grade;
    Bureaucrat();
  public:
    Bureaucrat(const int);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
    ~Bureaucrat(); 

    std::string	  getName() const;
    int	          getGrade() const;

    void	        upgradeBureaucrat();
    void	        degradeBureaucrat();

    class GradeTooHighException;
    class GradeTooLowException;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif
