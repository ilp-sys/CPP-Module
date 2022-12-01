#pragma once
#ifndef __PHONEBOOK_H___
#define __PHONEBOOK_H___

#include <iostream>

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
    PhoneBook() { _current_idx = 0; }
    void _add_current_idx();
    void _set_contact(int idx, std::string info[5]);
    int     _get_current_idx();
    Contact _get_contact(int idx);
};

void add_contact(class PhoneBook *book);
void search_contact(class PhoneBook *book);

#endif
