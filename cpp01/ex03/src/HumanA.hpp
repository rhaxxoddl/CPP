/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:43:15 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/23 13:36:21 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA();
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack() const;
	private:
		std::string mName;
		Weapon&	mWeapon;
};


 #endif