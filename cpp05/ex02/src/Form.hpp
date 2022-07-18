/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:05:15 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/18 09:03:43 by sanjeon          ###   ########.fr       */
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
	Form();
	Form(const std::string& name, unsigned int signableGrade, unsigned int actionableGrade);
	Form(const Form& src);
	const Form& operator=(const Form& src);
	virtual ~Form();
	const std::string& getName() const;
	bool getSigned() const;
	unsigned int getSignableGrade() const;
	unsigned int getExecutableGrade() const;
	void setSigned(bool sign);
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class UnsignedFormException : public std::exception
	{
		virtual const char* what() const throw();
	};
protected:
	enum eGradeRange{HIGHESTGRADE = 1, LOWESTGRADE = 150};
	void executable(const Bureaucrat& bureaucrat) const;
private:
	const std::string mName;
	bool mSinged;
	const unsigned int mSignableGrade;
	const unsigned int mExecutableGrade;
	
};

std::ostream& operator<<(std::ostream &out, const Form& src);

#endif