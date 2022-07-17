/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:09:02 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/18 08:23:45 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, unsigned int grade);
	Bureaucrat(const Bureaucrat& src);
	const Bureaucrat& operator=(const Bureaucrat& src);
	virtual ~Bureaucrat();
	const std::string& getName() const;
	unsigned int getGrade() const;
	void setName(const std::string& name);
	void setGrade(const unsigned int n);
	void incrementGrade();
	void decrementGrade();
	void signForm(Form& form) const;
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
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& src);

#endif
