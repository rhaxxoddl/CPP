/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:52:51 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/22 13:51:55 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account(void)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created;" << std::endl;
};
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
	
}

void	Account::makeDeposit( int deposit )
{
	if (deposit > 0)
	{
		int	p_amount = _amount;
		_amount += deposit;
		_totalAmount += deposit;
		_nbDeposits++;
		_totalNbDeposits++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "deposit:" << deposit << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	}
	else
		std::cout << "0보다 큰 수만 입금할 수 있습니다." << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > 0)
	{
		int	p_amount = _amount;
		if (_amount >= withdrawal)
		{
			_amount -= withdrawal;
			_totalAmount -= withdrawal;
			_totalNbWithdrawals++;
			_nbWithdrawals++;
			_displayTimestamp();
			std::cout << "index:" << _accountIndex << ";";
			std::cout << "p_amount:" << p_amount << ";";
			std::cout << "withdrawal:" << withdrawal << ";";
			std::cout << "amount:" << _amount << ";";
			std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
			return (true);
		}
		else
		{
			std::cout << "index:" << _accountIndex << ";";
			std::cout << "p_amount:" << p_amount << ";";
			std::cout << "withdrawal:refused" << std::endl;
		}
	}
	else
		std::cout << "0보다 큰 수만 인출할 수 있습니다." << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	t;
	tm	*timeInfo;

	time(&t);
	timeInfo = localtime(&t);
	std::cout << "[" << timeInfo->tm_year + 1900
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_mon + 1
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_hour
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_min
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_sec << "]";
	// std::cout << "[19920104_091532] ";
}