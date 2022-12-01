#include "PhoneBook.hpp"

int main()
{
  std::string input;
  PhoneBook   book;

  while (1)
  {
      std::cout << PROMPT;
      std::cin >> input;
      if (input.compare("ADD") == 0)
        add_contact(&book);
      else if (input.compare("SEARCH") == 0)
        search_contact(&book);
      else if (input.compare("EXIT") == 0)
        break ;
  }
  return (0);
}
