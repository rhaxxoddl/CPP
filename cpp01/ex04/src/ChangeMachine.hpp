/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeMachine.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:47:36 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/23 19:22:32 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHANGEMACHINE_HPP
# define CHANGEMACHINE_HPP
# include <string>

class ChangeMachine
{
private:
	std::string	mBefore;
	std::string	mAfter;
public:
	ChangeMachine(std::string before, std::string after);
	~ChangeMachine();
};

ChangeMachine::ChangeMachine(std::string before, std::string after) : mBefore(before), mAfter(after)
{
}

ChangeMachine::~ChangeMachine()
{
}

 #endif