#define __BUREAUCRAT_CPP__
#ifndef __BUREAUCRAT_CPP__

#include <iostream>

class Bureaucrat
{
    std::string const _name;
    unsigned int      _grade;
  public:
    Bureaucrat();
    Bureaucrat(const unsigned int);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&)
    ~Bureaucrat(); 

    std::string	  getName() const;
    unsigned int	getGrade() const;

    void	        upgradeBureaucrat();
    void	        degradeBureaucrat();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif
