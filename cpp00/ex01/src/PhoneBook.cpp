/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:11:16 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/20 21:42:12 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(/* args */)
{
	mLastest_contact_idx = 0;
	mContact_count = 0;
}

PhoneBook::~PhoneBook()
{
}

static int	InputField(Contact& contact)
{
	std::cout << "first name : ";
	std::string	firstName;
	std::getline(std::cin, firstName);
	if (firstName.size() == 0 || std::cin.eof() == true)
		return (0);
	std::cout << "last name : ";
	std::string	lastName;
	std::getline(std::cin, lastName);
	if (lastName.size() == 0 || std::cin.eof() == true)
		return (0);
	std::string	nickname;
	std::cout << "nickname : ";
	std::getline(std::cin, nickname);
	if (nickname.size() == 0 || std::cin.eof() == true)
		return (0);
	std::cout << "phone number : ";
	std::string	phoneNumber;
	std::getline(std::cin, phoneNumber);
	if (phoneNumber.size() == 0 || std::cin.eof() == true)
		return (0);
	std::cout << "darkest secret : ";
	std::string	darkestSecret;
	std::getline(std::cin, darkestSecret);
	if (darkestSecret.size() == 0 || std::cin.eof() == true)
		return (0);
	contact.SetFirstName(firstName);
	contact.SetLastName(lastName);
	contact.SetNickname(nickname);
	contact.SetPhoneNumber(phoneNumber);
	contact.SetDarkestSecret(darkestSecret);
	return (1);
}

static std::string	limit_ten_char(const std::string& str)
{		
	if (str.length() > 10)
	{
		std::string tempString = str.substr(0, 10);
		tempString[9] = '.';
		return (tempString);
	}
	else
		return (str);
}

void	PhoneBook::PrintAllContact()
{
	for (int i = 0; i < mContact_count; i++)
	{
		Contact	tempContact = mContact[i];
		std::cout.width(COLUMN_WIDTH);
		std::cout << i << " | ";
		std::cout.width(COLUMN_WIDTH);
		std::cout << limit_ten_char(tempContact.GetFirstName()) << " | ";
		std::cout.width(COLUMN_WIDTH);
		std::cout << limit_ten_char(tempContact.GetLastName()) << " | ";
		std::cout.width(COLUMN_WIDTH);
		std::cout << limit_ten_char(tempContact.GetNickname()) << std::endl;
	}
}

void	PhoneBook::Add()
{
	if (!InputField(mContact[mLastest_contact_idx]))
		return ;
	if (mContact_count < 8)
		mContact_count++;
	mLastest_contact_idx = ++mLastest_contact_idx % (sizeof(mContact) / sizeof(Contact));
}

void	PhoneBook::Search()
{
	PrintAllContact();
	std::cout << "표시할 연락처의 인덱스를 입력하세요 : ";
	int idx = 0;
	std::cin >> idx;
	if (idx < mContact_count && idx > 0)
		mContact[idx].PrintInfo();
	else
		std::cout << "[ERROR]알맞지 않은 인덱스입니다." << std::endl;
}
