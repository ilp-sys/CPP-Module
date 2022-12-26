#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template <class T>
void swap(T& lhs, T& rhs)
{
  T tmp = lhs;
  lhs = rhs;
  rhs = tmp;
}

template <class T>
T min(const T lhs, const T rhs)
{
  return lhs < rhs ? lhs : rhs;
}

template <class T>
T max(const T lhs, const T rhs)
{
  return lhs > rhs ? lhs : rhs;
}

#endif 
