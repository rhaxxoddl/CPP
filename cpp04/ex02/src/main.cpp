/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:30:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/17 13:35:11 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMAL_SIZE 10

int	GenerateAnimalArray(const Animal** aAnimal)
{
	for (int i = 0; i < ANIMAL_SIZE; i++)
	{
		if (i < ANIMAL_SIZE / 2)
		{
			aAnimal[i] = new Dog;
			if (!aAnimal[i])
				return 1;
		}
		else
		{
			aAnimal[i] = new Cat;
			if (!aAnimal[i])
				return 1;
		}
	}
	return 0;
}

void FreeAnimalArray(const Animal** aAnimal)
{
	for (int i = 0; i < ANIMAL_SIZE; i++)
		delete aAnimal[i];
}

void LeakChecker()
{
	system("leaks ex02");
}

int main()
{
	atexit(LeakChecker);
	srand((unsigned int)time(NULL));
	const Animal* aAnimal[ANIMAL_SIZE];

	std::cout << "==============Constructor============" << std::endl;
	if (GenerateAnimalArray(aAnimal))
	{
		std::cerr << "[ERROR]Failed GenerateAnimalArray()" << std::endl;
		return 1;
	}
	std::cout << "==============Destructor============" << std::endl;
	FreeAnimalArray(aAnimal);

	std::cout << "==============Copy Test============" << std::endl;
	const Cat original;
	Cat copy1(original);
	Cat copy2;
	copy2 = original;
	return 0;
}