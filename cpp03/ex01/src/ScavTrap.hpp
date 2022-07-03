/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:28:31 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 19:28:16 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &src);
	ScavTrap & operator=(ScavTrap &src);
	void attack(const std::string& target);
	void beRepaired(unsigned int amount);
	~ScavTrap();
	void guardGate();

private:
	enum {MAX_HP = 100, MAX_EP = 50, DEFAULT_AD = 20};
};


#endif