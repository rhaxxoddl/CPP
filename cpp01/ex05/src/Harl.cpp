/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:17:12 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/26 17:48:32 by sanjeon          ###   ########.fr       */
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
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon"
	<< " for my 7XL-double-cheese-triple-pickle-specialketchup"
	<< " burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< " You didn’t put enough bacon in my burger!"
	<< " If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< " I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < (int)level.length(); i++)
		level.at(i) = toupper(level.at(i));
	int	i = 0;
	while (i < NUM_OF_CMD && level.compare(aCmd[i]))
		i++;
	if (i < NUM_OF_CMD)
		(this->*aFunctionArray[i])();
}
