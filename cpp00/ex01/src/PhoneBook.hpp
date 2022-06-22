/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:11:36 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/22 13:43:55 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void	Add();
	void	Search();
	void	PrintAllContact();
	
private:
	enum {MAX_CONTACT = 8, COLUMN_WIDTH = 10};
	Contact	mContact[MAX_CONTACT];
	int		mLastest_contact_idx;
	int		mContact_count;
};
#endif
