/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:09:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/21 14:45:50 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP
# include <string>
# include <iostream>
# include <locale>
# include <limits>

class Conversion
{
public:
	Conversion(const std::string& str);
	virtual ~Conversion();
	unsigned int getStatus() const;
	double getValue() const;
	const std::string& getString() const;
	void convertChar() const;
	void convertInt() const;
	void convertFloat() const;
	void convertDouble() const;
private:
	enum eStatus {POSSIBLE, IMPOSSIBLE};
	std::string mString;
	double mValue;
	unsigned int mStatus;
	Conversion();
	Conversion(const Conversion& src);
	Conversion& operator=(const Conversion& src);
};

#endif
