#include "Account.hpp"

// Default constructor
Account::Account() {

}

// Constructor with one integer argument
Account::Account( int initial_deposit ) : _amount(initial_deposit) {
    // Initialize balance with the value of initial_deposit
}

// Destructor
Account::~Account() {
    // Perform any necessary cleanup
}