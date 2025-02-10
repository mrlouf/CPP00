#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

// Default constructor
Account::Account() {}

// Constructor with one integer argument to initialise _amount
Account::Account( int initial_deposit ) : _amount(initial_deposit) {

}

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

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	getNbDeposits( void ) {
	return getNbDeposits();
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

    _totalAmount += initial_deposit;

}

void Account::makeDeposit(int deposit) {

    if (deposit > 0) {

        _amount += deposit;

        _nbDeposits++;

        _totalAmount += deposit;

        _totalNbDeposits++;

    }

}

bool Account::makeWithdrawal(int withdrawal) {

    if (withdrawal > 0 && _amount >= withdrawal) {

        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;

        return true;
    }

    return false;
	
}

int Account::checkAmount(void) const {

    return _amount;

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

	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalAmount << ";";
	std::cout << "withdrawals:" << _totalAmount << std::endl;

}

void	displayStatus( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
}
