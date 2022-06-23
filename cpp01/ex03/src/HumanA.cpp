/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:43:05 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/23 13:36:24 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : mWeapon(weapon)
{
	mName  = name;
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack() const
{
	std::cout << mName << " attacks with their " << mWeapon.getType() << std::endl;
}