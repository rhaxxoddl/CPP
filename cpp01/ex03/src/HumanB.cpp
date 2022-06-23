/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:18:32 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/23 13:36:01 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB(const char* name) : mName(name), mWeapon(NULL)
{
	
}

HumanB::~HumanB()
{
	
}

void	HumanB::attack() const
{
	std::cout << mName << " attacks with their ";
	if (mWeapon != NULL)
		std::cout << mWeapon->getType();
	else
		std::cout << "fist";
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	mWeapon = &weapon;
}
