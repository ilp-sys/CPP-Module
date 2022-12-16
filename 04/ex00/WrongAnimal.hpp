#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
  protected:
    std::string _type;
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal&);
    WrongAnimal& operator=(const WrongAnimal&);
    ~WrongAnimal();

    std::string getType() const;
    void makeSound() const;
};

#endif
