/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:08:59 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/14 14:45:02 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade)
: mName(name), mGrade(grade)
{
	try
	{
		if (grade < 1 || grade > 150)
			throw std::out_of_range("grade의 범위를 벗어납니다.(1 ~ 150)");
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "[Exception] " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Distructor called!" << std::endl;
}

std::cout& std::cout::operator<<(const Bureaucrat& src)
{

}

const std::string& Bureaucrat::getName() const { return mName; }

unsigned int Bureaucrat::getGrade() const { return mGrade; }
