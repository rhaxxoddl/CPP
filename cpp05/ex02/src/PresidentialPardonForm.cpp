#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& name)
: Form(name, SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
: Form(src.getName(), SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}

const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if (this != &src)
		Form::operator=(src);
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	executable(executor);
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}