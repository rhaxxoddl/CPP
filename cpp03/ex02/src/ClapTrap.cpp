/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/30 20:35:20 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	mName = "unkwoun";
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	std::cout << "ClapTrap Constructor(void) called" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap &src)
{
	mName = src.getName();
	mHitPoints = src.getHitPoints();
	mEnergyPoints = src.getEnergyPoints();
	mAttackDamage = src.getAttackDamage();
	std::cout << "ClapTrap Constructor(ClapTrap) called" << std::endl;

}

ClapTrap::ClapTrap(std::string name)
{
	mName = name;
	mHitPoints = MAX_HP;
	mEnergyPoints = MAX_EP;
	mAttackDamage = DEFAULT_AD;
	std::cout << "ClapTrap Constructor(string) called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (mHitPoints > 0 && mEnergyPoints > 0)
	{
		std::cout << "ClapTrap " << mName << " attacks "
		<< target << ", causing " << mAttackDamage
		<< " points of damage!" << std::endl;
		mEnergyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (mHitPoints > 0 && mEnergyPoints > 0)
	{
		std::cout << "ClapTrap " << mName
		<< " attacked, causing " << amount
		<< " points of damage!" << std::endl;
		if (mHitPoints > amount)
			mHitPoints -= amount;
		else
			mHitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (mHitPoints > 0 && mEnergyPoints > 0)
	{
		if (amount + mHitPoints > MAX_HP)
			mHitPoints = MAX_HP;
		else
			mHitPoints += amount;
		mEnergyPoints--;
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

ClapTrap::~ClapTrap(){std::cout << "Destructor called" << std::endl;}
