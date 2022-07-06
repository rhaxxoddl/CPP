/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:29:38 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/04 14:45:20 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>

#define IDEAS_SIZE 100
#define DOGCRY "Master, I love you!"
#define CATCRY "Butler, raise me"

class Brain
{
public:
	Brain();
	Brain(Brain& src);
	Brain& operator=(Brain &src);
	~Brain();
private:
	std::string mIdeas[IDEAS_SIZE];
};


#endif