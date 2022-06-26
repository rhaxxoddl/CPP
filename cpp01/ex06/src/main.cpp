/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:30:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/26 20:05:22 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	PrintError(std::string errMessage)
{
	std::cerr << errMessage << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		PrintError("[ERROR]Invalid parameters!");
	Harl	harl(argv[1]);
	harl.complain(); 
	return 0;
}
