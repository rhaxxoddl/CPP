/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/21 13:18:59 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char* argv[])
{
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
