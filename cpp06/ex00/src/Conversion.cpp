/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:08:59 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/19 20:32:37 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(const std::string& str)
: mString(str), mValue(0)
{}

Conversion::~Conversion() {}

void Conversion::convertValue(const std::string& str)
{
	char *endPtr = 0;
	mValue = strtod(str.c_str(), &endPtr);
	if (str.length() != 1)
	{
		
	}
}

void Conversion::convertChar(const std::string& str)
{
}

void Conversion::convertInt(const std::string& str)
{

}

void Conversion::convertFloat(const std::string& str)
{

}

void Conversion::convertDouble(const std::string& str)
{
	double out = strtod(str.c_str(), NULL);
}

Conversion::Conversion() {}
Conversion::Conversion(const Conversion& src) {}
Conversion& Conversion::operator=(const Conversion& src) {}
