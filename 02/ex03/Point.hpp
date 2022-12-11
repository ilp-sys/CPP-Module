#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point
{
    const Fixed _x;
    const Fixed _y;
  public:
    Point();
    Point(Point&);
    Point(const float, const float);
    Point& operator=(const Point&);
    ~Point();

    Fixed getX();
    Fixed getY();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
