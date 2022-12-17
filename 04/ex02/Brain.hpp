#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain
{
    unsigned int	_idx;
    std::string	  _ideas[100];
  public:
    Brain();
    Brain(const Brain&);
    Brain& operator=(const Brain&);
    ~Brain();

    void addIdeas(const std::string);
    void printAllIdeas(void);
};

#endif
