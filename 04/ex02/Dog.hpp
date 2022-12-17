#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal
{
    Brain *_brain;
  public:
    Dog();
    Dog(const Dog&);
    Dog& operator=(const Dog&);
    ~Dog();

    virtual void makeSound() const;
    void addIdeas(const std::string);
    void printAllIdeas(void);
}; 

#endif
