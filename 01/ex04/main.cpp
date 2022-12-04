#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
  if (argc == 4)
  {
    std::ifstream file;
    std::ofstream file_replace;

    file.open(argv[1]);
    file_replace.open(std::string(argv[1]) + ".replace");

    std::string line;
    while (std::getline(file, line))
    {
        size_t found = 0;
        while ((found = line.find(argv[2], found)) != std::string::npos)
        {
            line.erase(found, strlen(argv[2]));
            line.insert(found, std::string(argv[3]));
            found += strlen(argv[3]);
        }
        file_replace << line << std::endl;
    }

    file.close();
    file_replace.close();
  }
  else
  {
    std::cout << "Usage) [./a.out [filename] [s1] [s1]" << std::endl;
  }
  return (0);
}
