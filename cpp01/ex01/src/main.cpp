/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:30:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/22 21:45:36 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	N = 5;
	std::string	name = "Chan-Sung Jung";
	Zombie* zombies = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
		zombies[i].Announce();
	delete[] zombies;
	return 0;
}