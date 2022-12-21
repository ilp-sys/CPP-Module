#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
  public:
    Intern();
    Intern(const Intern&);
    Intern& operator=(const Intern&);
    ~Intern();

    AForm* makeForm(std::string formName, std::string formTarget);
};

#endif
