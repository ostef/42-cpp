#include "WrongCat.hpp"

WrongCat::WrongCat () :
	WrongAnimal ("WrongCat")
{
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat (const WrongCat &other) :
	WrongAnimal (other.m_type)
{
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat::~WrongCat ()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &other)
{
	std::cout << "WrongCat assignment operator" << std::endl;
	m_type = other.m_type;
	
	return *this;
}

void WrongCat::makeSound () const
{
	std::cout << "MIAOU" << std::endl;
}
