/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:18:32 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/22 13:42:46 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "iostream"
#define ENTER__MESSAGE "Please enter "

Contact::Contact(void)
{
	mFirstName.clear();
	mLastName.clear();
	mNickname.clear();
	mPhoneNumber.clear();
	mDarkestSecret.clear();
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

void	Contact::SetFirstName(std::string firstName)
{
	mFirstName = firstName;
}

void	Contact::SetLastName(std::string lastName)
{
	mLastName = lastName;
}

void	Contact::SetNickname(std::string nickname)
{
	mNickname = nickname;
}

void	Contact::SetPhoneNumber(std::string phoneNumber)
{
	mPhoneNumber = phoneNumber;
}

void	Contact::SetDarkestSecret(std::string darkestSecret)
{
	mDarkestSecret = darkestSecret;
}
