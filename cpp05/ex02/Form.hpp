#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Form
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

	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char *what () const throw ();
	};


private:
	Form ();
	Form &operator= (const Form &other);

public:
	Form (const std::string &name, int grade_to_sign, int grade_to_execute);
	Form (const Form &other);
	~Form ();

	const std::string &getName () const;
	bool isSigned () const;
	int getGradeToSign () const;
	int getGradeToExecute () const;
	void beSigned (const Bureaucrat &by);
	
	virtual void execute(const Bureaucrat &by) const = 0;

private:
	const std::string m_name;
	const int m_grade_to_sign;
	const int m_grade_to_execute;
	bool m_is_signed;
};

std::ostream &operator<< (std::ostream &os, const Form &val);

#endif
