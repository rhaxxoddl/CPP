/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:29:41 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/08 21:54:15 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string randomString(void)
{
	srand((unsigned int)time(NULL));
	unsigned int r = rand() % 2;
	std::string str;
	switch (r)
	{
	case 0:
		str = DOGCRY;
		break;
	
	case 1:
		str = CATCRY;
		break;

	default:
		std::cerr << "rand() error" << std::endl;
		break;
	}
	return str;
}

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		mIdeas[i] = randomString();
}

Brain::Brain(Brain& src)
{
	(void)src;
}

Brain& Brain::operator=(Brain &src)
{
	(void)src;
	return *this;
}

Brain::~Brain()
{
	
}
