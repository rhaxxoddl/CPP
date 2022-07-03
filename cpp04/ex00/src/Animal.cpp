/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 19:45:24 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("none"){}

Animal::Animal(std::string inType) : type(inType){}

Animal::Animal(Animal &src) : type(src.getType()){}

void Animal::makeSound() const {std::cout << "" << std::endl;}

const std::string& Animal::getType() const {return type;}

void Animal::setType(std::string inType){type = inType;}

Animal& Animal::operator=(Animal& src)
{
	type = src.getType();
	return *this;
}

Animal::~Animal(){}
