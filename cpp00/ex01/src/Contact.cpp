/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:18:32 by sanjeon           #+#    #+#             */
/*   Updated: 2022/05/14 16:00:51 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName()
{
	return(_fisrt_name);
}

std::string	Contact::getLastName()
{
	return(_last_name);
}

std::string	Contact::getNickname()
{
	return(_nickname);
}

std::string	Contact::getPhoneNumber()
{
	return(_phone_number);
}

std::string	Contact::getDarkestSecret()
{
	return(_darkest_secret);
}

void	Contact::setFirstName(std::string first_name)
{
	_fisrt_name = first_name;
}

void	Contact::setLastName(std::string first_name)
{
	_fisrt_name = first_name;
}

void	Contact::setNickname(std::string first_name)
{
	_fisrt_name = first_name;
}

void	Contact::setPhoneNumber(std::string first_name)
{
	_fisrt_name = first_name;
}

void	Contact::setDarkestSecret(std::string first_name)
{
	_fisrt_name = first_name;
}