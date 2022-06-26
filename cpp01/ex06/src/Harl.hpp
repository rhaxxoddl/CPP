/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:05:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/26 20:05:11 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

#define	NUM_OF_LEVEL	4

class Harl
{
private:
	std::string	mDebug;
	std::string	mInfo;
	std::string	mWarning;
	std::string	mError;
	int			mMinimumLevel;
	std::string	aCmd[4];
	void	debug();
	void	info();
	void	warning();
	void	error();
	void	besides();
	int		searchLevel(std::string level);
public:
	void	(Harl::*aFunctionArray[5])();
	Harl();
	Harl(std::string minimumLevel);
	void	complain();
	~Harl();
};

#endif