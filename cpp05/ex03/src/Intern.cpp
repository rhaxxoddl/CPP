#include "Intern.hpp"

Intern::Intern(){}

Form* makeShrubberyForm(const std::string& formTarget) { return new ShrubberyCreationForm(formTarget); }

Form* makeRobotomyForm(const std::string& formTarget) { return new RobotomyRequestForm(formTarget); }

Form* makePresidentialForm(const std::string& formTarget) { return new PresidentialPardonForm(formTarget); }

Form* Intern::makeForm(const std::string& formName, const std::string& formTarget)
{
	std::string formArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (*formConstructorArray[3])(const std::string&) = {makeShrubberyForm, makeRobotomyForm, makePresidentialForm};
	int i = -1;
	while (++i < FORM_NUM)
		if (!formArray[i].compare(formName))
			break;
	Form* outForm;
	try
	{
		if (i < 3)
			outForm = (*formConstructorArray[i])(formTarget);
		else
			throw NotExistFormException();
	}
	catch(const NotExistFormException& e) 
	{
		throw e;
	}
	catch(const std::exception& e)
	{
		throw e;
	}
	std::cout << "Intern creates " << formName << std::endl;
	return outForm;
}

const char* Intern::NotExistFormException::what() const throw()
{
 	return "[ERROR]The form does not exist";
}

Intern::Intern(const Intern& src) { (void)src; }

const Intern& Intern::operator=(const Intern& src)
{
	(void)src;
	return *this;
}

Intern::~Intern()
{}