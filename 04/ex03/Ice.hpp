#ifndef __ICE_HPP
#define __ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
    Ice();
    Ice(const Ice&);
    Ice& operator=(const Ice&);
    ~Ice();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif
