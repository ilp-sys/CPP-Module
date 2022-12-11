#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
    int	             _fixedN;
    static const int _fBits = 8;
  public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed&);
    ~Fixed();

    Fixed&	        operator=(const Fixed& other);

    int	            getRawBits(void) const;
    void	          setRawBits(int const raw);
    float	          toFloat(void) const;
    int             toInt(void) const;
};

std::ostream&	  operator<<(std::ostream& os, const Fixed& fixed);

#endif
