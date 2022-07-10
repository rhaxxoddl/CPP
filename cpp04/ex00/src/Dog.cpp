/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/10 19:30:12 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor(void) called" << std::endl;
}

Dog::Dog(Dog& src)
{
	type = src.type;
	std::cout << "Dog Constructor(Dog&) called" << std::endl;
}

void Dog::makeSound() const {std::cout << "Meow Meow!!" << std::endl;}

Dog& Dog::operator=(Dog& src)
{
	setType(src.getType());
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}
