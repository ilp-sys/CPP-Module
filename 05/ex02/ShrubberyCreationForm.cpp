#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137, "ShrubberyCreationForm") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(145, 137, "ShrubberyCreationForm")
{
  *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
  if (this != &other)
  {
    setSigned(other.getSigned());
  }
  return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(145, 137, "ShrubberyCreationForm")
{
  _target = target;
  setSigned(false);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
  std::fstream fs;
  fs.open(_target + "_schrubbery", std::fstream::in | std::fstream::out | std::fstream::app);

  if (fs.is_open())
  {
    fs << "         ()          " << std::endl;
    fs << "         /\\         " << std::endl;
    fs << "        / *\\        " << std::endl;
    fs << "       / *  \\       " << std::endl;
    fs << "      / *    \\      " << std::endl;
    fs << "         []          " << std::endl;
    fs.close();
  }
  else
    std::cout << "file open failed" << std::endl;
}
