/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:23:16 by sanjeon           #+#    #+#             */
/*   Updated: 2022/05/14 14:58:56 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string str;

	if (argc == 1)
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[1];
			for (unsigned long j = 0; j < str.length(); j++)
				str.at(j) = toupper(str.at(j));
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}