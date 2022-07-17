/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:05:15 by sanjeon           #+#    #+#             */
/*   Updated: 2022/07/17 21:17:19 by sanjeon          ###   ########.fr       */
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
	unsigned int getExecutableGrade() const;
	void setSigned(bool sign);
	void setSignableGrade(unsigned int signableGrade);
	void setExecutableGrade(unsigned int actionableGrade);
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
protected:
	enum eGradeRange{HIGHESTGRADE = 1, LOWESTGRADE = 150};
	unsigned int mExecutableGrade;
private:
	const std::string mName;
	bool mSinged;
	unsigned int mSignableGrade;
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