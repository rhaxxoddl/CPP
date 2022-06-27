/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeMachine.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:11:27 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/27 12:25:11 by sanjeon          ###   ########.fr       */
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
	if (fin.seekg(std::ios::end).fail())
	{
		fin.close();
		fout.close();
		std::cerr << "[ERROR]Failed to seekg()." << std::endl;
		exit(1);
	}
	int	size = fin.tellg();
	if (fin.fail())
	{
		fin.close();
		fout.close();
		std::cerr << "[ERROR]Failed to tellg()." << std::endl;
		exit(1);
	}
	if (fin.seekg(std::ios::beg).fail())
	{
		fin.close();
		fout.close();
		std::cerr << "[ERROR]Failed to seekg()." << std::endl;
		exit(1);
	}
	allString.resize(size);
	fin.read(&allString[0], size);
	ProcessString(allString);
	fout << allString;
	fin.close();
	fout.close();
}
