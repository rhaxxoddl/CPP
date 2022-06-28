/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/28 21:14:04 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int Fixed::a = 0;

Fixed::Fixed()
{
	a++;
	idx = a;
	std::cout << idx << "Fixed Default constructor called" << std::endl;
	mFixedPointValue = 0;
}

Fixed::Fixed(Fixed const &origin)
{
	a++;
	idx = a;
	std::cout << idx << "Fixed Copy constructor called" << std::endl;
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
	std::cout << idx << " Fixed Destructor called" << std::endl;
}