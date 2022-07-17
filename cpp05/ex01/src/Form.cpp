/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:09:09 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/17 13:48:09 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(const std::string& name, unsigned int signableGrade, unsigned int actionableGrade)
: mName(name), mSinged(false), mSignableGrade(signableGrade), mActionableGrade(actionableGrade)
{
	if (signableGrade < HIGHESTGRADE)
		throw GradeTooLowException();
	else if (signableGrade > LOWESTGRADE)
		throw GradeTooHighException();
	if (actionableGrade < HIGHESTGRADE)
		throw GradeTooLowException();
	else if (actionableGrade > LOWESTGRADE)
		throw GradeTooHighException();
}

Form::~Form(){}

const std::string& Form::getName() const { return mName; }

bool Form::getSigned() const { return mSinged;}

unsigned int Form::getSignableGrade() const { return mSignableGrade; }

unsigned int Form::getActionableGrade() const { return mActionableGrade; }

void Form::setSigned(bool sign) { mSinged = sign; }

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > getSignableGrade())
		throw GradeTooLowException();
	setSigned(true);
}

const char* Form::GradeTooHighException::what() const throw()
{
 	return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
 	return "Grade too Low!";
}

std::ostream& operator<<(std::ostream &out, const Form& src)
{
	out << src.getName()
	<< ", Signable Grade[" << src.getSignableGrade() << "] "
	<< "Actionable Grade[" << src.getActionableGrade() << "] "
	<< "sign status[" << src.getSigned() << "]";
	return out;
}
