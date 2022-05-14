/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:11:36 by sanjeon           #+#    #+#             */
/*   Updated: 2022/05/14 21:07:12 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

enum	e_command{
	ADD,
	SEARCH,
	EXIT,
};

class Contact
{
private:
	std::string	_fisrt_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	Contact();
	~Contact();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
	void		setFirstName(std::string fisrt_name);
	void		setLastName(std::string last_name);
	void		setNickname(std::string nickname);
	void		setPhoneNumber(std::string phone_number);
	void		setDarkestSecret(std::string darkest_secret);
};

class PhoneBook
{
private:
	Contact	_contact[8];
	int		_lastest_contact_idx;
	int		_contact_count;
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
};
#endif
