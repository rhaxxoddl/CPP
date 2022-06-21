/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:11:36 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/21 21:28:33 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
public:
	Contact();
	~Contact();
	void		PrintInfo() const;
	std::string	GetFirstName() const;
	std::string	GetLastName() const;
	std::string	GetNickname() const;
	std::string	GetPhoneNumber() const;
	std::string	GetDarkestSecret() const;
	void		SetFirstName(std::string fisrtName);
	void		SetLastName(std::string lastName);
	void		SetNickname(std::string nickname);
	void		SetPhoneNumber(std::string phoneNumber);
	void		SetDarkestSecret(std::string darkestSecret);

private:
	std::string	mFirstName;
	std::string	mLastName;
	std::string	mNickname;
	std::string	mPhoneNumber;
	std::string	mDarkestSecret;
};
#endif
