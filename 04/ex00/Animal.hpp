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
    ~Animal();

    std::string getType() const;
    void makeSound();
};

#endif
