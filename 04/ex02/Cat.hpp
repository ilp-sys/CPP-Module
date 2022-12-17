#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Aanimal.hpp"
#include "Brain.hpp"

class Cat : public Aanimal
{
    Brain *_brain;
  public:
    Cat();
    Cat(const Cat&);
    Cat& operator=(const Cat&);
    ~Cat();

    virtual void makeSound() const;
    void addIdeas(const std::string);
    void printAllIdeas(void);
};
    
#endif
