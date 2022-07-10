/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:34:06 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/10 19:34:08 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Constructor(void) called" << std::endl;
}

WrongCat::WrongCat(WrongCat& src)
{
	type = src.type;
	std::cout << "WrongCat Constructor(WrongCat&) called" << std::endl;
}

void WrongCat::makeSound() const {std::cout << "Meow Meow!!" << std::endl;}

WrongCat& WrongCat::operator=(WrongCat& src)
{
	setType(src.getType());
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}
