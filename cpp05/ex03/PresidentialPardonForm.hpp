#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm (const std::string &target);

	const std::string &getTarget () const;
	virtual void execute (const Bureaucrat &by) const;

private:
	std::string m_target;
};

#endif
