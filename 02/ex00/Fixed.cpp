#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed() : _fNum(0) { std::cout << "Default constructor called" << std::endl;  }

Fixed::Fixed(const Fixed& fixed)
{
  std::cout << "Copy constructor called" << std::endl;
  _fNum = fixed.getRawBits();
}

Fixed& Fixed::operator=(Fixed& other)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _fNum = other.getRawBits();
  return (*this);
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits memeber function called" << std::endl;
  return (_fNum);
}

void Fixed::setRawBits(int const raw) { _fNum = raw; }

