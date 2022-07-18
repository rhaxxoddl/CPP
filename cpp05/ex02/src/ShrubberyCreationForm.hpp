#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string& name);
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	virtual ~ShrubberyCreationForm();
	virtual void execute(Bureaucrat const& executor) const;
private:
	enum {SIGNABLE_GRADE = 145, EXECUTABLE_GRADE = 137};
	ShrubberyCreationForm();
	const ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);
};


# endif