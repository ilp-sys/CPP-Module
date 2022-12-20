#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"

#define DEFAULT_NAME "default"
#define DEFAULT_GRD  100

class Form
{
    bool	            _signed;
    const std::string _name;
    const int	        _grade;

  public:
    Form();
    Form(const Form&);
    Form& operator=(const Form&);
    ~Form();

    bool	      getSigned() const;
    int	        getGrade() const;
    std::string getName() const;

    void	      beSigned(Bureaucrat&);

    class GradeTooHighException;
    class GradeTooLowException;
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif
