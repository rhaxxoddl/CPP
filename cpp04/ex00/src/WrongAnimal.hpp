/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:42 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/03 21:55:59 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string inType);
	WrongAnimal(WrongAnimal &src);
	const std::string &getType()const;
	void setType(std::string inType);
	void makeSound() const;
	WrongAnimal& operator=(WrongAnimal& src);
	~WrongAnimal();
protected:
	std::string	type;
private:
	/* data */
};

 #endif