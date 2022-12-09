#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fnums(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int fnums) { _fnums = fnums; }

Fixed::Fixed(const float fnums) { _fnums = roundf(fnums); }

Fixed::Fixed(Fixed &other)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _fnums = other.getRawBits();
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }

Fixed& Fixed::operator=(const Fixed& other)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _fnums = other.getRawBits();
  return (*this);
}

std::ostream& Fixed::operator<<(std::ostream& os)
{
  std::cout << _fnums << std::endl;
  return (os);
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (_fnums);
}

void Fixed::setRawBits(int const raw) { _fnums = raw; }

float Fixed::toFloat(void) const
{
  return ();
}

int	Fixed::toInt(void) const
{
  return ();
}
