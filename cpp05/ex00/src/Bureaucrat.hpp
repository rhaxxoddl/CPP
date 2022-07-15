/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:09:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/15 18:41:11 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

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
	struct GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	struct GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	/* data */
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& src);

#endif
