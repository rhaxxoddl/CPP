/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/10 19:29:46 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Constructor(void) called" << std::endl;
}

Cat::Cat(Cat& src)
{
	type = src.type;
	std::cout << "Cat Constructor(Cat&) called" << std::endl;
}

void Cat::makeSound() const {std::cout << "Meow Meow!!" << std::endl;}

Cat& Cat::operator=(Cat& src)
{
	setType(src.getType());
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}
