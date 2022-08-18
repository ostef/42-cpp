#include "templates.hpp"
#include <string>
#include <iostream>

int main()
{
	std::cout << ::min (10, 2) << std::endl;
	std::cout << ::min (10.0, 2.0) << std::endl;
	std::cout << ::min (std::string ("Hello"), std::string ("Sailor")) << std::endl;

	std::cout << ::max (10, 2) << std::endl;
	std::cout << ::max (10.0, 2.0) << std::endl;
	std::cout << ::max (std::string ("Hello"), std::string ("Sailor")) << std::endl;

	std::string a = "Hello";
	std::string b = "Sailor";
	std::cout << "Before: " << a << " " << b << std::endl;
	::swap (a, b);
	std::cout << "After: " << a << " " << b << std::endl;

	return 0;
}
