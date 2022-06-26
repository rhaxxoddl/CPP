/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeMachine.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:11:27 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/26 22:05:57 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChangeMachine.hpp"

ChangeMachine::ChangeMachine(std::string before, std::string after) : mBefore(before), mAfter(after)
{
}

ChangeMachine::~ChangeMachine()
{
}

void	ChangeMachine::ProcessString(std::string& base)
{
	std::string::size_type	found = base.find(mBefore);
	while (found != std::string::npos)
	{
		base.erase(found, mBefore.length());
		base.insert(found, mAfter);
		found = base.find(mBefore, found + mAfter.length());
	}
}

void ChangeMachine::ConvertFile(char *fileName)
{
	std::ifstream fin(fileName);
	if (!fin.is_open())
	{
		std::cerr << "[ERROR]Failed to open file." << std::endl;
		exit(1);
	}
	std::string	fout_name(fileName);
	fout_name.append(".replace");
	std::ofstream fout(fout_name);
	if (!fout.is_open())
	{
		fin.close();
		std::cerr << "[ERROR]Failed to open file." << std::endl;
		exit(1);
	}
	std::string	allString;
	fin.seekg(0, std::ios::end);
	int	size = fin.tellg();
	fin.seekg(0, std::ios::beg);
	allString.resize(size);
	fin.read(&allString[0], size);
	ProcessString(allString);
	fout << allString;
	fin.close();
	fout.close();
}
