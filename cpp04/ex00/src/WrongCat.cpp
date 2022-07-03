/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 17:44:08 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){}

WrongCat::WrongCat(WrongCat& src) : WrongAnimal(src){}

void WrongCat::makeSound() const {std::cout << "Hiss Hiss!!" << std::endl;}

WrongCat& WrongCat::operator=(WrongCat& src)
{
	setType(src.getType());
	return *this;
}

WrongCat::~WrongCat()
{
}
