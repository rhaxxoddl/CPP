/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:28:10 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/08 21:27:28 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor(void) called" << std::endl;
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
	mDefaultAttackDamage = DEFAULT_AD;
}

ScavTrap::ScavTrap(const std::string& name)
{
	std::cout << "ScavTrap Constructor(string) called" << std::endl;
	mName = name;
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
	mDefaultAttackDamage = DEFAULT_AD;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	std::cout << "ScavTrap Constructor(ScavTrap) called" << std::endl;
	mName = src.mName;
	mHitPoints = src.mHitPoints;
	mEnergyPoints = src.mEnergyPoints;
	mAttackDamage = src.mAttackDamage;
	mMaxHitPoints = src.mMaxHitPoints;
	mMaxEnergyPoints = src.mMaxEnergyPoints;
	mDefaultAttackDamage = src.mDefaultAttackDamage;
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

void ScavTrap::guardGate() const {std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;}

ScavTrap & ScavTrap::operator=(ScavTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

ScavTrap::~ScavTrap(){std::cout << "ScavTrap Destructor called" << std::endl;}
