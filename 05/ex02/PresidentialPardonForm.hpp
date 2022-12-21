#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    std::string _target;

    PresidentialPardonForm();
  public:
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    ~PresidentialPardonForm();

    PresidentialPardonForm(std::string target);

    virtual void execute(Bureaucrat const & executor) const;
};

#endif
