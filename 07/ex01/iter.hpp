#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template <class T>
void addOne(T& num)
{
  ++num;
}

template <>
void addOne(std::string&)
{
  std::cerr << "can not calculate arithmatic operation to string" << std::endl;
}

template <class T, class U>
void iter(T* arr, const size_t size, const U f)
{
  for (std::size_t i = 0; i < size; ++i)
      f(arr[i]);
}

template <class T>
void iterPrint(const T*arr, const std::size_t size)
{
  for (std::size_t i = 0; i < size; ++i)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}

#endif

