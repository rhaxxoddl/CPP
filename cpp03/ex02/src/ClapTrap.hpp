/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:42 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/08 13:26:29 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(ClapTrap &src);
	ClapTrap(const std::string& name);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();
	unsigned int getHitPoints();
	unsigned int getEnergyPoints();
	unsigned int getAttackDamage();
	void setName(std::string name);
	void setHitPoints(unsigned int hitPoints);
	void setEnergyPoints(unsigned int energyPoints);
	void setAttackDamage(unsigned int attackDamage);
	ClapTrap & operator=(ClapTrap &src);
	~ClapTrap();

protected:
	std::string		mName;
	unsigned int	mHitPoints;
	unsigned int	mEnergyPoints;
	unsigned int	mAttackDamage;
	unsigned int	mMaxHitPoints;
	unsigned int	mMaxEnergyPoints;
	unsigned int	mDefaultAttackDamage;

private:
	enum {MAX_HP = 10, MAX_EP = 10, DEFAULT_AD = 0};
};

 #endif