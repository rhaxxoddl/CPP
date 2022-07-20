/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:08:59 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/20 19:37:41 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(const std::string& str)
: mString(str), mValue(0), mStatus(POSSIBLE)
{
	char *endPtr = 0;
	mValue = strtod(str.c_str(), &endPtr);
	if (*endPtr == '\0')
		mStatus = POSSIBLE;
	else if (str.length() != 1)
	{
		if (*endPtr == 'f' && *(endPtr + 1) == '\0')
			mStatus = POSSIBLE;
		else
			mStatus = IMPOSSIBLE;
	}
	else
		mValue = static_cast<double>(str[0]);
}

Conversion::~Conversion() {}

unsigned int Conversion::getStatus() const { return mStatus; }

double Conversion::getValue() const { return mValue; }

const std::string& Conversion::getString() const { return mString; }

void Conversion::convertChar() const
{
	std::locale loc("C");
	std::cout << "char: ";
	if (getStatus() == IMPOSSIBLE
		|| getValue() > 127
		|| getValue() < 0
		|| !getString().compare("nan"))
		std::cout << "impossible";
	else if (std::isprint(static_cast<char>(getValue()), loc) == true)
		std::cout << static_cast<char>(getValue());
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void Conversion::convertInt() const
{
	std::cout << "int: ";
	if (getStatus() == IMPOSSIBLE
		|| getValue() > std::numeric_limits<int>::max()
		|| getValue() < std::numeric_limits<int>::min()
		|| !getString().compare("nan"))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(getValue());
	std::cout << std::endl;
}

void Conversion::convertFloat() const
{
	std::cout << "float: ";
	if (static_cast<float>(getValue()) - static_cast<int>(getValue()) == 0)
		std::cout << static_cast<float>(getValue()) << ".0";
	else
	{
		if (static_cast<float>(getValue()) >= std::numeric_limits<float>::max())
			std::cout << "+";
		std::cout << static_cast<float>(getValue());
	}
	std::cout << "f" << std::endl;
}

void Conversion::convertDouble() const
{
	std::cout << "double: ";
	if (getStatus() == IMPOSSIBLE)
		std::cout << "nan";
	else if (getValue() - static_cast<int>(getValue()) == 0)
		std::cout << getValue() << ".0";
	else
		std::cout << getValue();
	std::cout << std::endl;
	
}
