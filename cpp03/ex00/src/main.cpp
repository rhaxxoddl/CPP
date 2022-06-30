/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:30:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/30 13:13:34 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void PrintInfo(ClapTrap& a)
{
	std::cout << "#" << a.getName() << "# "
	<< "HP[" << a.getHitPoints() << "]"
	<< "EP[" << a.getEnergyPoints() << "]"
	<< "AD[" << a.getAttackDamage() << "]" << std::endl;
}
int main( void )
{
	ClapTrap a;
	ClapTrap b("B");
	ClapTrap c(b);
	ClapTrap d;

	d = c;
	std::cout << "================ Initailization ================" << std::endl;
	PrintInfo(a);
	PrintInfo(b);
	PrintInfo(c);
	PrintInfo(d);
	
	std::cout << "================ Modify name ================" << std::endl;
	c.setName("C");
	d.setName("D");
	
	std::cout << "================ a -attack(5)-> b ================" << std::endl;
	a.attack(b.getName());
	b.takeDamage(5);
	PrintInfo(a);
	PrintInfo(b);

	std::cout << "================ a -attack(10)-> c ================" << std::endl;
	a.attack(c.getName());
	c.takeDamage(10);
	PrintInfo(a);
	PrintInfo(c);

	std::cout << "================ a -attack(100)-> d ================" << std::endl;
	a.attack(d.getName());
	d.takeDamage(100);
	PrintInfo(a);
	PrintInfo(d);
	
	std::cout << "================ d -attack(miss)-> a ================" << std::endl;
	d.attack(a.getName());
	PrintInfo(d);

	std::cout << "================ repaired before ================" << std::endl;
	PrintInfo(a);
	PrintInfo(b);
	PrintInfo(c);
	PrintInfo(d);
	
	std::cout << "================ repaired after ================" << std::endl;
	a.beRepaired(2);
	b.beRepaired(2);
	c.beRepaired(2);
	d.beRepaired(2);
	PrintInfo(a);
	PrintInfo(b);
	PrintInfo(c);
	PrintInfo(d);
	return 0;
}