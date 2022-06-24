/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeMachine.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:47:36 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/24 16:05:12 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHANGEMACHINE_HPP
#define CHANGEMACHINE_HPP
#include <string>

class ChangeMachine
{
private:
	std::string mBefore;
	std::string mAfter;
	void	ProcessString(std::string& base);

public:
	ChangeMachine(std::string before, std::string after);
	void ConvertFile(char *fileName);
	~ChangeMachine();
};

#endif
