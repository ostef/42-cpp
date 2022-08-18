#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat chadBureaucrat = Bureaucrat ("Chad", 1);
	Intern incelIntern;

	Form *form = incelIntern.makeForm("Shrubbery Creation", "Bender");
	chadBureaucrat.signForm (*form);
	chadBureaucrat.executeForm (*form);

	delete form;

	form = incelIntern.makeForm("Robotomy Request", "Bender");
	chadBureaucrat.signForm (*form);
	chadBureaucrat.executeForm (*form);
	
	delete form;

	form = incelIntern.makeForm("Presidential Pardon", "Bender");
	chadBureaucrat.signForm (*form);
	chadBureaucrat.executeForm (*form);

	delete form;

	form = incelIntern.makeForm("Make PP Bigger", "Bender");
	delete form;

	return 0;
}
