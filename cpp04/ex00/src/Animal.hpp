/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:42 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/10 20:37:43 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string inType);
	Animal(Animal &src);
	const std::string &getType()const;
	void setType(std::string inType);
	virtual void makeSound() const;
	Animal& operator=(Animal& src);
	virtual ~Animal();
protected:
	std::string	type;
private:
	/* data */
};

 #endif