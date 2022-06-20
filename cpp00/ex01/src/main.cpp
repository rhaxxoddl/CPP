/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:02:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/20 21:32:29 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook phone_book;
	std::string cmd;

	while (1)
	{
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			phone_book.Add();
		else if (!cmd.compare("SEARCH"))
			phone_book.Search();
		else if (!cmd.compare("EXIT"))
			return (0);
	}
}