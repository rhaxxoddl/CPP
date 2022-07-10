/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/10 16:46:16 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: mName("unknown"), mHitPoints(MAX_HP), mEnergyPoints(MAX_EP), mAttackDamage(DEFAULT_AD)
{
	std::cout << mName << "'s Constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src)
: mName(src.getName()), mHitPoints(src.getHitPoints()), mEnergyPoints(src.getEnergyPoints()), mAttackDamage(src.getAttackDamage())
{
	std::cout << mName << "'s Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: mName(name), mHitPoints(MAX_HP), mEnergyPoints(MAX_EP), mAttackDamage(DEFAULT_AD)
{
	std::cout << mName << "'s Constructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << getName() << " attacks "
		<< target << ", causing " << getAttackDamage()
		<< " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << getName()
		<< " attacked, causing " << amount
		<< " points of damage!" << std::endl;
		if (getHitPoints() > amount)
			setHitPoints(getHitPoints() - amount);
		else
			setHitPoints(0);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
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

std::string	ClapTrap::getName(){return mName;}
unsigned int ClapTrap::getHitPoints(){return mHitPoints;}
unsigned int ClapTrap::getEnergyPoints(){return mEnergyPoints;}
unsigned int ClapTrap::getAttackDamage(){return mAttackDamage;}
void ClapTrap::setName(std::string name){mName = name;}
void ClapTrap::setHitPoints(unsigned int hitPoints){mHitPoints = hitPoints;}
void ClapTrap::setEnergyPoints(unsigned int energyPoints){mEnergyPoints = energyPoints;}
void ClapTrap::setAttackDamage(unsigned int attackDamage){mAttackDamage = attackDamage;}

ClapTrap & ClapTrap::operator=(ClapTrap &src)
{
	mName = src.getName();
	mHitPoints = src.getHitPoints();
	mEnergyPoints = src.getEnergyPoints();
	mAttackDamage = src.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap(){std::cout << mName << "'s Destructor" << std::endl;}
