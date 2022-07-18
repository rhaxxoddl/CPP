#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
#define FORM_NUM 3

class Intern
{
public:
	Intern();
	~Intern();
	// Form* makeShrubberyForm(const std::string& formTarget);
	// Form* makeRobotomyForm(const std::string& formTarget);
	// Form* makePresidentialForm(const std::string& formTarget);
	Form* makeForm(const std::string& formName, const std::string& formTarget);
	class NotExistFormException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
private:
	Intern(const Intern& src);
	const Intern& operator=(const Intern& src);
};

#endif