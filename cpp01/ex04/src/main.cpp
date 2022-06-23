/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:30:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/23 14:15:58 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChangeMachine.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Invalid parameters!" << std::endl;
		return 1;
	}
	std::ifstream::open(argv[1], std::ifstream::in);
	return 0;
}