#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
  protected:
    std::string _type;
    AMateria();
    AMateria(const AMateria&);
    AMateria& operator=(const AMateria&);
    ~AMateria();

  public:
    AMateria(std::string const &type);

    std::string const &getType() const;

    virtual void use(ICharacter& target);

    virtual AMateria* clone() const = 0;
};

#endif
