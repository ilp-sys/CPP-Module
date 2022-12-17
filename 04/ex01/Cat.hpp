#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain *_brain;
  public:
    Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);
    ~Cat();

    void makeSound() const;
    void addIdeas(const std::string);
    void printAllIdeas(void);
};
    
#endif
