#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define MAX_SLOT 4

class Character
{
    bool	   capa[MAX_SLOT];
    AMateria *slot;
  public:
    Character();
    Character(const Character&);
    Character& operator=(const Character&);
    ~Character();

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void use(int idx, ICharacter& target);
};

#endif
