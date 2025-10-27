#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t timestamp = time(NULL); //time(NULL) gets the current time in seconds since January 1, 1970 (Unix epoch-  It’s just a reference point). //timestamp hold this time as a time_t (struct).
    struct tm *datetime = localtime(&timestamp); // localtime() Converts the seconds since 1970 into human-readable calendar time (year, month, day, hour, min, sec) in your local timezone.. It returns a pointer to a tm structure with fields like tm_year, tm_mon, tm_mday, tm_hour, etc.
    char output[50];
    strftime(output, sizeof(output), "[%Y%m%d_%H%M%S]", datetime);
    std::cout << output;
}
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits: " << _totalNbDeposits << ";";
    std::cout << "withdrawals: " << _totalNbWithdrawals << std::endl;

}
int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}