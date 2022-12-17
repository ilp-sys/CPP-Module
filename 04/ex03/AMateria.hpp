#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>

class AMateria
{
  protected:
    std::string _type;
  public:
    AMateria(std::string const &type);
    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void user(ICharacter& target);
};

#endif
