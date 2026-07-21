#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int init_value)
{
	this->_amount += init_value;
	this->_accountIndex = _nbAccounts;
	_totalAmount += init_value;
	_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";closed";
	_nbAccounts--;
}

Account::Account(void) {}

void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

// int	Account::checkAmount(void) const
// {
	
// }

// void	Account::displayStatus(void) const
// {

// }

//<ctime>
// YYYYMMDD_HHMMSS
// functions time(), localtime(), strftime()

void	Account::_displayTimestamp()
{
	std::time_t	time = std::time(0);
	std::tm		*now = std::localtime(&time);

	char	buffer[42];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", now);
	std::cout << buffer;
}

int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

// static void	displayAccountsInfos( void );

int	Account::_nbAccounts;
int	Account::_totalAmount;
int Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;
