#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm (const std::string &target) :
	Form ("Robotomy Request", 72, 45), m_target (target)
{
}

const std::string &RobotomyRequestForm::getTarget () const
{
	return m_target;
}

void RobotomyRequestForm::execute (const Bureaucrat &by) const
{
	if (by.getGrade () > getGradeToExecute ())
		throw GradeTooLowException ();
	if (!isSigned ())
		throw FormNotSignedException ();

	int rand_value = rand () % 100;

	std::cout << "* BzzzZZzzZZ * * BzzzZZZzZz * * BzzzZZZzz *" << std::endl;
	if (rand_value < 50)
		std::cout << m_target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << "Failed to robotomize " << m_target << "." << std::endl;
}
