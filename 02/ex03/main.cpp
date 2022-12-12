#include "Point.hpp"

static void printPoint(Point &point)
{
  std::cout << "(" << point.getX() << ", " << point.getY() << ")";
}

int main(void)
{
  Point triA(0, 0);
  Point triB(10, 0);
  Point triC(5, 8);

  Point point(0, 0);

  std::cout << "Point "; printPoint(point); std::cout << " is ";

  if (bsp(triA, triB, triC, point))
    std::cout << "inside of the triangle ";
  else
    std::cout << "outside of the triangle ";
  printPoint(triA); std::cout << " " ;

  printPoint(triB); std::cout << " " ;
  printPoint(triC); std::cout << std::endl; 

  return (0);
}
