#include "Bureaucrat.hpp"
#include "Form.hpp"

const char *Bureaucrat::GradeTooHighException::what () const throw ()
{
	return "grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what () const throw ()
{
	return "grade is too low";
}

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

void Bureaucrat::signForm (Form &form)
{
	try
	{
		form.beSigned (*this);
		std::cout << m_name << " signed form " << form.getName () << ". " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << m_name << " couldn't sign " << form.getName () << " because " << e.what () << "." << std::endl;
	}
}

void Bureaucrat::executeForm (const Form &form) const
{
	try
	{
		form.execute (*this);
		std::cout << m_name << " executed " << form.getName () << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << m_name << " couldn't execute " << form.getName () << " because " << e.what () << "." << std::endl;
	}
}

std::ostream &operator<< (std::ostream &os, const Bureaucrat &val)
{
	return os << val.getName () << ", bureaucrat grade " << val.getGrade () << ".";
}
