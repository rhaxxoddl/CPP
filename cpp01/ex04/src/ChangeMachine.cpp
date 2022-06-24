/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeMachine.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:11:27 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/24 16:53:26 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChangeMachine.hpp"
#include <fstream>
#include <string>
#include <iostream>

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
		found = base.find(mBefore);
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
	for (std::string str; std::getline(fin, str);)
	{
		ProcessString(str);
		fout << str << std::endl;
	}
	fin.close();
	fout.close();
}
