#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Form f ("form1", 0, 10);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what () << std::endl;
	}
	try {
		Form f ("form1", 1000, 10);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what () << std::endl;
	}
	try {
		Form f ("form1", 10, 0);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what () << std::endl;
	}
	try {
		Form f ("form1", 10, 1000);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what () << std::endl;
	}

	Form f ("form", 10, 9);
	Bureaucrat b ("Clavier", 11);
	try {
		b.signForm (f);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what () << std::endl;
	}

	Bureaucrat b2 ("Le mec qui signe quoi", 9);
	b2.signForm (f);

	return 0;
}
