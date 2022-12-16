#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  //TODO: delete every allocated meory using destructor

//  Animal **animals;
//
//  animals = new Animal*[10];
  
  Animal *animals[10];

  //TODO: test copy constructor

  for (int i = 0; i < 5; i++)
      animals[i] = new Dog();
  for (int i = 5; i < 10; i++)
      animals[i] = new Cat();

  for (int i = 0; i < 5; i++)
      delete animals[i];
  for (int i = 5; i < 10; i++)
      delete animals[i];

  system("leaks a.out");
  return (0);
}
