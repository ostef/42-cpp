#include "Brain.hpp"

Brain::Brain ()
{
	std::cout << "Brain default constructor called." << std::endl;
	for (int i = 0; i < 100; i += 1)
		m_ideas[i] = "";
}

Brain::Brain (const Brain &other)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = other;
}

Brain::~Brain ()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator= (const Brain &other)
{
	std::cout << "Brain assignment operator called." << std::endl;
	for (int i = 0; i < 100; i += 1)
		m_ideas[i] = other.m_ideas[i];

	return *this;
}
