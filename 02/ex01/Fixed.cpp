#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedN(0) { std::cout << "Default constructor called" << std::endl;  }

Fixed::Fixed(const int iNum)
{
  std::cout << "Int constructor called" << std::endl;
  _fixedN = iNum << _fBits;
}

Fixed::Fixed(const float fixedN)
{
  std::cout << "Float constructor called" << std::endl;
  _fixedN = roundf(fixedN * pow(2, _fBits));
}

Fixed::Fixed(const Fixed& fixed)
{
  std::cout << "Copy constructor called" << std::endl;
  _fixedN = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other)
    _fixedN = other.getRawBits();
  return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
  os << fixed.toFloat();
  return (os);
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

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
