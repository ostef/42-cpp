#include "Animal.hpp"

Animal::Animal () : type ("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal (const Animal &other)
{
	std::cout << "Animal copy constructor called." << std::endl;
	type = other.getType ();
}

Animal::~Animal ()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal &operator = (const Animal &other)
{
	std::cout << "Animal assignment operator called." << std::endl;
	type = other.getType ();

	return *this;
}

void Animal::makeSound () const
{
	std::cout << "Animal makes a sound." << std::endl;
}

std::string Animal::getType () const
{
	return type;
}
