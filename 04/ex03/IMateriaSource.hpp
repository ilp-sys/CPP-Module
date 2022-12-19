#ifndef __IMATERAISOURCE_HPP__
#define __IMATERAISOURCE_HPP__

#include "AMateria.hpp"

class IMateriaSource
{
  public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
