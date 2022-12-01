#include "PhoneBook.hpp"

int main()
{
  std::string input;
  PhoneBook   book;

  while (true)
  {
      std::cout << PROMPT;
      if (std::getline(std::cin, input).eof())
        exit(EXIT_SUCCESS);
      if (input.compare("ADD") == 0)
        add_contact(&book);
      else if (input.compare("SEARCH") == 0)
        search_contact(&book);
      else if (input.compare("EXIT") == 0)
        break ;
  }
  return (EXIT_SUCCESS);
}
