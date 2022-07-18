/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:08:59 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/18 19:21:30 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: mName("Bureaucrat"), mGrade(LOWESTGRADE)
{}

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade)
: mName(name), mGrade(grade)
{
	if (grade > LOWESTGRADE)
		throw GradeTooHighException();
	else if (grade < HIGHESTGRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
: mName(src.mName), mGrade(src.mGrade)
{}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this != &src)
	{
		setName(src.getName());
		setGrade(src.getGrade());
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Distructor called!" << std::endl;
}

const std::string& Bureaucrat::getName() const { return mName; }

unsigned int Bureaucrat::getGrade() const { return mGrade; }

void Bureaucrat::setName(const std::string& name)
{
	mName = name;
}

void Bureaucrat::setGrade(const unsigned int n)
{
	if (n < HIGHESTGRADE)
		throw GradeTooLowException();
	else if (n > LOWESTGRADE)
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
