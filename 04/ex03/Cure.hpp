#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria
{
  public:
    Cure();
    Cure(const Cure&);
    Cure& operator=(const Cure&);
    ~Cure();

    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
};

#endif
