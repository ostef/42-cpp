#include "identify.hpp"
#include <cstdlib>
#include <iostream>
#include <exception>

Base *generate()
{
	int rand_value = rand () % 3;

	switch (rand_value)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	}

	return NULL;
}

void identify (Base *ptr)
{
	if (dynamic_cast<A *> (ptr))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *> (ptr))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *> (ptr))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify (Base &ref)
{
	try {
		dynamic_cast<A &> (ref);
		std::cout << "A" << std::endl;
	} catch (std::exception &e)	{
		try {
			dynamic_cast<B &> (ref);
			std::cout << "B" << std::endl;
		} catch (std::exception &e)	{
			try {
				dynamic_cast<C &> (ref);
				std::cout << "C" << std::endl;
			} catch (std::exception &e)	{
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}
