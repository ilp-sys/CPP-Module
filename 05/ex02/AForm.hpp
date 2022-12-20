#ifndef __AFORM_HPP__
#define __AFORM_HPP__

#include "Bureaucrat.hpp"

#define DEFAULT_NAME "default"
#define DEFAULT_SGRD  100
#define DEFAULT_EGRD  100

class AForm
{
    bool	            _signed;
    const std::string _name;
    const int	        _sGrade;
    const int	        _eGrade;

  public:
    AForm();
    AForm(const AForm&);
    AForm& operator=(const AForm&);
    ~AForm();

    bool	        getSigned() const;
    int	          getSignGrade() const;
    int	          getExecuteGrade() const;
    std::string   getName() const;

    void	      	beSigned(Bureaucrat&);
    virtual void	execute(Bureaucrat const & executor) = 0;

    class GradeTooHighException;
    class GradeTooLowException;
};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif
