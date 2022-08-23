#include "Span.hpp"
#include <iostream>

int main ()
{
	{
		Span span (10);

		span.addNumber (1);
		span.addNumber (2);
		span.addNumber (3);
		span.addNumber (4);

		if (span.shortestSpan () == 1)
			std::cout << "OK" << std::endl;
		else
			std::cout << "KO" << std::endl;

		if (span.longestSpan () == 3)
			std::cout << "OK" << std::endl;
		else
			std::cout << "KO" << std::endl;
	}
	{
		Span span (3);
		span.addNumber (0);
		span.addNumber (0);
		span.addNumber (0);
		try { span.addNumber (0); }
		catch (std::exception &e) { std::cout << "Error: " << e.what () << std::endl; }
	}
	{
		Span span (1);
		span.addNumber (0);
		try { span.shortestSpan (); }
		catch (std::exception &e) { std::cout << "Error: " << e.what () << std::endl; }
		try { span.longestSpan (); }
		catch (std::exception &e) { std::cout << "Error: " << e.what () << std::endl; }
	}
	{
		int numbers[] = { 4, 69, 12, 6, 93, 14, 37 };
		Span span (10);
		span.addNumbers (numbers, numbers + (sizeof (numbers) / sizeof (numbers[0])));

		if (span.shortestSpan () == 2)
			std::cout << "OK" << std::endl;
		else
			std::cout << "KO" << std::endl;

		if (span.longestSpan () == 89)
			std::cout << "OK" << std::endl;
		else
			std::cout << "KO" << std::endl;
	}

	return 0;
}
