#include "Cat.hpp"

Cat::Cat () :
	Animal ("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat (const Cat &other) :
	Animal (other.m_type)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat ()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator = (const Cat &other)
{
	std::cout << "Cat assignment operator" << std::endl;
	m_type = other.m_type;
	
	return *this;
}

void Cat::makeSound () const
{
	std::cout << "MIAOU" << std::endl;
}
