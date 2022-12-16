#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
    WrongCat();
    WrongCat(const WrongCat&);
    WrongCat& operator=(const WrongCat&);
    ~WrongCat();

    void makeSound() const;
};
    
#endif
