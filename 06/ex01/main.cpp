#include <iostream>
#include <sys/_types/_uintptr_t.h>

struct Data
{
    int _idx;
    std::string _data;
};

uintptr_t serialize(Data* ptr)
{
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
  return reinterpret_cast<Data*>(raw);
}

int main()
{
  Data *origin = new Data();
  std::cout << "Address of origin: " << origin << std::endl;
  
  uintptr_t serialized = serialize(origin);
  std::cout << "Serialized to uintptr_t: " << serialized << std::endl;

  Data *deserialized = deserialize(serialized);
  std::cout << "Deserialized uintptr_t: " << deserialized << std::endl;

  delete origin;
}
