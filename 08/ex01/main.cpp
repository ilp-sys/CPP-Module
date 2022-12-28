#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
  std::cout << "==== BASIC TEST ====" << std::endl;
  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  
  try
  {
    sp.addNumber(12);
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "==== ADVANCED TEST ====" << std::endl;
  srand(time(NULL));
  Span spBig(10000);
  for (int i = 0; i < 10000; ++i)
  {
    int randnum = rand();
    spBig.addNumber(randnum);
  }
  std::cout << "longest span of spBig: " << spBig.longestSpan() << std::endl;
  std::cout << "shortest span of spBig: " << spBig.shortestSpan() << std::endl;


  std::cout << "==== ITERATOR TEST ====" << std::endl;
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);

  std::vector<int>::iterator it1 = ++v.begin();
  std::vector<int>::iterator it2 = --v.end();
  Span spIter(it1, it2);
  std::cout << "longest span of spIter: " << spIter.longestSpan() << std::endl;
  std::cout << "shortest span of spIter: " << spIter.shortestSpan() << std::endl;

  return (0);
}
