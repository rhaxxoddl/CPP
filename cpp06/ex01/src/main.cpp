/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/21 13:55:05 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data data = {'c', 42, 42.42f, 42.424242424242, "string"};
	Serializer seri;

	uintptr_t pointer = seri.serialize(&data);
	std::cout << "pointer(dec): " << pointer << std::endl;
	std::cout.flags(std::ios::hex);
	std::cout << "pointer(hex): " << pointer << std::endl;
	Data* copy = seri.deserialize(pointer);
	std::cout.flags(std::ios::dec);
	std::cout << "data[" << copy
			<< "]: char[" << copy->c
			<< "] int["<< copy->i
			<< "] float[" << copy->f
			<< "] double[" << copy->d
			<< "] string[" << copy->s << "]" << std::endl;
	return 0;
}
