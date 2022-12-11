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

    Fixed&	        operator++();
    Fixed	          operator++(int);
    Fixed&	        operator--();
    Fixed	          operator--(int);

    static Fixed&	  min(Fixed& lhs, Fixed* rhs);
    static Fixed&	  min(const Fixed& lhs, const Fixed* rhs);
    static Fixed&	  max(Fixed& lhs, Fixed* rhs);
    static Fixed&	  max(const Fixed& lhs, const Fixed* rhs);

  };

std::ostream&	  operator<<(std::ostream& os, const Fixed& fixed);

bool	          operator==(const Fixed& lhs, const Fixed& rhs);
bool	          operator!=(const Fixed& lhs, const Fixed& rhs);
bool	          operator<(const Fixed& lhs, const Fixed& rhs);
bool	          operator>(const Fixed& lhs, const Fixed& rhs);
bool	          operator<=(const Fixed& lhs, const Fixed& rhs);
bool	          operator>=(const Fixed& lhs, const Fixed& rhs);

Fixed	          operator+(Fixed lhs, const Fixed& rhs);
Fixed	          operator-(Fixed lhs, const Fixed& rhs);
Fixed	          operator*(Fixed lhs, const Fixed& rhs);
Fixed	          operator/(Fixed lhs, const Fixed& rhs);

#endif
