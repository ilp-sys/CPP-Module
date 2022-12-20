#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

class PresidentialPardonForm : public AForm
{
  public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    ~PresidentialPardonForm();
};

#endif
