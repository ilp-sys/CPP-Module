#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain
{
    std::string _ideas[100];
  public:
    Brain();
    Brain(const Brain&);
    Brain& operator=(const Brain&);
    ~Brain();
};

#endif
