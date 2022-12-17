#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    MateriaSource& operator=(const MateriaSource&);
    ~MateriaSource();
    virtual void learnMateria(AMateria *);
    virtual AMateria* createMateria(std::string const & type);
};


#endif
