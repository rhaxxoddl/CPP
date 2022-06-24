/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeMachine.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:47:36 by sanjeon           #+#    #+#             */
/*   Updated: 2022/06/24 15:39:34 by sanjeon          ###   ########.fr       */
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
	std::string	ProcessString(std::string& base);

public:
	ChangeMachine(std::string before, std::string after);
	void ConvertFile(char *fileName, std::string &line);
	~ChangeMachine();
};

#endif
