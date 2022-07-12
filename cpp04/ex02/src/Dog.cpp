/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/12 19:40:09 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor(void) called" << std::endl;
	type = "Dog";
	brain = new Brain();
	std::cout << "brain address: " << brain << std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog Constructor(Dog&) called" << std::endl;
	type = src.type;
	brain = new Brain(*src.brain);
	std::cout << "brain address: " << brain << std::endl;
}

void Dog::makeSound() const {std::cout << "Bow Bow!!!!" << std::endl;}

Dog& Dog::operator=(const Dog& src)
{
	setType(src.getType());
	*brain = *src.brain;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}
