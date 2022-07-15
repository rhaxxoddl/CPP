/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:08:59 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/15 19:56:01 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade)
: mName(name), mGrade(grade)
{
	std::cout << "Constructor called!" << std::endl;
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Distructor called!" << std::endl;
}

const std::string& Bureaucrat::getName() const { return mName; }

unsigned int Bureaucrat::getGrade() const { return mGrade; }

void Bureaucrat::setName(std::string& name)
{
	mName = name;
}

void Bureaucrat::setGrade(unsigned int n)
{
	if (n < 1)
		throw GradeTooLowException();
	else if (n > 150)
		throw GradeTooHighException();
	mGrade = n;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		setGrade(getGrade() + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		setGrade(getGrade() - 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
 	return "[ERROR]Grade too high: \nAllowed grade ranges from 1 to 150";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
 	return "[ERROR]Grade too Low: \nAllowed grade ranges from 1 to 150";
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}
