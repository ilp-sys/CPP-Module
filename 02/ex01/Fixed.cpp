#include "Fixed.hpp"

Fixed::Fixed() : _fnums(0) { std::cout << "Default constructor called" << std::endl; }

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

std::ofstream& Fixed::operator<<(std::ofstream& os, const Fixed obj)
{
  return (os);
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (_fnums);
}

void Fixed::setRawBits(int const raw) { _fnums = raw; }
