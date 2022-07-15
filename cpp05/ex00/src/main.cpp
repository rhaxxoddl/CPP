/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/15 19:58:49 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "============a(heap)============" << std::endl;
	Bureaucrat* a;
	a = new Bureaucrat("a", 1);
	std::cout << "increment grade before: " << *a << std::endl;
	a->incrementGrade();
	std::cout << "increment grade after: " << *a << std::endl;
	a->decrementGrade();
	std::cout << "decrement grade after: " << *a << std::endl;
	std::cout << "less than lowest grade before: " << *a << std::endl;
	a->decrementGrade();
	delete a;
	std::cout << "============b(stack)============" << std::endl;
	Bureaucrat b("b", 150);
	std::cout << "decrement grade before: " << b << std::endl;
	b.decrementGrade();
	std::cout << "decrement grade after: " << b << std::endl;
	b.incrementGrade();
	std::cout << "increment grade after: " << b << std::endl;
	std::cout << "exceed highest grade before: " << b << std::endl;
	b.incrementGrade();
	return 0;
}
