#include <iostream>
#include <sstream>

char convertChar(std::string str)
{
  std::stringstream container(str);
  char x;
  container >> x;
  return (x);
}

int convertInt(std::string str)
{
  std::stringstream container(str);
  int x;
  container >> x;
  return (x);
}

float convertFloat(std::string str)
{
  std::stringstream container(str);
  float x;
  container >> x;
  return (x);
}

double convertDouble(std::string str)
{
  std::stringstream container(str);
  double x;
  container >> x;
  return (x);
}

int main(int argc, char *argv[])
{
  if (argc == 2)
  {
    std::cout << "char: " << convertChar(argv[1]) << std::endl;
    std::cout << "int: " << convertInt(argv[1]) << std::endl;
    std::cout << "float: " << convertFloat(argv[1]) << std::endl;
    std::cout << "double: " << convertDouble(argv[1]) << std::endl;
  }
  else
    std::cerr << "Usage) ./converter [literal string to convert]" << std::endl;
  return (0);
}
