/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:22:49 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/23 13:37:10 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const char* type)
{
	mType = type;
}

Weapon::~Weapon()
{

}

std::string&	Weapon::getType()
{
	return mType;
}

void			Weapon::setType(const char* type)
{
	mType = type;
}
