#include "Form.hpp"
#include "Bureaucrat.hpp"

const char *Form::GradeTooHighException::what () const throw ()
{
	return "grade is too high";
}

const char *Form::GradeTooLowException::what () const throw ()
{
	return "grade is too low";
}

const char *Form::FormNotSignedException::what () const throw ()
{
	return "form is not signed";
}

Form::Form () :
	m_name (""),
	m_grade_to_sign (0),
	m_grade_to_execute (0),
	m_is_signed (false)
{}

Form &Form::operator= (const Form &other)
{
	(void)other;
	return *this;
}

Form::Form (const std::string &name, int grade_to_sign, int grade_to_execute) :
	m_name (name),
	m_grade_to_sign (grade_to_sign),
	m_grade_to_execute (grade_to_execute),
	m_is_signed (false)
{
	if (m_grade_to_sign < 1)
		throw GradeTooHighException ();
	if (m_grade_to_sign > 150)
		throw GradeTooLowException ();
	if (m_grade_to_execute < 1)
		throw GradeTooHighException ();
	if (m_grade_to_execute > 150)
		throw GradeTooLowException ();
}

Form::Form (const Form &other) :
	m_name (other.m_name),
	m_grade_to_sign (other.m_grade_to_sign),
	m_grade_to_execute (other.m_grade_to_execute),
	m_is_signed (other.m_is_signed)
{
	if (m_grade_to_sign < 1)
		throw GradeTooHighException ();
	if (m_grade_to_sign > 150)
		throw GradeTooLowException ();
	if (m_grade_to_execute < 1)
		throw GradeTooHighException ();
	if (m_grade_to_execute > 150)
		throw GradeTooLowException ();
}

Form::~Form ()
{}

const std::string &Form::getName () const
{
	return m_name;
}

bool Form::isSigned () const
{
	return m_is_signed;
}

int Form::getGradeToSign () const
{
	return m_grade_to_sign;
}

int Form::getGradeToExecute () const
{
	return m_grade_to_execute;
}

void Form::beSigned (const Bureaucrat &by)
{
	if (by.getGrade () > m_grade_to_sign)
		throw GradeTooLowException ();
	m_is_signed = true;
}

std::ostream &operator<< (std::ostream &os, const Form &val)
{
	return os << "Form " << val.getName () << ", needs grade " << val.getGradeToSign () << " to be signed, and grade " << val.getGradeToExecute () << " to execute. " << (val.isSigned () ? "Signed." : "Not signed.");
}
