#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
    int               number;
    static const int  fbits;
  public:
    Fixed();
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
