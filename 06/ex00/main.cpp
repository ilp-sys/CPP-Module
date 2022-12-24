#include <iostream>
#include <sstream>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iomanip>

void printConvChar(double d)
{
  std::cout << "char: ";
  if (d > CHAR_MAX || d < CHAR_MIN)
  { 
    std::cout << "impossible" << std::endl;
    return ;
  }
  char casted = static_cast<char>(d);
  if (!isprint(casted))
  {
    std::cout << "Non displayable" << std::endl;
    return ;
  }
  std::cout << casted << std::endl;
}

void printConvInt(double d)
{
  std::cout << "int: ";
  if (isnan(d) || d > INT_MAX || d < INT_MIN)
  { 
    std::cout << "impossible" << std::endl;
    return ;
  }
  int casted = static_cast<int>(d);
  std::cout << casted << std::endl;
}

void printConvFloat(double d)
{
  std::cout << "float: ";
  std::cout << std::fixed;
  float casted = static_cast<float>(d);
  std::cout << casted  << "f" << std::endl;
}

void printConvDouble(double d)
{
  std::cout << "double: ";
  double casted = d;
  std::cout << casted << std::endl;
}

int main(int argc, char* argv[])
{
  if (argc == 2)
  {
    double origin = strtod(argv[1], NULL);
    printConvChar(origin);
    printConvInt(origin);
    printConvFloat(origin);
    printConvDouble(origin);
  }
  else
    std::cerr << "Usage) ./converter [string_to_convert]" << std::endl;
  return (0);
}
