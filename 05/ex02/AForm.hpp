#ifndef __AFORM_HPP__
#define __AFORM_HPP__

#define DEFAULT_NAME "default"
#define DEFAULT_SGRD  100
#define DEFAULT_EGRD  100

class Bureaucrat;
#include <iostream>

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
    virtual ~AForm();

    AForm(int sGrade, int eGrade, std::string name);

    void	        setSigned(bool);

    bool	        getSigned() const;
    int	          getSignGrade() const;
    int	          getExecuteGrade() const;
    std::string   getName() const;

    void	      	beSigned(Bureaucrat&);
    virtual void	execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException;
    class GradeTooLowException;
};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif
