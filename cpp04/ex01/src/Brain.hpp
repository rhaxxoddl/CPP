/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:29:38 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/10 19:19:00 by sanjeon          ###   ########.fr       */
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
	Brain(Brain& src);
	Brain& operator=(Brain &src);
	~Brain();
private:
	std::string mIdeas[IDEAS_SIZE];
};

void copyIdeas(std::string* dest, const std::string* src);
void printIdeas(std::string* ideas);

#endif