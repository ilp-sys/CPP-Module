#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
};

#endif
