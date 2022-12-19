#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#define MAX_SLOT 4

class Character : public ICharacter
{
    bool	   	  _capa[MAX_SLOT];
    AMateria 	  *_slot[MAX_SLOT];
    std::string	_name;
  public:
    Character();
    Character(std::string name);
    Character(const Character&);
    Character& operator=(const Character&);
    ~Character();

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);

    bool	      getCapaIdx(int i) const;
    AMateria	  *getSlotIdx(int i) const;
};

#endif
