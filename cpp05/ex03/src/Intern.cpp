#include "Intern.hpp"

Intern::Intern(){}


Form* Intern::makeForm(const std::string& formName, const std::string& formTarget)
{
	std::string formArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = -1;
	while (++i < FORM_NUM)
		if (!formArray[i].compare(formName))
			break;
	Form* outForm;
	try
	{
		switch (i)
		{
			case 0:
				outForm = new ShrubberyCreationForm(formTarget);
				break;
			case 1:
				outForm = new RobotomyRequestForm(formTarget);
				break;
			case 2:
				outForm = new PresidentialPardonForm(formTarget);
				break;
			default:
				throw NotExistFormException();
		}
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