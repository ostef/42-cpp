#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm scf ("my_garden");
	RobotomyRequestForm rrf ("non robotomized dude");
	PresidentialPardonForm prf ("BadGuy");

	Bureaucrat billy ("Billy", 130);
	Bureaucrat better_billy ("Better Billy", 70);
	Bureaucrat magnificent_billy ("Magnificent Billy", 1);

	billy.executeForm (scf);
	billy.signForm (scf);
	billy.executeForm (scf);

	billy.signForm (rrf);
	better_billy.signForm (rrf);
	better_billy.executeForm (rrf);
	magnificent_billy.executeForm (rrf);
	magnificent_billy.executeForm (rrf);
	magnificent_billy.executeForm (rrf);
	magnificent_billy.executeForm (rrf);
	magnificent_billy.executeForm (rrf);
	magnificent_billy.executeForm (rrf);

	magnificent_billy.signForm (prf);
	better_billy.executeForm (prf);
	magnificent_billy.executeForm (prf);

	return 0;
}
