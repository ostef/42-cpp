#include "WrongCat.hpp"

WrongCat::WrongCat () : type ("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat (const WrongCat &other)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	type = other.getType ();
}

WrongCat::~WrongCat ()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat &operator = (const WrongCat &other)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	type = other.getType ();

	return *this;
}

void WrongCat::makeSound () const
{
	std::cout << "WrongCat says MIAOU MIAOU." << std::endl;
}
