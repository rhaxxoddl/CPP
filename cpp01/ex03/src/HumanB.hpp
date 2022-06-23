/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:17:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/23 13:35:58 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const char* name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon& weapon);
	private:
		std::string mName;
		Weapon*	mWeapon;
};


 #endif
