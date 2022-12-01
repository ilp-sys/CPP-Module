#include "PhoneBook.hpp"
#include <iomanip>

void Contact::_set_first_name(std::string first_name) { _firstname = first_name; }

void Contact::_set_last_name(std::string last_name) { _lastname = last_name; }

void Contact::_set_nickname(std::string nick_name) { _nickname = nick_name; }

void Contact::_set_phone_num(std::string phone_num) { _phone_num = phone_num; }

void Contact::_set_darkest_secret(std::string nick_name) { _darkest_secret = nick_name; }

std::string Contact::_get_first_name() { return (_firstname); }

std::string Contact::_get_last_name() { return (_lastname); }

std::string Contact::_get_nickname() { return (_nickname); }

std::string Contact::_get_phone_num() { return (_phone_num); }

std::string Contact::_get_darkest_secret() { return (_darkest_secret); }

void PhoneBook::_add_current_idx() { _current_idx = (_current_idx + 1) % CONTACT_NUM; }

void PhoneBook::_set_contact(int idx, std::string info[5])
{
  _contacts[idx]._set_first_name(info[0]);
  _contacts[idx]._set_last_name(info[1]);
  _contacts[idx]._set_nickname(info[2]);
  _contacts[idx]._set_phone_num(info[3]);
  _contacts[idx]._set_darkest_secret(info[4]);
}

int PhoneBook::_get_current_idx() { return (_current_idx); }

Contact PhoneBook::_get_contact(int idx) { return (_contacts[idx]); }

void add_contact(class PhoneBook *book)
{
  std::string info[5];

  while (true)
  {
      std::cout << PROMPT << "first name: ";
      if (std::getline(std::cin, info[0]).eof())
        exit(EXIT_SUCCESS);
      if (info[0].empty())
      {
        std::cout << "A field can not be empty, try again" << std::endl;
        continue;
      }

      std::cout << PROMPT << "last name: ";
      if (std::getline(std::cin, info[1]).eof())
        exit(EXIT_SUCCESS);
      if (info[1].empty())
      {
        std::cout << "A field can not be empty, try again" << std::endl;
        continue;
      }

      std::cout << PROMPT << "nickname :";
      if (std::getline(std::cin, info[2]).eof())
        exit(EXIT_SUCCESS);
      if (info[2].empty())
      {
        std::cout << "A field can not be empty, try again" << std::endl;
        continue;
      }

      std::cout << PROMPT << "phone num: ";
      if (std::getline(std::cin, info[3]).eof())
        exit(EXIT_SUCCESS);
      if (info[3].empty())
      {
        std::cout << "A field can not be empty, try again" << std::endl;
        continue;
      }

      std::cout << PROMPT << "darkest secret: ";
      if (std::getline(std::cin, info[4]).eof())
        exit(EXIT_SUCCESS);
      if (info[4].empty())
      {
        std::cout << "A field can not be empty, try again" << std::endl;
        continue;
      }
      break ;
  }

  book->_set_contact(book->_get_current_idx(), info);
  book->_add_current_idx();
}

static std::string disp_trim(std::string str)
{
  if (str.size() > WIDTH_SET)
  {
    return (str.substr(0, 9) + '.');
  }
  else
    return (str);
}

void search_contact(class PhoneBook *book)
{
  int idx;

  for (int i = 0; i < CONTACT_NUM; i++)
  {
      Contact con = book->_get_contact(i);
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << i + 1;
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << disp_trim(con._get_first_name());
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << disp_trim(con._get_last_name());
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << disp_trim(con._get_nickname());
      std::cout << "|" << std::endl;
  }

  //display requested column
  std::cout << "idx: ";
  std::cin >> idx;

  if (!(idx > 0 && idx <= CONTACT_NUM))
  {
    std::cout << "Index out of range" << std::endl;
    std::cin.clear();
  }
  else
  {
    std::cout << book->_get_contact(idx - 1)._get_first_name() << std::endl;
    std::cout << book->_get_contact(idx - 1)._get_last_name() << std::endl;
    std::cout << book->_get_contact(idx - 1)._get_nickname() << std::endl;
    std::cout << book->_get_contact(idx - 1)._get_phone_num() << std::endl;
    std::cout << book->_get_contact(idx - 1)._get_darkest_secret() << std::endl;
  }
}
