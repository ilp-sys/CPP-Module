#include "Harl.hpp"

void Harl::_debug(void)
{
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup-burger." << std::endl;
  std::cout << "I really do!" << std::endl;
}

void Harl::_info(void)
{
  std::cout << "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
  std::cout << "You didn't put enough bacon in my burger!" << std::endl;
  std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
  std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable!" << std::endl;
  std::cout << "I want to speak to manager now." << std::endl;
}

void Harl::complain(std::string level)
{
  std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*functions[])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
  for(int i = 0; i < 4; i++) {
    if (levels[i] == level)
      (this->*functions[i])();
  }
}

