#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string& name);
	PresidentialPardonForm(const PresidentialPardonForm& src);
	virtual ~PresidentialPardonForm();
	virtual void execute(Bureaucrat const& executor) const;
private:
	enum {SIGNABLE_GRADE = 25, EXECUTABLE_GRADE = 5};
	PresidentialPardonForm();
	const PresidentialPardonForm& operator=(const PresidentialPardonForm& src);
};

# endif