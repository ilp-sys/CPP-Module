#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() { return (_nbAccounts); }
int Account::getTotalAmount() { return (_totalAmount); }
int Account::getNbDeposits() { return (_totalNbDeposits); }
int Account::getNbWithdrawals() { return (_totalNbWithdrawals); }

void Account::displayAccountsInfos(void)
{
  Account::_displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";";
  std::cout << "total:" << getTotalAmount() << ";";
  std::cout << "deposits:" << getNbDeposits() << ";";
  std::cout << "withdrawals:" << getNbWithdrawals() << std::endl; 
}

Account::Account(int initial_deposit)
{
  Account::_displayTimestamp();
  _accountIndex = _nbAccounts++;
  _amount = initial_deposit;
  _totalAmount += initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "created" << std::endl;
}

Account::~Account(void)
{
  Account::_displayTimestamp();
  --_nbAccounts;
  _totalAmount -= _amount;
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "p_amount:" << _amount << ";";
  std::cout << "deposit:" << deposit << ";";
  _amount += deposit; _totalAmount += deposit;
  ++_nbDeposits; ++_totalNbDeposits;
  std::cout << "amount:" << _amount << ";";
  std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "p_amount:" << _amount << ";";
  std::cout << "withdrawal:";
  if (checkAmount() >= withdrawal)
  {
    std::cout << withdrawal << ";";
    _amount -= withdrawal; _totalAmount -= withdrawal;
    ++_nbWithdrawals; ++_totalNbWithdrawals;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
    return (true);
  }
  else
  {
    std::cout << "refused" << std::endl;
    return (false);
  }
}

int Account::checkAmount(void) const { return (_amount); }

void Account::displayStatus(void) const 
{ 
  Account::_displayTimestamp();
  std::cout << "index:" << _accountIndex << ";";
  std::cout << "amount:" << _amount << ";";
  std::cout << "deposit:" << _nbDeposits << ";";
  std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

//TODO: print timestamp
void Account::_displayTimestamp(void)
{
  std::tm tm;
  std::mktime(&tm);
  //std::time_t time = std::mktime(&tm);
  //std::cout << "[" << tm.tm_year << tm.tm_mon << tm.tm_mday << "-" << tm.tm_hour << tm.tm_min << tm.tm_sec << "] ";
}
