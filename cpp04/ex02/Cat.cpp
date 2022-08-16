#include "Cat.hpp"

Cat::Cat () :
	Animal ("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
	m_brain = new Brain;
}

Cat::Cat (const Cat &other) :
	Animal (other.m_type)
{
	std::cout << "Cat copy constructor" << std::endl;
	m_brain = new Brain (*other.m_brain);
}

Cat::~Cat ()
{
	std::cout << "Cat destructor" << std::endl;
	delete m_brain;
}

Cat &Cat::operator = (const Cat &other)
{
	std::cout << "Cat assignment operator" << std::endl;
	Animal::operator= (other);
	if (m_brain)
		*m_brain = *other.m_brain;
	else
		m_brain = new Brain (*other.m_brain);

	return *this;
}

void Cat::makeSound () const
{
	std::cout << "MIAOU" << std::endl;
}
