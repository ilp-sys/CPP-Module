#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedN(0) {}

Fixed::Fixed(const int iNum) { _fixedN = iNum << _fBits; }

Fixed::Fixed(const float fixedN) { _fixedN = roundf(fixedN * pow(2, _fBits)); }

Fixed::Fixed(const Fixed& fixed) { _fixedN = fixed.getRawBits(); }

Fixed& Fixed::operator=(const Fixed& other)
{
  if (this != &other)
    _fixedN = other.getRawBits();
  return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
  os << fixed.toFloat();
  return (os);
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const
{
  return (_fixedN);
}

void Fixed::setRawBits(int const raw) { _fixedN = raw; }

float Fixed::toFloat(void) const
{
  return (_fixedN / pow(2, _fBits));
}

int Fixed::toInt(void) const
{
  return (_fixedN >> _fBits);
}

Fixed& Fixed::operator++() //prefix
{
  _fixedN = _fixedN + 1;
  return (*this);
}

Fixed Fixed::operator++(int) //postfix
{
  Fixed old = *this;
  operator++();
  return (old);
}

Fixed& Fixed::operator--() //prefix
{
  _fixedN = _fixedN - 1;
  return (*this);
}

Fixed Fixed::operator--(int) //postfix
{
  Fixed old = *this;
  operator--();
  return (old);
}

bool operator==(const Fixed& lhs, const Fixed& rhs) { return (lhs == rhs); }
bool operator!=(const Fixed& lhs, const Fixed& rhs) { return (lhs != rhs); }
bool operator>(const Fixed& lhs, const Fixed& rhs) { return (rhs > lhs); }
bool operator<(const Fixed& lhs, const Fixed& rhs) { return (rhs < lhs); }
bool operator<=(const Fixed& lhs, const Fixed& rhs) { return !(rhs > lhs); }
bool operator>=(const Fixed& lhs, const Fixed& rhs) { return !(rhs < lhs); }
