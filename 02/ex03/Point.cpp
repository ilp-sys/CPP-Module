#include "Point.hpp"
Point::Point():_x(0), _y(0){}


Point::Point(Point& other)
{
  _x = other.getX();
  _y = other.getY();
}

Point::Point(const float x, const float y): _x(Fixed(x)), _y(Fixed(y)){}

Point& Point::operator=(const Point& other)
{
  if (this != &other)
  {
    _x = other.getX();
    _y = other.getY();
  }
  return (*this);
}

Point::~Point(){}

Fixed Point::getX() { return (_x); }
Fixed Point::getY() { return (_y); }

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
}
