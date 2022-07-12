/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/12 19:39:21 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("none")
{
	std::cout << "Animal Constructor(void) called" << std::endl;
}

Animal::Animal(std::string inType) : type(inType)
{
	std::cout << "Animal Constructor(string) called" << std::endl;
}

Animal::Animal(const Animal &src) : type(src.getType())
{
	std::cout << "Animal Constructor(Animal&) called" << std::endl;
}

const std::string& Animal::getType() const {return type;}

void Animal::setType(std::string inType){type = inType;}

void Animal::makeSound() const {std::cout << "" << std::endl;}

Animal& Animal::operator=(const Animal& src)
{
	type = src.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}
