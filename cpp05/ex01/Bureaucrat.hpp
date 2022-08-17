#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what () const throw ();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what () const throw ();
	};

private:
	Bureaucrat ();

public:
	Bureaucrat (const std::string &name, int grade);
	Bureaucrat (const Bureaucrat &other);
	~Bureaucrat ();
	Bureaucrat &operator= (const Bureaucrat &other);

	const std::string &getName () const;
	int getGrade () const;

	void signForm (Form &form);

private:
	std::string m_name;
	int m_grade;
};

std::ostream &operator<< (std::ostream &os, const Bureaucrat &val);

#endif
