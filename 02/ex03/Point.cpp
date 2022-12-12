#include "Point.hpp"
Point::Point():_x(0), _y(0){}


Point::Point(const Point& other) : _x(other.getX()), _y(other.getY()){}

Point::Point(const float x, const float y): _x(Fixed(x)), _y(Fixed(y)){}

Point& Point::operator=(const Point&) { return (*this); }

Point::~Point(){}

Fixed Point::getX() const { return (_x); }
Fixed Point::getY() const { return (_y); }

static Fixed calcTriArea(const Point& a, const Point& b, const Point& c)
{
  Fixed tmp1 = a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY();
  Fixed tmp2 = b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY();
  return ((tmp1 + tmp2) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
  Fixed areaA = calcTriArea(a, b, point);
  Fixed areaB = calcTriArea(b, c, point);
  Fixed areaC = calcTriArea(c, a, point);

  return ((areaA + areaB + areaC) <= calcTriArea(a, b, c));
}
