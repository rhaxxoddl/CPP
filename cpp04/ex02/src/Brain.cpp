/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:29:41 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/12 19:41:37 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void GenerateIdeas(std::string* aSrting)
{
	unsigned int r = rand() % 3;
	for (int i = 0; i < IDEAS_SIZE; i++)
	{
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
		aSrting[i] = str;
	}
}

void printIdeas(std::string* ideas)
{
	std::cout << "[ideas] " << ideas[0] << std::endl;
}

Brain::Brain()
{
	std::cout << "Brain Constructor(void) called" << std::endl;
	GenerateIdeas(mIdeas);
	printIdeas(mIdeas);
}

Brain::Brain(const Brain& src)
{
	std::cout << "Brain Constructor(Brain&) called" << std::endl;
	for (int i = 0; i < IDEAS_SIZE; i++)
		mIdeas[i] = src.mIdeas[i];
}

Brain& Brain::operator=(const Brain &src)
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		mIdeas[i] = src.mIdeas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
