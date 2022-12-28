#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
  public: 
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    iterator rbegin() { return this->c.rbegin(); }
    iterator rend() { return this->c.rend(); }
};


#endif
