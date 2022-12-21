#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    std::string _target;
    ShrubberyCreationForm();
  public:
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(std::string target);

    virtual void execute(Bureaucrat const & executor) const;
};

#endif
