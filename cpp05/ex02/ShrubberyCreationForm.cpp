#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

const char *ShrubberyCreationForm::FileAccessException::what () const throw ()
{
	return "could not create file";
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string &target) :
	Form ("Shrubbery Creation", 145, 137), m_target (target)
{
}

const std::string &ShrubberyCreationForm::getTarget () const
{
	return m_target;
}

void ShrubberyCreationForm::execute (const Bureaucrat &by) const
{
	if (by.getGrade () > getGradeToExecute ())
		throw GradeTooLowException ();
	if (!isSigned ())
		throw FormNotSignedException ();

	std::ofstream file;
	file.open (m_target + "_shrubbery", std::ios_base::app);
	if (file.fail ())
		throw FileAccessException ();
	
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
}
