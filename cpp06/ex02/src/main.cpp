/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:42:56 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/21 19:53:17 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
# include <ctime>


Base* generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 1:
		return new A();

	case 2:
		return new B();
	
	default:
		return new C();
	}
}

void identify(Base* p)
{
	if (A* a = dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if (B* b = dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if (C* c = dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	} catch(const std::exception& e) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	} catch(const std::exception& e) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	
}

int main(void)
{
	Base* base = generate();
	
	identify(base);
	identify(*base);
	return 0;
}
