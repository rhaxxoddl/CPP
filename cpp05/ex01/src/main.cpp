/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/17 11:58:31 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("a", 20);
	Bureaucrat b("b", 60);
	Bureaucrat c("c", 120);
	Form form("form", 70, 50);

	std::cout << "==============Initialize==============" << std::endl;
	std::cout << a << std::endl << b << std::endl << c << std::endl << form << std::endl;
	std::cout << "============== C[120] ----signed---> form[70] ==============" << std::endl;
	c.signForm(form);
	std::cout << form << std::endl;
	std::cout << "============== B[60] ----signed---> form[70] ==============" << std::endl;
	b.signForm(form);
	std::cout << form << std::endl;
	std::cout << "==============form reset==============" << std::endl;
	form.setSigned(false);
	std::cout << form << std::endl;
	std::cout << "============== A[20] ----signed---> form[70] ==============" << std::endl;
	a.signForm(form);
	std::cout << form << std::endl;
	return 0;
}
