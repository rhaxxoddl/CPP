/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:15:26 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/08 15:07:32 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Constructor(void) called" << std::endl;
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
	mDefaultAttackDamage = DEFAULT_AD;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor(string) called" << std::endl;
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
	mDefaultAttackDamage = DEFAULT_AD;
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap Constructor(FragTrap) called" << std::endl;
	mMaxHitPoints = src.mMaxHitPoints;
	mMaxEnergyPoints = src.mMaxEnergyPoints;
	mDefaultAttackDamage = src.mDefaultAttackDamage;
}

void FragTrap::attack(const std::string& target)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks "
		<< target << ", causing " << getAttackDamage()
		<< " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void FragTrap::highFivesGuys(){std::cout << "FragTrap requested a high fives." << std::endl;}

FragTrap & FragTrap::operator=(FragTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

FragTrap::~FragTrap(){std::cout << "FragTrap Destructor called" << std::endl;}