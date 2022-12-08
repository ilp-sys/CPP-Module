#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
    int               _fnums;
    static const int  _fbits;
  public:
    Fixed();
    Fixed(Fixed &other);
    Fixed& operator=(const Fixed&);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
