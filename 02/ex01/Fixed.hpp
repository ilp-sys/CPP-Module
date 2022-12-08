#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
    int               _fnums;
    static const int  _fbits;
  public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(Fixed &other);
    ~Fixed();

    Fixed&          operator=(const Fixed&);
    std::ofstream&  operator<<(std::ofstream& os, const Fixed obj);

    int             getRawBits(void) const;
    void            setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

#endif
