#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie (std::string name) : m_name (name)
{
	std::cout << "*creepy music* " << m_name << " was brought back from the dead... *creepy music*" << std::endl;
}

Zombie::~Zombie ()
{
	std::cout << "*creepy music* " << m_name << " went back to the world of the dead... *creepy music*" << std::endl;
}

void Zombie::announce ()
{
	std::cout << m_name << " says BraiiiiiiinnnzzzZ..." << std::endl;
}
