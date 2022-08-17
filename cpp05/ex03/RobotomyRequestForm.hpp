#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <random>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm (const std::string &target);

	const std::string &getTarget () const;
	virtual void execute (const Bureaucrat &by) const;

private:
	std::string m_target;
};

#endif
