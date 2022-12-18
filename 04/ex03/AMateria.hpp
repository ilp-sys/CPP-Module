#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>

class ICharacter;

class AMateria
{
  protected:
    std::string _type;

    AMateria();
    AMateria(const AMateria&);
    AMateria& operator=(AMateria&);
    virtual ~AMateria(); //TODO: see if the abstract class's pointer could be defined

  public:
    AMateria(std::string const & type);
    std::string const &getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif
