/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:56:56 by ssukhija          #+#    #+#             */
/*   Updated: 2026/02/13 16:56:56 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>


int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    std::cout << "index:\033[34m" << _accountIndex << "\033[0m"
            << ";amount:\033[34m" << _amount << "\033[0m" << ";created\n";
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:\033[34m" << _accountIndex << "\033[0m"
        << ";amount:\033[34m" << _amount << "\033[0m"
        << ";closed"
        << std::endl;
}

int	Account::getNbAccounts()
{
    return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:\033[34m" << _accountIndex << "\033[0m"
            << ";p_amount:\033[34m" << _amount << "\033[0m"
            << ";deposit:\033[34m" << deposit << "\033[0m";
    _amount += deposit;
    _nbDeposits++;
    std::cout << ";amount:\033[34m" << _amount << "\033[0m"
            << ";nb_deposits:\033[34m" << _nbDeposits << "\033[0m"
            << "\n";

    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:\033[34m" << _accountIndex << "\033[0m"
            << ";p_amount:\033[34m" << _amount << "\033[0m"
            << ";withdrawal:\033[34m" << "\033[0m";
    if (_amount < withdrawal)
    {
        std::cout << "refused\n";
        return (false);
    }
    else
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        std::cout << withdrawal << ";amount:\033[34m" << _amount << "\033[0m" 
            << ";nb_withdrawls:\033[34m" << _nbWithdrawals << "\033[0m"
            << "\n"; 
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
    }
    return (true);
}

int		Account::checkAmount(void) const
{
    return (_amount);
}


void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:\033[34m" << _nbAccounts << "\033[0m"
            << ";total:\033[34m" << _totalAmount << "\033[0m"
            << ";deposits:\033[34m" << _totalNbDeposits << "\033[0m"
            << ";withdrawals:\033[34m" << _totalNbWithdrawals << "\033[0m"
            << std::endl;
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:\033[34m" << _accountIndex << "\033[0m"
            << ";amount:\033[34m" << _amount << "\033[0m"
            << ";deposits:\033[34m" << _nbDeposits << "\033[0m"
            << ";withdrawals:\033[34m" << _nbWithdrawals << "\033[0m"
            << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(NULL);
  	std::tm* local_time = std::localtime(&t);

	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);
	std::cout << buffer;
}
