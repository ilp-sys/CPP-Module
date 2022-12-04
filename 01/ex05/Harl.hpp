#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

class Harl
{
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
  public:
    void complain(std::string level);
};

#endif
