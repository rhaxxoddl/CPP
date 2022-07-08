/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:15:26 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/08 21:24:38 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Constructor(void) called" << std::endl;
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
	mDefaultAttackDamage = DEFAULT_AD;
}

FragTrap::FragTrap(const std::string& name)
{
	std::cout << "FragTrap Constructor(string) called" << std::endl;
	mName = name;
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
	mDefaultAttackDamage = DEFAULT_AD;
}

FragTrap::FragTrap(FragTrap &src)
{
	std::cout << "FragTrap Constructor(FragTrap) called" << std::endl;
	mName = src.mName;
	mHitPoints = src.mHitPoints;
	mEnergyPoints = src.mEnergyPoints;
	mAttackDamage = src.mAttackDamage;
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

void FragTrap::highFivesGuys() const {std::cout << "FragTrap requested a high fives." << std::endl;}

FragTrap & FragTrap::operator=(FragTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

FragTrap::~FragTrap(){std::cout << "FragTrap Destructor called" << std::endl;}