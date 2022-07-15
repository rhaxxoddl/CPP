/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:09:09 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/15 20:54:06 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(const std::string& name, unsigned int signableGrade, unsigned int actionableGrade)
: mName(name), mSignableGrade(signableGrade), mActionableGrade(actionableGrade), mSinged(false)
{
	if (signableGrade < 1)
		throw GradeTooLowException();
	else if (signableGrade > 150)
		throw GradeTooHighException();
	if (actionableGrade < 1)
		throw GradeTooLowException();
	else if (actionableGrade > 150)
		throw GradeTooHighException();
}

Form::~Form(){}

const std::string& Form::getName() const { return mName; }

bool Form::getSigned() const { return mSinged;}

unsigned int Form::getSignableGrade() const { return mSignableGrade; }

unsigned int Form::getActionableGrade() const { return mActionableGrade; }

void Form::setSigned(bool sign) { mSinged = true; }

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > getSignableGrade())
		throw GradeTooLowException();
	setSigned(true);
}

std::ostream& operator<<(std::ostream &out, const Form& src)
{
	out << src.getName()
	<< ", Signable Grade[" << src.getSignableGrade() << "] "
	<< "Actionable Grade[" << src.getActionableGrade() << "] "
	<< "sign status[ " << src.getSigned() << "]";
	return out;
}
