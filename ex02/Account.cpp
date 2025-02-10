#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// Default constructor
Account::Account() {}

// Constructor with one integer argument to initialise _amount
Account::Account( int initial_deposit ) : _amount(initial_deposit) {}

// Destructor
Account::~Account() {}

int Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	getNbAccounts( void ) {
	return getNbAccounts();
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	getTotalAmount( void ) {
	return getTotalAmount();
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

int	getNbWithdrawals( void ) {
	return getNbWithdrawals();
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	getTotalAmount( void ) {
	return getTotalAmount();
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	getNbDeposits( void ) {
	return getNbDeposits();
}

void Account::_displayTimestamp( void ) {

	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year
			  << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
			  << std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
			  << std::setw(2) << std::setfill('0') << ltm->tm_hour
			  << std::setw(2) << std::setfill('0') << ltm->tm_min
			  << std::setw(2) << std::setfill('0') << ltm->tm_sec
			  << "] ";

}

void Account::displayAccountsInfos() {

}