#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (const std::string &target) :
	Form ("Presidential Pardon", 25, 5), m_target (target)
{
}

const std::string &PresidentialPardonForm::getTarget () const
{
	return m_target;
}

void PresidentialPardonForm::execute (const Bureaucrat &by) const
{
	if (by.getGrade () > getGradeToExecute ())
		throw GradeTooLowException ();
	if (!isSigned ())
		throw FormNotSignedException ();

	std::cout << m_target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}
