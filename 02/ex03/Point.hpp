#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point
{
    const Fixed _x;
    const Fixed _y;
    Point& operator=(const Point&);
  public:
    Point();
    Point(const Point&);
    Point(const float, const float);
    ~Point();

    Fixed getY() const;
    Fixed getX() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
bool operator==(const Point& lhs, const Point& rhs);

#endif
