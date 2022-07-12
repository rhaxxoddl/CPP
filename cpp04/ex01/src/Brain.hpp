/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:29:38 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/12 19:41:27 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

#define IDEAS_SIZE 100
#define FIRSTIDEA "Master, I love you~"
#define SECONDIDEA "Butler, raise me."
#define THIRDIDEA "I'm hungry!!"

class Brain
{
public:
	Brain();
	Brain(const Brain& src);
	Brain& operator=(const Brain &src);
	virtual ~Brain();
private:
	std::string mIdeas[IDEAS_SIZE];
};

#endif