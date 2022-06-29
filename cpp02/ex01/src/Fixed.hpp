/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:42 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/29 14:42:16 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &origin);
	Fixed(int const num);
	Fixed(float const num);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed & operator=(const Fixed &origin);
	~Fixed();
private:
	int	mFixedPointValue;
	static const int	mFractionalBitsValue = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);


 #endif