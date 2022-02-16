#include "Cat.hpp"

Cat::Cat () : type ("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat (const Cat &other)
{
	std::cout << "Cat copy constructor called." << std::endl;
	type = other.getType ();
}

Cat::~Cat ()
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat &operator = (const Cat &other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	type = other.getType ();

	return *this;
}

void Cat::makeSound () const
{
	std::cout << "Cat says MIAOU MIAOU." << std::endl;
}
