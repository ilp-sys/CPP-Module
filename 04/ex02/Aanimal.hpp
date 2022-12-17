#ifndef __AANIMAL_HPP__
#define __AANIMAL_HPP__

#include <iostream>

class Aanimal
{
  protected:
    std::string _type;
  public:
    Aanimal();
    Aanimal(const Aanimal&);
    Aanimal& operator=(const Aanimal&);
    virtual ~Aanimal();

    std::string getType() const;
    virtual void makeSound() const=0;
};

#endif
