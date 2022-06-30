/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:27:01 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/30 11:26:48 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){mFixedPointValue = 0;}
Fixed::Fixed(Fixed const &origin){mFixedPointValue = origin.getRawBits();}
Fixed::Fixed(int const num){mFixedPointValue = num << mFractionalBitsValue;}
Fixed::Fixed(float const num){mFixedPointValue = roundf(num * pow(2, mFractionalBitsValue));}

int Fixed::getRawBits(void) const {return mFixedPointValue;}

void Fixed::setRawBits( int const raw) {mFixedPointValue = raw;}

float Fixed::toFloat( void ) const {return mFixedPointValue / pow(2, mFractionalBitsValue);}

int Fixed::toInt( void ) const {return roundf(mFixedPointValue >> mFractionalBitsValue);}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return a;
	else
		return b;
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return a;
	else
		return b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return a;
	else
		return b;
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return a;
	else
		return b;
}

Fixed & Fixed::operator=(const Fixed &origin)
{
	this->setRawBits(origin.getRawBits());
	return *this;
}

Fixed & Fixed::operator++(void)
{
	mFixedPointValue += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	temp(toFloat());
	mFixedPointValue += 1;
	return temp;
}

Fixed & Fixed::operator--(void)
{
	mFixedPointValue -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	temp(toFloat());
	mFixedPointValue -= 1;
	return temp;
}

Fixed::~Fixed(){}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}

bool operator>(const Fixed &l, const Fixed &r){return l.getRawBits() > r.getRawBits();}

bool operator<(const Fixed &l, const Fixed &r){return l.getRawBits() < r.getRawBits();}

bool operator>=(const Fixed &l, const Fixed &r){return l.getRawBits() >= r.getRawBits();}

bool operator<=(const Fixed &l, const Fixed &r){return l.getRawBits() <= r.getRawBits();}

bool operator==(const Fixed &l, const Fixed &r){return l.getRawBits() == r.getRawBits();}

bool operator!=(const Fixed &l, const Fixed &r){return l.getRawBits() != r.getRawBits();}

Fixed operator+(const Fixed &l, const Fixed &r){return Fixed(l.toFloat() + r.toFloat());}

Fixed operator-(const Fixed &l, const Fixed &r){return Fixed(l.toFloat() - r.toFloat());}

Fixed operator*(const Fixed &l, const Fixed &r){return Fixed(l.toFloat() * r.toFloat());}

Fixed operator/(const Fixed &l, const Fixed &r){return Fixed(l.toFloat() / r.toFloat());}
