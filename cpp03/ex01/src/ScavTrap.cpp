/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:28:10 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/06 19:31:48 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Constructor(void) called" << std::endl;
	setName("unknown");
	setHitPoints(MAX_HP);
	setEnergyPoints(MAX_EP);
	setAttackDamage(DEFAULT_AD);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor(string) called" << std::endl;
	setHitPoints(MAX_HP);
	setEnergyPoints(MAX_EP);
	setAttackDamage(DEFAULT_AD);
}

ScavTrap::ScavTrap(ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap Constructor(ScavTrap) called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks "
		<< target << ", causing " << getAttackDamage()
		<< " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void ScavTrap::guardGate(){std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;}

ScavTrap & ScavTrap::operator=(ScavTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

ScavTrap::~ScavTrap(){std::cout << "ScavTrap Destructor called" << std::endl;}
