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

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &origin);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed & operator=(const Fixed &origin);
	~Fixed();
private:
	int	mFixedPointValue;
	static const int	mFractionalBitsValue = 8;
};


 #endif