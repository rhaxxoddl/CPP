/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:08:59 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/21 13:36:25 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer() {}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* Serializer::deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }
