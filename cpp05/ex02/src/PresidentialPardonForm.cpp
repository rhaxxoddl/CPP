#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& name)
: Form(name, SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
: Form(src.getName(), SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}


void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	executable(executor);
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm() {}

const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	setSigned(src.getSigned());
	return *this;
}