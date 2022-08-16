#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () :
	m_type ("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal (const std::string &type)
{
	std::cout << "WrongAnimal string constructor" << std::endl;
	m_type = type;
}

WrongAnimal::WrongAnimal (const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	m_type = other.m_type;
}

WrongAnimal::~WrongAnimal ()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment operator" << std::endl;
	m_type = other.m_type;
	
	return *this;
}

std::string WrongAnimal::getType () const
{
	return m_type;
}

void WrongAnimal::makeSound () const
{
	std::cout << "HAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
}
