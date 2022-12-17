#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  std::cout << "\nNORMAL CASES WITH ANIMALS\n" << std::endl;

  const Animal *meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << j->getType() << std::endl;
  std::cout << i->getType() << std::endl;

  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();

  std::cout << "\nWRONG CASES WITH WRONG ANIMALS\n" << std::endl;

  const WrongAnimal *wrong_meta = new WrongAnimal();
  const WrongAnimal	*wrong_cat = new WrongCat();
   
  std::cout << wrong_cat->getType() << std::endl;
  wrong_meta->makeSound();
  wrong_cat->makeSound();

  return (0);
}
