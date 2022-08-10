#include "Dog.hpp"

Dog::Dog () :
	Animal ("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog (const Dog &other) :
	Animal (other.m_type)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog ()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator = (const Dog &other)
{
	std::cout << "Dog assignment operator" << std::endl;
	m_type = other.m_type;

	return *this;
}

void Dog::makeSound () const
{
	std::cout << "WAF WAF MOTAFUKA" << std::endl;
}
