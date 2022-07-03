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

WrongAnimal::WrongAnimal() : type("none"){}

WrongAnimal::WrongAnimal(std::string inType) : type(inType){}

WrongAnimal::WrongAnimal(WrongAnimal &src) : type(src.getType()){}

void WrongAnimal::makeSound() const {std::cout << "?" << std::endl;}

const std::string& WrongAnimal::getType() const {return type;}

void WrongAnimal::setType(std::string inType){type = inType;}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& src)
{
	type = src.getType();
	return *this;
}

WrongAnimal::~WrongAnimal(){}
