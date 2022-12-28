#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>

template <typename T>
typename T::iterator easyfind(T& container, const int target)
{
  typename T::iterator itr = container.begin();
  for (; itr != container.end(); itr++)
  {
      if (*itr == target)
        break;
  }
  return  itr;
}

#endif
