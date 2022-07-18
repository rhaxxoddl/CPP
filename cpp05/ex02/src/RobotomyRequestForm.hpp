#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string& name);
	RobotomyRequestForm(const RobotomyRequestForm& src);
	virtual ~RobotomyRequestForm();
	virtual void execute(Bureaucrat const& executor) const;
private:
	enum {SIGNABLE_GRADE = 72, EXECUTABLE_GRADE = 45};
	RobotomyRequestForm();
	const RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
};

# endif