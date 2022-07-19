/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:09:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/19 20:29:43 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP
# include <string>
# include <iostream>

class Conversion
{
public:
	Conversion(const std::string& str);
	~Conversion();
	void convertValue(const std::string& str);
	void convertChar(const std::string& str);
	void convertInt(const std::string& str);
	void convertFloat(const std::string& str);
	void convertDouble(const std::string& str);
private:
	enum {DISPLAYABLE, IMPOSSIBLE, NONDISPLAYABLE};
	std::string mString;
	double mValue;
	Conversion();
	Conversion(const Conversion& src);
	Conversion& operator=(const Conversion& src);
};

#endif
