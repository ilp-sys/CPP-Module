#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template <class T>
class Array
{
    std::size_t _size;
    T*	        _arr;
  public:
    Array():_size(0), _arr(NULL) {}
    Array(unsigned int n):_size(n) { _arr = new T[n]; }
    Array(const Array& other): _arr(NULL){ *this = other; }
    ~Array(){ if (_arr != NULL) delete[] _arr; }

    T& operator[](std::size_t idx) const {
      if (idx < 0 || idx >= _size)
        throw std::exception();
      return _arr[idx];
    }
    Array& operator=(const Array& other){
      if (this == &other)
        return *this;
      if (_size != other.size()){
        if (_arr != NULL) delete[] _arr;
        _arr = nullptr;
        _size = 0;
        _arr = new T[other.size()];
        _size = other.size();
      }
      for (std::size_t i = 0; i < _size; ++i)
        _arr[i] = other[i];
      return *this;
    }

    std::size_t size() const { return _size; };
};

#endif
