/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:09:09 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/19 07:18:33 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, unsigned int signableGrade, unsigned int executableGrade)
: mName(name), mSinged(false), mSignableGrade(signableGrade), mExecutableGrade(executableGrade)
{
	if (signableGrade < HIGHESTGRADE)
		throw GradeTooLowException();
	else if (signableGrade > LOWESTGRADE)
		throw GradeTooHighException();
	if (executableGrade < HIGHESTGRADE)
		throw GradeTooLowException();
	else if (executableGrade > LOWESTGRADE)
		throw GradeTooHighException();
}

Form::~Form(){}

const std::string& Form::getName() const { return mName; }

bool Form::getSigned() const { return mSinged;}

unsigned int Form::getSignableGrade() const { return mSignableGrade; }

unsigned int Form::getExecutableGrade() const { return mExecutableGrade; }

void Form::setSigned(bool sign) { mSinged = sign; }

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > getSignableGrade())
		throw GradeTooLowException();
	setSigned(true);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "[ERROR]Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "[ERROR]Grade too Low!";
}

const char* Form::UnsignedFormException::what() const throw()
{
	return "[ERROR]Unsigned form!";
}

void Form::executable(const Bureaucrat& bureaucrat) const
{
	if (!getSigned())
		throw UnsignedFormException();
	if (bureaucrat.getGrade() > getExecutableGrade())
		throw GradeTooLowException();
}

Form::Form()
: mName("Form"), mSinged(false), mSignableGrade(LOWESTGRADE), mExecutableGrade(LOWESTGRADE)
{}

Form::Form(const Form& src)
: mName(src.mName), mSinged(src.mSinged), mSignableGrade(src.mSignableGrade), mExecutableGrade(src.mExecutableGrade)
{}

const Form& Form::operator=(const Form& src)
{
	if (this != &src)
	{
		*(const_cast<std::string*>(&mName)) = src.getName();
		*(const_cast<bool*>(&mSinged)) = src.getSigned();
		*(const_cast<unsigned int*>(&mSignableGrade)) = src.getSignableGrade();
		*(const_cast<unsigned int*>(&mExecutableGrade)) = src.getExecutableGrade();
	}
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Form& src)
{
	out << src.getName()
	<< ", Signable Grade[" << src.getSignableGrade() << "] "
	<< "Actionable Grade[" << src.getExecutableGrade() << "] "
	<< "sign status[" << src.getSigned() << "]";
	return out;
}