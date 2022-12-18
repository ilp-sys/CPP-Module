#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal
{
  protected:
    std::string _type;
  public:
    Animal();
    Animal(const Animal&);
    Animal& operator=(const Animal&);
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound() const;
};

#endif
