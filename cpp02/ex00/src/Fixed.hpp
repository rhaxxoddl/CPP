/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:42 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/28 21:11:13 by sanjeon          ###   ########.fr       */
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
	static int a;
	int idx;
	int	mFixedPointValue;
	static const int	mFractionalBits = 8; // 가수부 비트 개수
};


 #endif