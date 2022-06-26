/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:05:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/26 17:31:52 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

#define	NUM_OF_CMD	4

class Harl
{
private:
	std::string	mDebug;
	std::string	mInfo;
	std::string	mWarning;
	std::string	mError;
	std::string	aCmd[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	(Harl::*aFunctionArray[4])(void);
	Harl();
	void	complain(std::string level);
	~Harl();
};

#endif