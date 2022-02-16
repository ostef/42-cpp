#include "Dog.hpp"

Dog::Dog () : type ("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog (const Dog &other)
{
	std::cout << "Dog copy constructor called." << std::endl;
	type = other.getType ();
}

Dog::~Dog ()
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog &operator = (const Dog &other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	type = other.getType ();

	return *this;
}

void Dog::makeSound () const
{
	std::cout << "Dog says WAF WAF." << std::endl;
}
