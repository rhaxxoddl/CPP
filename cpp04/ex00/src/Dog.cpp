/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 17:44:20 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){}

Dog::Dog(Dog& src) : Animal(src){}

void Dog::makeSound() const {std::cout << "Woof Woof!!" << std::endl;}

Dog& Dog::operator=(Dog& src)
{
	setType(src.getType());
	return *this;
}

Dog::~Dog()
{
}
