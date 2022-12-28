#include <algorithm>
#include <iterator>
#include <list>
#include "easyfind.hpp"

int main()
{
  std::list<int> l;

  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_back(4);
  l.push_back(5);

  std::list<int>::iterator it = std::find(l.begin(), l.end(), 3);
  std::cout << "found " << *it << std::endl;
  std::list<int>::iterator it2 = easyfind(l, 3);
  std::cout << "found " << *it2 << std::endl;

  std::list<int>::iterator it3 = std::find(l.begin(), l.end(), 99);
  if (it3 == l.end())
    std::cout << "99 not found" << std::endl;
  std::list<int>::iterator it4 = easyfind(l, 99);
  if (it4 == l.end())
    std::cout << "99 not found" << std::endl;
  
  return (0);
}
