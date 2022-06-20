/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:18:32 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/20 21:31:35 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "iostream"
#define ENTER__MESSAGE "Please enter "

Contact::Contact(void)
{
}

Contact::~Contact()
{
}

void	Contact::PrintInfo() const
{
	std::cout << GetFirstName() << std::endl;
	std::cout << GetLastName() << std::endl;
	std::cout << GetNickname() << std::endl;
	std::cout << GetPhoneNumber() << std::endl;
	std::cout << GetDarkestSecret() << std::endl;
}

std::string	Contact::GetFirstName() const
{
	return(mFirstName);
}

std::string	Contact::GetLastName() const
{
	return(mLastName);
}

std::string	Contact::GetNickname() const
{
	return(mNickname);
}

std::string	Contact::GetPhoneNumber() const
{
	return(mPhoneNumber);
}

std::string	Contact::GetDarkestSecret() const
{
	return(mDarkestSecret);
}

void	Contact::SetFirstName(std::string first_name)
{
	mFirstName = first_name;
}

void	Contact::SetLastName(std::string first_name)
{
	mFirstName = first_name;
}

void	Contact::SetNickname(std::string first_name)
{
	mFirstName = first_name;
}

void	Contact::SetPhoneNumber(std::string first_name)
{
	mFirstName = first_name;
}

void	Contact::SetDarkestSecret(std::string first_name)
{
	mFirstName = first_name;
}