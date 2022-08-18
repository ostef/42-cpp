#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form *(*make_form_func) (const std::string &target);

static Form *makeShrubberyCreationForm (const std::string &target)
{
	return new ShrubberyCreationForm (target);
}

static Form *makeRobotomyRequestForm (const std::string &target)
{
	return new RobotomyRequestForm (target);
}

static Form *makePresidentialPardonForm (const std::string &target)
{
	return new PresidentialPardonForm (target);
}

static const make_form_func s_make_form_funcs[] = { makeShrubberyCreationForm, makeRobotomyRequestForm, makePresidentialPardonForm };
static const std::string s_form_names[] = { "Shrubbery Creation", "Robotomy Request", "Presidential Pardon" };

Intern::Intern ()
{}

Intern::Intern (const Intern &other)
{
	(void)other;
}

Intern::~Intern ()
{}

Intern &Intern::operator= (const Intern &other)
{
	(void)other;
	return *this;
}

Form *Intern::makeForm (const std::string &name, const std::string &target)
{
	for (int i = 0; i < (int)(sizeof (s_form_names) / sizeof (s_form_names[0])); i += 1)
	{
		if (name == s_form_names[i])
		{
			std::cout << "Intern creates " << name << " form." << std::endl;
			return (s_make_form_funcs[i]) (target);
		}
	}

	std::cout << "Intern does not know how to create " << name << " form." << std::endl;
	return NULL;
}
