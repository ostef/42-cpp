#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b = Bureaucrat ("Bezos", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what () << std::endl;
	}

	try
	{
		Bureaucrat b = Bureaucrat ("Bezos", 1000);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what () << std::endl;
	}

	try
	{
		Bureaucrat b = Bureaucrat ("Bezos", 5);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what () << std::endl;
	}

	return 0;
}
