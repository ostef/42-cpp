#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ) :
	_accountIndex (_nbAccounts),
	_amount (0),
	_nbDeposits (0),
	_nbWithdrawals (0)
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_nbAccounts += 1;
}

Account::Account( int initial_deposit ) :
	_accountIndex (_nbAccounts),
	_amount (initial_deposit),
	_nbDeposits (0),
	_nbWithdrawals (0)
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp ();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	
	_amount += deposit;
	_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;

	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool accepted = withdrawal <= _amount;

	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	
	if (accepted)
	{
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;

		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
	}

	return accepted;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
#ifdef STATIC_TIMESTAMP
	std::cout << "[19920104_091532] ";
#else
	std::time_t current_time = std::time (NULL);
	std::tm tm = *std::localtime (&current_time);

	std::cout << "[";
	std::cout << std::setw (4) << std::setfill ('0') << 1900 + tm.tm_year;
	std::cout << std::setw (2) << std::setfill ('0') << tm.tm_mon;
	std::cout << std::setw (2) << std::setfill ('0') << tm.tm_mday;
	std::cout << "_";
	std::cout << std::setw (2) << std::setfill ('0') << tm.tm_hour;
	std::cout << std::setw (2) << std::setfill ('0') << tm.tm_min;
	std::cout << std::setw (2) << std::setfill ('0') << tm.tm_sec;
	std::cout << "] ";
#endif
}
