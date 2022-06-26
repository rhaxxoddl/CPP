/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:17:12 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/26 20:05:58 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	aCmd[0] = "DEBUG";
	aCmd[1] = "INFO";
	aCmd[2] = "WARNING";
	aCmd[3] = "ERROR";
	aFunctionArray[0] = &Harl::debug;
	aFunctionArray[1] = &Harl::info;
	aFunctionArray[2] = &Harl::warning;
	aFunctionArray[3] = &Harl::error;
	aFunctionArray[4] = &Harl::besides;
}

Harl::Harl(std::string minimumLevel)
{
	aCmd[0] = "DEBUG";
	aCmd[1] = "INFO";
	aCmd[2] = "WARNING";
	aCmd[3] = "ERROR";
	aFunctionArray[0] = &Harl::debug;
	aFunctionArray[1] = &Harl::info;
	aFunctionArray[2] = &Harl::warning;
	aFunctionArray[3] = &Harl::error;
	aFunctionArray[4] = &Harl::besides;
	mMinimumLevel = searchLevel(minimumLevel);
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\nI love having extra bacon"
	<< " for my 7XL-double-cheese-triple-pickle-specialketchup"
	<< " burger.\n I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\n"
	<< "You didn’t put enough bacon in my burger!\n"
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n"
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\nThis is unacceptable!\nI want to speak to the manager now." << std::endl;
}

void	Harl::besides()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int	Harl::searchLevel(std::string level)
{
	for (int i = 0; i < (int)level.length(); i++)
		level.at(i) = toupper(level.at(i));
	int	i = 0;
	while (i < NUM_OF_LEVEL && level.compare(aCmd[i]))
		i++;
	if (i < NUM_OF_LEVEL)
		return (i);
	else
		return (-1);
}

void	Harl::complain()
{
	if (mMinimumLevel == -1)
		(this->*aFunctionArray[NUM_OF_LEVEL])();
	else
		for (int i = mMinimumLevel; i < NUM_OF_LEVEL; i++)
			(this->*aFunctionArray[i])();
}
