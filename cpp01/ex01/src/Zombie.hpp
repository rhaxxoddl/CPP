/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:42 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/22 20:51:53 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
public:
	Zombie();
	Zombie( std::string name);
	~Zombie();
	void	Announce() const;
	std::string	getName() const;
	void		setName(std::string name);

private:
	std::string	mName;
};

Zombie*	zombieHorde( int N, std::string name );

 #endif