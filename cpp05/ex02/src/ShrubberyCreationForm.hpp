#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string& name, unsigned int signableGrade, unsigned int actionableGrade);
	virtual ~ShrubberyCreationForm();
	virtual void execute(Bureaucrat const& executor);
private:
	/* data */
};


# endif