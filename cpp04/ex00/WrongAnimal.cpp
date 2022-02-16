#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () : type ("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	type = other.getType ();
}

WrongAnimal::~WrongAnimal ()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal &operator = (const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	type = other.getType ();

	return *this;
}

void WrongAnimal::makeSound () const
{
	std::cout << "WrongAnimal makes a sound." << std::endl;
}

std::string WrongAnimal::getType () const
{
	return type;
}
