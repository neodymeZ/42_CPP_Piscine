// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include <iostream>
#include <ctime>
#include "Account.class.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
    return;
}

Account::Account( int initial_deposit ) : _accountIndex( Account::_nbAccounts ),
                                        _amount( initial_deposit ),
                                        _nbDeposits( 0 ),
                                        _nbWithdrawals( 0 ) {
    Account::_nbAccounts++;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";created" << std::endl;
    Account::_totalAmount += initial_deposit;
    return;
}

Account::~Account( void ) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    Account::_totalNbDeposits -= this->_nbDeposits;
    Account::_totalNbWithdrawals -= this->_nbWithdrawals;
    return;
}

void Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << this->_amount;
    this->_nbDeposits++;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    return;
}

bool Account::makeWithdrawal( int withdrawal ) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";withdrawal:";
    if ( withdrawal > this->_amount ) {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    std::cout << withdrawal;
    std::cout << ";amount:" << this->_amount;
    this->_nbWithdrawals++;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    return true;
}

int Account::checkAmount( void ) const {
    if (this->_amount >= 0)
        return 1;
    return 0;
}

void Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return;
}

void Account::_displayTimestamp( void ) {
    // Get time in ms since epoch and then convert to current time using
    // std::localtime function.
    std::time_t t = std::time( 0 );
    std::tm* now = std::localtime( &t );
    std::cout << "[" << now->tm_year + 1900;
    if ( now->tm_mon < 9 ) {
        std::cout << "0";
    }
    std::cout << now->tm_mon + 1 ;
    if ( now->tm_mday < 10 ) {
        std::cout << "0";
    }
    std::cout << now->tm_mday << "_";
    if ( now->tm_hour < 10 ) {
        std::cout << "0";
    }
    std::cout << now->tm_hour;
    if ( now->tm_min < 10 ) {
        std::cout << "0";
    }
    std::cout << now->tm_min;
    if ( now->tm_sec < 10 ) {
        std::cout << "0";
    }
    std::cout << now->tm_sec << "]";
    return;
}

Account::Account( void ) {
    return;
}
