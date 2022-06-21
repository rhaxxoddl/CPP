/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:52:51 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/21 22:24:53 by sanjeon          ###   ########.fr       */
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

Account::Account(int initial_deposit) // 객체가 처음 생성되면 변수는 0으로 초기화 되어 있는가?
{									// 아니라면 객체 생성할 때 모두 초기화해야 함. && static 변수도 초기화 해야 하는지?
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account(void)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
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

void	Account::makeDeposit( int deposit ) // 입금
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

bool	Account::makeWithdrawal( int withdrawal ) // 인출
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

int		Account::checkAmount( void ) const //총액
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
}