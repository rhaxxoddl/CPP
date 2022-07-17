/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:05:15 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/17 13:41:48 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <exception>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(const std::string& name, unsigned int signableGrade, unsigned int actionableGrade);
	virtual ~Form();
	const std::string& getName() const;
	bool getSigned() const;
	unsigned int getSignableGrade() const;
	unsigned int getActionableGrade() const;
	void setSigned(bool sign);
	void beSigned(const Bureaucrat& bureaucrat);
protected:
	enum eGradeRange{HIGHESTGRADE = 1, LOWESTGRADE = 150};
private:
	const std::string mName;
	bool mSinged;
	const unsigned int mSignableGrade;
	const unsigned int mActionableGrade;
	struct GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
};

std::ostream& operator<<(std::ostream &out, const Form& src);

#endif