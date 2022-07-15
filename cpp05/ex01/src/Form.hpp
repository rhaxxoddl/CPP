/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:05:15 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/15 21:07:16 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <exception>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
public:
	Form(const std::string& name, unsigned int signableGrade, unsigned int actionableGrade);
	~Form();
	const std::string& getName() const;
	bool getSigned() const;
	unsigned int getActionableGrade() const;
	unsigned int getSignableGrade() const;
	void setSigned(bool sign);
	void beSigned(const Bureaucrat& bureaucrat);
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