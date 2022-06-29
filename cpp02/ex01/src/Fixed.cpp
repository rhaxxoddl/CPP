/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/29 16:28:05 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed Default constructor called" << std::endl;
	mFixedPointValue = 0;
}

Fixed::Fixed(Fixed const &origin)
{
	std::cout << "Fixed Copy constructor called" << std::endl;
	mFixedPointValue = origin.getRawBits();
}
Fixed::Fixed(int const num)
{
	mFixedPointValue = num << mFractionalBitsValue;
}

Fixed::Fixed(float const num)
{
	mFixedPointValue = roundf(num * pow(2, mFractionalBitsValue));
}

int Fixed::getRawBits(void) const
{
	std::cout << "Fixed getRawBits member function called" << std::endl;
	return mFixedPointValue;
}

void Fixed::setRawBits( int const raw)
{
	mFixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
	std::cout << "Float constructor called" << std::endl;
	return mFixedPointValue / pow(2, mFractionalBitsValue);
}

int Fixed::toInt( void ) const
{
	std::cout << "Int constructor called" << std::endl;
	return roundf(mFixedPointValue >> mFractionalBitsValue);
}


Fixed & Fixed::operator=(const Fixed &origin)
{
	std::cout << "Fixed Copy assignment operator called" << std::endl;
	this->setRawBits(origin.getRawBits());
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}
