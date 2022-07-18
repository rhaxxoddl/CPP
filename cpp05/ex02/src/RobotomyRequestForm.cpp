#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& name)
: Form(name, SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
: Form(src.getName(), SIGNABLE_GRADE, EXECUTABLE_GRADE)
{}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	executable(executor);
	srand(time(NULL));
	if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized: drrrrrrrrrrrrr" << std::endl;
	else
		std::cout << executor.getName() << " is the robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm() {}
const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	setSigned(src.getSigned());
	return *this;
}