/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 17:44:08 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){}

Cat::Cat(Cat& src) : Animal(src){}

void Cat::makeSound() const {std::cout << "Meow Meow!!" << std::endl;}

Cat& Cat::operator=(Cat& src)
{
	setType(src.getType());
	return *this;
}

Cat::~Cat()
{
}
