/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/06 21:37:08 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor(void) called" << std::endl;
	mName = "unknown";
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
};

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << "ClapTrap Constructor(ClapTrap) called" << std::endl;
	mName = src.getName();
	mHitPoints = src.getHitPoints();
	mEnergyPoints = src.getEnergyPoints();
	mAttackDamage = src.getAttackDamage();
	mMaxHitPoints = MAX_HP;
	mMaxEnergyPoints = MAX_EP;
}

ClapTrap::ClapTrap(std::string name)
: mName(name), mHitPoints(MAX_HP), mEnergyPoints(MAX_EP), mAttackDamage(DEFAULT_AD), mMaxHitPoints(MAX_HP), mMaxEnergyPoints(MAX_EP)
{
	std::cout << "ClapTrap Constructor(string) called" << std::endl;
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
		if (amount + getHitPoints() > getMaxHitPoints())
			setHitPoints(getMaxHitPoints());
		else
			setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

std::string	ClapTrap::getName(){return mName;}
unsigned int ClapTrap::getHitPoints(){return mHitPoints;}
unsigned int ClapTrap::getEnergyPoints(){return mEnergyPoints;}
unsigned int ClapTrap::getAttackDamage(){return mAttackDamage;}
unsigned int ClapTrap::getMaxHitPoints(){return mMaxHitPoints;}
unsigned int ClapTrap::getMaxEnergyPoints(){return mMaxEnergyPoints;}
void ClapTrap::setName(std::string name){mName = name;}
void ClapTrap::setHitPoints(unsigned int hitPoints){mHitPoints = hitPoints;}
void ClapTrap::setEnergyPoints(unsigned int energyPoints){mEnergyPoints = energyPoints;}
void ClapTrap::setAttackDamage(unsigned int attackDamage){mAttackDamage = attackDamage;}
void ClapTrap::setMaxHitPoints(unsigned int maxHitPoints){mMaxHitPoints = maxHitPoints;}
void ClapTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints){mMaxEnergyPoints = maxEnergyPoints;}

ClapTrap & ClapTrap::operator=(ClapTrap &src)
{
	mName = src.getName();
	mHitPoints = src.getHitPoints();
	mEnergyPoints = src.getEnergyPoints();
	mAttackDamage = src.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap(){std::cout << "Claptrap Destructor called" << std::endl;}
