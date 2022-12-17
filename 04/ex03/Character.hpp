#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    std::string _name;
    AMateria	  *inven;
  public:
    virtual std::string const &getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
