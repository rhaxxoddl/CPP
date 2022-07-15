/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/15 21:06:09 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("a", 20);
	Bureaucrat b("b", 60);
	Bureaucrat c("b", 120);
	Form form("form", 50, 70);

	std::cout << "Initialize: " << form << std::endl;
	return 0;
}
