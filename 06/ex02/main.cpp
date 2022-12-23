#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void);
void identify(Base *);
void identify(Base &);

int main()
{
  std::cout << "\n=TEST FOR `void identify(Base* p)`=\n" << std::endl;
  Base *generatedP = generate();
  identify(generatedP);
  
  std::cout << "\n=TEST FOR `void identify(Base& p)`=\n" << std::endl;
  Base &generatedR = *generatedP;
  identify(generatedR);

  delete generatedP;
  return (0);
}

Base * generate(void)
{
  std::srand(std::time(nullptr));
  int random = std::rand() % 3;

  switch (random)
  {
      case 0:
        std::cout << "Derived class A generated" << std::endl;
        return new A();
      case 1:
        std::cout << "Derived class B generated" << std::endl;
        return new B();
      case 2:
        std::cout << "Derived class C generated" << std::endl;
        return new C();
      default:
        std::cout << "Error happened while generating" << std::endl;
        return (NULL);
  }
}

void identify(Base *p)
{
  std::cout << "Base point *p's instance type is ";
  if (A* ap = dynamic_cast<A*>(p))
    std::cout << "A" << std::endl;
  else if (B* bp = dynamic_cast<B*>(p))
    std::cout << "B" << std::endl;
  else if (C* cp = dynamic_cast<C*>(p))
    std::cout << "C" << std::endl;
}

void identify(Base &r)
{
  std::cout << "Base reference &r's instance type is ";
  try
  {
    A& ar = dynamic_cast<A&>(r);
    (void)ar;
    std::cout << "A" << std::endl;
  }
  catch(std::bad_cast expt)
  {
    try
    {
      B& br = dynamic_cast<B&>(r);
      (void)br;
      std::cout << "B" << std::endl;
    }
    catch (std::bad_cast expt)
    {
      std::cout << "C" << std::endl;
    }
  }
}
