/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:11:16 by sanjeon           #+#    #+#             */
/*   Updated: 2022/05/14 21:18:50 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(/* args */)
{
	// std::fill_n(_contact, sizeof(_contact) / sizeof(Contact), -1);
	_lastest_contact_idx = 0;
	_contact_count = 0;
}

PhoneBook::~PhoneBook()
{
}

void	input_Field(Contact contact)
{
	std::string temp = 0;

	std::cout << "last name : ";
	std::getline(std::cin, temp);
	contact.setLastName(temp);
	std::cout << "first name : ";
	std::getline(std::cin, temp);
	contact.setFirstName(temp);
	std::cout << "nickname : ";
	std::getline(std::cin, temp);
	contact.setNickname(temp);
	std::cout << "phone number : ";
	std::getline(std::cin, temp);
	contact.setPhoneNumber(temp);
	std::cout << "darkest_secret : ";
	std::getline(std::cin, temp);
	contact.setDarkestSecret(temp);
}

void	PhoneBook::add()
{
	std::string temp = 0;

	std::cout << "last name : ";
	std::getline(std::cin, temp); // Null값 들어왔을 때 처리
	_contact[_lastest_contact_idx].setLastName(temp);
	std::cout << "first name : ";
	std::getline(std::cin, temp);
	_contact[_lastest_contact_idx].setFirstName(temp);
	std::cout << "nickname : ";
	std::getline(std::cin, temp);
	_contact[_lastest_contact_idx].setNickname(temp);
	std::cout << "phone number : ";
	std::getline(std::cin, temp);
	_contact[_lastest_contact_idx].setPhoneNumber(temp);
	std::cout << "darkest_secret : ";
	std::getline(std::cin, temp);
	_contact[_lastest_contact_idx].setDarkestSecret(temp);
	if (_contact_count != 8)
		_contact_count++;
	_lastest_contact_idx = ++_lastest_contact_idx % (sizeof(_contact) / sizeof(Contact));
}

static std::string	limit_ten_char(std::string str)
{
	if (str.length() > 10)
		str.resize(9);
	return (str);
}

static void	print_contact(Contact contact, int idx)
{
	std::cout << idx << " | ";
	std::cout << limit_ten_char(contact.getFirstName()) << " | ";
	std::cout << limit_ten_char(contact.getLastName()) << " | ";
	std::cout << limit_ten_char(contact.getNickname()) << std::endl;
}

void	PhoneBook::search()
{
	for (int i = 0; ; )
}
