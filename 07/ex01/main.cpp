#include "iter.hpp"


int main()
{
  int iArr[] = {1, 2, 3, 4, 5};
  
  ::iter(iArr, 5, addOne<int>);
  ::iterPrint(iArr, 5);

  double dArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  ::iter(dArr, 5, addOne<double>);
  ::iterPrint(dArr, 5);

  std::string sArr[] = {"apple", "banana", "grape"};
  ::iter(sArr, 3, addOne<std::string>);
  ::iterPrint(sArr, 3);

  return (0);
}
