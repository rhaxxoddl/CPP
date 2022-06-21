/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:52:51 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/21 20:30:00 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created;" << std::endl;
}

Account::Account(void)
{
	
};
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed;" << std::endl;
}

static int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

static int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

static int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

static int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << ";" << std::endl;
	
}

void	Account::makeDeposit( int deposit ); // 입금
bool	Account::makeWithdrawal( int withdrawal ); // 인출
int		Account::checkAmount( void ) const; //총액
void	Account::displayStatus( void ) const;

static void	Account::_displayTimestamp( void )
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
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_sec << "]" << std::endl;
}