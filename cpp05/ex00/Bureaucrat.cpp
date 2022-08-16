#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ()
{}

Bureaucrat::Bureaucrat (const std::string &name, int grade) : m_name (name)
{
	if (grade < 1)
		throw GradeTooHighException ();
	if (grade > 150)
		throw GradeTooLowException ();
	m_grade = grade;
}

Bureaucrat::Bureaucrat (const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat ()
{}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &other)
{
	m_name = other.m_name;
	m_grade = other.m_grade;

	return *this;
}

const std::string &Bureaucrat::getName () const
{
	return m_name;
}

int Bureaucrat::getGrade () const
{
	return m_grade;
}

std::ostream &operator<< (std::ostream &os, const Bureaucrat &val)
{
	return os << val.getName () << ", bureaucrat grade " << val.getGrade () << ".";
}
