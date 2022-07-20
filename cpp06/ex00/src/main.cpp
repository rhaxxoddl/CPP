/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/20 18:36:42 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char* argv[])
{
	(void)argc;
	(void)argv;
	// 1. 오버플로우, 언더플로우

	if (argc != 2)
	{
		std::cerr << "[ERROR] Invalid parameter!" << std::endl;
		return 1;
	}
	Conversion a(argv[1]);
	a.convertChar();
	a.convertInt();
	a.convertFloat();
	a.convertDouble();
	return 0;
}
