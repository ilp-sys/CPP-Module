#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"

#define DEFAULT_NAME "default"
#define DEFAULT_SGRD  100
#define DEFAULT_EGRD  100

class Form
{
    bool	            _signed;
    const std::string _name;
    const int	        _sGrade;
    const int	        _eGrade;

  public:
    Form();
    Form(const Form&);
    Form& operator=(const Form&);
    ~Form();

    bool	      getSigned() const;
    int	        getSignGrade() const;
    int	        getExecuteGrade() const;
    std::string getName() const;

    void	      beSigned(Bureaucrat&);

    class GradeTooHighException;
    class GradeTooLowException;
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif
