#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	class FileAccessException : public std::exception
	{
	public:
		virtual const char *what () const throw ();
	};

public:
	ShrubberyCreationForm (const std::string &target);

	const std::string &getTarget () const;
	virtual void execute (const Bureaucrat &by) const;

private:
	std::string m_target;
};

#endif
