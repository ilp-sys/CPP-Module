#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
    int	             _fpnv;
    static const int _fbits = 8;
  public:
    Fixed();
    Fixed(const Fixed&);
    Fixed& operator=(Fixed& other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
