#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
    Ice();
    Ice(const Ice&);
    Ice& operator=(const Ice&);
    ~Ice();

    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
};

#endif
