/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:09:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/21 13:45:24 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <cstdint>
# include "Data.hpp"

class Serializer
{
public:
	Serializer();
	~Serializer();
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
private:
	Serializer(const Serializer& src);
	Serializer& operator=(const Serializer& src);
};

#endif
