#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter
{
    std::string _name;
    AMateria	  *_slot;
  public:
    Character();
    Character(std::string);
    Character(const Character&);
    Character& operator=(Character&);
    ~Character();

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
