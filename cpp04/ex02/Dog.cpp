#include "Dog.hpp"

Dog::Dog () :
	Animal ("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
	m_brain = new Brain;
}

Dog::Dog (const Dog &other) :
	Animal (other.m_type)
{
	std::cout << "Dog copy constructor" << std::endl;
	m_brain = new Brain (*other.m_brain);
}

Dog::~Dog ()
{
	std::cout << "Dog destructor" << std::endl;
	delete m_brain;
}

Dog &Dog::operator = (const Dog &other)
{
	std::cout << "Dog assignment operator" << std::endl;
	Animal::operator= (other);
	if (m_brain)
		*m_brain = *other.m_brain;
	else
		m_brain = new Brain (*other.m_brain);

	return *this;
}

void Dog::makeSound () const
{
	std::cout << "WAF WAF MOTAFUKA" << std::endl;
}
