#include "iter.hpp"

int main()
{
  //int iArr[] = {1, 2, 3, 4, 5};
  
  int a = 3;
  addOne(a);
  iterPrint(&a, 1);

//  ::iter(iArr, sizeof(iArr) / sizeof(int), addOne);
//  ::iterPrint(iArr, sizeof(iArr) / sizeof(int));
//
//  ::iter(iArr, sizeof(iArr) / sizeof(int), subOne);
//  ::iterPrint(iArr, sizeof(iArr) / sizeof(int));
//
//  double dArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
//
//  ::iter(dArr, sizeof(dArr) / sizeof(double), addOne);
//  ::iterPrint(dArr, sizeof(dArr) / sizeof(double));
//
//  ::iter(dArr, sizeof(dArr) / sizeof(double), subOne);
//  ::iterPrint(dArr, sizeof(dArr) / sizeof(double));
//
  return (0);
}
