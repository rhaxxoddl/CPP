/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:02:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/21 21:14:28 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook phoneBook;
	std::string cmd;

	while (1)
	{
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			phoneBook.Add();
		else if (!cmd.compare("SEARCH"))
			phoneBook.Search();
		else if (!cmd.compare("EXIT"))
			return (0);
		else
			std::cout << "[ERROR]정의되지 않은 명령어입니다." << std::endl;
	}
}