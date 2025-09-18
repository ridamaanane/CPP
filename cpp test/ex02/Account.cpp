#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _accountIndex = Account::_nbAccounts;
    _nbAccounts++;
	_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t time = std::time(&time);
    struct tm *datetime = localtime(&time);

    char output[50];
    strftime(output, sizeof(output), "[%Y%m%d_%H%M%S] ", datetime);
    std::cout << output;
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}
int	Account::getTotalAmount()
{
    return (_totalAmount);
}
int	Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    _totalAmount += deposit;
    _totalNbDeposits++;
    _amount += deposit;
    _nbDeposits++;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl; 
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    _amount -= withdrawal;
    if (!checkAmount())
    {
        _amount += withdrawal;
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl; 
    }
    return (true);
}

int		Account::checkAmount( void ) const
{
    if (_amount < 0)
        return 0;
    return 1;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;

}