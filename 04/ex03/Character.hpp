#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Characeter
{
    AMateria *slot;
  public:
    Characeter();
    Characeter(const Characeter&);
    Characeter& operator=(const Characeter&);
    ~Characeter();

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void use(int idx, ICharacter& target);
};

#endif
