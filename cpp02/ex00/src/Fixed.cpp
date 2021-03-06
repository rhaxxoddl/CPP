/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/29 13:53:06 by sanjeon          ###   ########.fr       */
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

int Fixed::getRawBits(void) const
{
	std::cout << "Fixed getRawBits member function called" << std::endl;
	return mFixedPointValue;
}

void Fixed::setRawBits( int const raw)
{
	mFixedPointValue = raw;
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