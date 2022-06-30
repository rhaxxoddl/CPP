/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:15:26 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/30 20:32:54 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Constructor(void) called" << std::endl;
	setName("unknown");
	setHitPoints(MAX_HP);
	setEnergyPoints(MAX_EP);
	setAttackDamage(DEFAULT_AD);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor(string) called" << std::endl;
	setHitPoints(MAX_HP);
	setEnergyPoints(MAX_EP);
	setAttackDamage(DEFAULT_AD);
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap Constructor(FragTrap) called" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		if (amount + getHitPoints() > MAX_HP)
			setHitPoints(MAX_HP);
		else
			setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void FragTrap::highFivesGuys(){std::cout << "FragTrap is now in Gate keeper mode" << std::endl;}

FragTrap & FragTrap::operator=(FragTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

FragTrap::~FragTrap(){std::cout << "FragTrap Destructor called" << std::endl;}