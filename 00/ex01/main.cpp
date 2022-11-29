#include <iostream>
#include <string>
#include <iomanip>

#define CONTACT_NUM 8
#define WIDTH_SET 10
#define PROMPT ">>"

class Contact
{
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phone_num;
    std::string _darkest_secret;
  public:
    void _set_first_name(std::string first_name);
    void _set_last_name(std::string last_name);
    void _set_nickname(std::string nickname);
    void _set_phone_num(std::string phone_num);
    void _set_darkest_secret(std::string darkest_secret);
    std::string _get_first_name();
    std::string _get_last_name();
    std::string _get_nickname();
    std::string _get_phone_num();
    std::string _get_darkest_secret();
};

class PhoneBook 
{
    int     _current_idx;
    Contact _contacts[CONTACT_NUM];
  public:
    void _add_current_idx();
    void _set_contact(int idx, std::string info[5]);
    int     _get_current_idx();
    Contact _get_contact(int idx);
};

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
  std::cout << "asdf" << std::endl;
  _contacts[idx]._set_first_name(info[0]);
  _contacts[idx]._set_last_name(info[1]);
  _contacts[idx]._set_nickname(info[2]);
  _contacts[idx]._set_phone_num(info[3]);
  _contacts[idx]._set_darkest_secret(info[4]);
}

int PhoneBook::_get_current_idx() { return (_current_idx); }

Contact PhoneBook::_get_contact(int idx) { return (_contacts[idx]); }

void add_contact(class PhoneBook book)
{
  std::string info[5];

  //TODO: A saved contact can't have empty fields
  std::cout << PROMPT << "first name: ";
  std::cin >> info[0];
  std::cout << PROMPT << "last name: ";
  std::cin >> info[0];
  std::cout << PROMPT << "nickname :";
  std::cin >> info[0];
  std::cout << PROMPT << "phone num: ";
  std::cin >> info[0];
  std::cout << PROMPT << "darkest secret: ";
  std::cin >> info[0];

  book._set_contact(book._get_current_idx(), info);
}

void search_contact(class PhoneBook book)
{
  int idx;

  //display summed table
  //TODO: replace last char of truncated string when string is longer than 
  for (int i = 0; i < CONTACT_NUM; i++)
  {
      Contact con = book._get_contact(i);
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << i + 1;
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << con._get_first_name();
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << con._get_last_name();
      std::cout << "|";
      std::cout << std::setw(WIDTH_SET) << con._get_nickname();
      std::cout << "|" << std::endl;
  }

  //display requested column
  std::cout << "idx: ";
  std::cin >> idx;
  if (!(idx > 0 && idx <= CONTACT_NUM))
  {
    std::cout << "Index out of range" << std::endl;
  }
  else
  {
    //TDOD: dont't print when the field empty
    std::cout << book._get_contact(idx - 1)._get_first_name() << std::endl;
    std::cout << book._get_contact(idx - 1)._get_last_name() << std::endl;
    std::cout << book._get_contact(idx - 1)._get_nickname() << std::endl;
    std::cout << book._get_contact(idx - 1)._get_phone_num() << std::endl;
    std::cout << book._get_contact(idx - 1)._get_darkest_secret() << std::endl;
  }
}

int main(int argc, char *argv[])
{
  std::string input;
  PhoneBook   book;

  while (1)
  {
      std::cout << PROMPT;
      std::cin >> input;
      if (input.compare("ADD") == 0)
        add_contact(book);
      else if (input.compare("SEARCH") == 0)
        search_contact(book);
      else if (input.compare("EXIT") == 0)
        break ;
  }
  return (0);
}
