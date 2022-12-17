#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  //test for default constructor
  Dog dogA;
  dogA.addIdeas("I don't want to set the world on fire");

  //test for assignment operator
  Dog dogB;
  dogB = dogA;
  dogB.addIdeas("All animals are equal");
  dogB.printAllIdeas();

  //test for copy constructor
  Dog dogC(dogB);
  dogC.addIdeas("I will work harder");
  dogC.printAllIdeas();

  //test being required from subject
  std::cout << "\n\nMAIN TEST\n\n" << std::endl;

  Animal *animals[10];

  std::cout << "< creating five dogs and five cats >\n" << std::endl;
  for (int i = 0; i < 5; i++)
      animals[i] = new Dog();
  for (int i = 5; i < 10; i++)
      animals[i] = new Cat();


  std::cout << "\n< delete animals >\n" << std::endl;

  for (int i = 0; i < 5; i++)
      delete animals[i];
  for (int i = 5; i < 10; i++)
      delete animals[i];

  system("leaks Fire");
  return (0);
}
