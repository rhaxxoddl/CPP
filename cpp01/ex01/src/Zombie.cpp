/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/22 21:41:49 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	mName = "unknown";
	// std::cout << "unknown" << " is born!" << std::endl;
}

Zombie::Zombie( std::string name)
{
	mName = name;
	// std::cout << name << " is born!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << mName << " is die!" << std::endl;
}

void	Zombie::Announce( void ) const
{
	std::cout << mName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName() const
{
	return mName;
}

void		Zombie::setName(std::string newName)
{
	mName = newName;
}