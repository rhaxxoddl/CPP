/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/12 19:21:56 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor(void) called" << std::endl;
	type = "Cat";
	brain = new Brain();
	std::cout << "brain address: " << brain << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << "Cat Constructor(Cat&) called" << std::endl;
	type = src.type;
	brain = new Brain(*src.brain);
	std::cout << "brain address: " << brain << std::endl;
}

void Cat::makeSound() const {std::cout << "Meow Meow!!" << std::endl;}

Cat& Cat::operator=(const Cat& src)
{
	setType(src.getType());
	*brain = *src.brain;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}
