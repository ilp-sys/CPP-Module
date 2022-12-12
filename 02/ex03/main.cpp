#include "Point.hpp"

int main(void)
{
  Point triA(0, 0);
  Point triB(10, 0);
  Point triC(5, 8);

  Point point(1,0);

  std::cout << "Point (" << point.getX() << ", " << point.getY() << ") is ";

  if (bsp(triA, triB, triC, point))
    std::cout << "inside of the triangle" << std::endl;
  else
    std::cout << "outside of the triangle" << std::endl;
  return (0);
}
