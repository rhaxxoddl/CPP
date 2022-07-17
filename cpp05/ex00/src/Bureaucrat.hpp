/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:09:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/17 12:04:29 by sanjeon          ###   ########.fr       */
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
	void setName(std::string& name);
	void setGrade(unsigned int n);
	void incrementGrade();
	void decrementGrade();
protected:
	std::string mName;
	unsigned int mGrade;
	enum eGradeRange{HIGHESTGRADE = 1, LOWESTGRADE = 150};
private:
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	/* data */
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& src);

#endif
