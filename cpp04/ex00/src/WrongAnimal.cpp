/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 19:45:24 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("none")
{
	std::cout << "WrongAnimal Constructor(void) called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string inType) : type(inType)
{
	std::cout << "WrongAnimal Constructor(string) called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &src) : type(src.getType())
{
	std::cout << "WrongAnimal Constructor(WrongAnimal&) called" << std::endl;
}

void WrongAnimal::makeSound() const {std::cout << "" << std::endl;}

const std::string& WrongAnimal::getType() const {return type;}

void WrongAnimal::setType(std::string inType){type = inType;}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& src)
{
	type = src.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}
