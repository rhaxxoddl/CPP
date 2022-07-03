/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:30:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 22:20:07 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "==============Animal==============" << std::endl;
	std::cout << j->getType() << " ";
	i->makeSound(); //will output the cat sound!
	std::cout << i->getType() << " ";
	j->makeSound();
	meta->makeSound();
	std::cout << "==============WrongAnimal==============" << std::endl;
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();
	std::cout << w->getType() << " ";
	w->makeSound(); //will output the wrong cat sound!
	std::cout << c->getType() << " ";
	c->makeSound();
	return 0;
}