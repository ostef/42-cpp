#include "Animal.hpp"

Animal::Animal () :
	m_type ("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal (const Animal &other)
{
	std::cout << "Animal copy constructor" << std::endl;
	m_type = other.m_type;
}

Animal::Animal (const std::string &type)
{
	std::cout << "Animal string constructor" << std::endl;
	m_type = type;
}

Animal::~Animal ()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator = (const Animal &other)
{
	std::cout << "Animal assignment operator" << std::endl;
	m_type = other.m_type;
	
	return *this;
}

std::string Animal::getType () const
{
	return m_type;
}

void Animal::makeSound () const
{
	std::cout << "HAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
}
