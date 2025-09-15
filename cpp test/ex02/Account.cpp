#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts),   // give this account an index number
      _amount(initial_deposit),     // save the initial money in the account
      _nbDeposits(0),               // start with 0 deposits
      _nbWithdrawals(0)             // start with 0 withdrawals
{
    _nbAccounts++;                  // increase total accounts count
    _totalAmount += initial_deposit;// add this deposit to the bank total

    _displayTimestamp();            // show time
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

void	makeDeposit( int deposit )
{

}

bool	makeWithdrawal( int withdrawal )
{

}

int		checkAmount( void ) const
{

}

void	displayStatus( void ) const
{

}