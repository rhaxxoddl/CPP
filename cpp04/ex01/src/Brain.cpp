/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:29:41 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/10 19:20:40 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string randomString(void)
{
	srand((unsigned int)time(NULL));
	unsigned int r = rand() % 3;
	std::cout << "r: " << r << std::endl;
	std::string str;
	switch (r)
	{
		case 0:
			str = FIRSTIDEA;
			break;
		
		case 1:
			str = SECONDIDEA;
			break;
		
		case 2:
			str = THIRDIDEA;
			break;

		default:
			std::cerr << "rand() error" << std::endl;
			break;
	}
	return str;
}

Brain::Brain()
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		mIdeas[i] = randomString();
	printIdeas(mIdeas);
}

Brain::Brain(Brain& src)
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		mIdeas[i] = src.mIdeas[i];
}

Brain& Brain::operator=(Brain &src)
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		mIdeas[i] = src.mIdeas[i];
	return *this;
}

void printIdeas(std::string* ideas)
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		std::cout << "ideas["<< i << "] " << ideas[i] << std::endl;
}

void copyIdeas(std::string* dest, const std::string* src)
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		dest[i] = src[i];
}

Brain::~Brain()
{
	
}
