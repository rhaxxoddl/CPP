/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:09:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/14 14:45:49 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string>

class Bureaucrat
{
public:
	Bureaucrat(const std::string& name, unsigned int grade);
	~Bureaucrat();
	const std::string& getName() const;
	unsigned int getGrade() const;
protected:
	const std::string& mName;
	unsigned int mGrade;
	enum eGradeRange{HIGHEST = 1, LOWEST = 150};
private:
	/* data */
};
ostream& ostream::operator<<(const Bureaucrat& src);

#endif
