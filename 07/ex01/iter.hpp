#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template <typename T>
void addOne(T& op)
{
  ++op;
}

template <class T>
void subOne(T& op)
{
  --op;
}

template <class T, class U>
void iter(const T* arr, const std::size_t size, const U f)
{
  for (std::size_t i = 0; i < size; ++i)
      f(arr[i]);
}

template <class T>
void iterPrint(const T*arr, const std::size_t size)
{
  for (std::size_t i = 0; i < size; ++i)
    std::cout << arr[i] << std::endl;
}

#endif

