/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeMachine.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:11:27 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/24 15:42:46 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChangeMachine.hpp"
#include <fstream>
#include <string>

ChangeMachine::ChangeMachine(std::string before, std::string after) : mBefore(before), mAfter(after)
{
}

ChangeMachine::~ChangeMachine()
{
}

std::string	ChangeMachine::ProcessString(std::string& base)
{
	std::string::size_type	found = base.find(mBefore);
	while (found != std::basic_string::npos)
	{

	}

}

void ChangeMachine::ConvertFile(char *fileName, std::string &line)
{
	std::ifstream fin(fileName);
	std::string str;
	std::getline(fin, str);
}
