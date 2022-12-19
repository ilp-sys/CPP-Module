#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#define MAX_SLOT 4

class MateriaSource : public IMateriaSource
{
    bool	      _capa[MAX_SLOT];
    AMateria	  *_slot[MAX_SLOT];
  public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    MateriaSource& operator=(const MateriaSource&);
    ~MateriaSource();

    virtual void learnMateria(AMateria *);
    virtual AMateria* createMateria(std::string const & type);

    bool	    getCapaIdx(unsigned int idx) const;
    AMateria	*getSlotIdx(unsigned int idx) const;
};

#endif
