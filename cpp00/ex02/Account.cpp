/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:53:03 by folim             #+#    #+#             */
/*   Updated: 2024/04/23 12:53:04 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// initialize variable static
int Account::_nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

// getters
int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbDeposits() {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp() {
    std::time_t now = std::time(NULL);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", std::localtime(&now));
    std::cout << "[" << buffer << "] ";
}

int Account::checkAmount() const {
    return _amount;
}

//Following the flow in tests.cpp
// First print: Creation
Account::Account(int initial_deposit){
    _accountIndex = getNbAccounts();
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:";
    std::cout << this->checkAmount() << ";created" <<std::endl;
    _nbAccounts++;
}

// Last print: Closing (Exits main())
Account::~Account(){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:";
    std::cout << checkAmount() << ";closed" << std::endl;
    _nbAccounts--;
}

// Second Print - function is static void but here we don't write static
void Account::displayAccountsInfos(){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:";
    std::cout << getTotalAmount() << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// Third Print
void Account::displayStatus() const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:";
    std::cout << checkAmount() << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// Fourth Print
void Account::makeDeposit(int deposit){
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:";
    std::cout << (_amount - deposit) << ";deposit:" << deposit << ";amount:";
    std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

// Seventh Print
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    if (withdrawal > _amount) {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++; 
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}
