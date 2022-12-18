#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class Bureaucrat
{
    std::string const _name;
    unsigned int      _grade;
    Bureaucrat();
  public:
    Bureaucrat(const unsigned int);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
    ~Bureaucrat(); 

    std::string	  getName() const;
    unsigned int	getGrade() const;

    void	        upgradeBureaucrat();
    void	        degradeBureaucrat();

    class GradeTooHighException : public std::exception
    {
      public:
        const char* what() const noexcept override{
          return "Grade Too High";
        }
    };
    class GradeTooLowException : public std::exception
    {
      public:
        const char* what() const noexcept override{
          return "Grade Too Low";
        }
    };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif
