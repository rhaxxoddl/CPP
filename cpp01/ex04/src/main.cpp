/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:30:19 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/26 20:44:20 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChangeMachine.hpp"

int main(int argc, char **argv)
{
	
	if (argc != 4)
	{
		std::cerr << "[ERROR]Invalid parameters!" << std::endl;
		return 1;
	}
	ChangeMachine	cm(argv[2], argv[3]);
	cm.ConvertFile(argv[1]);
	return 0;
}
