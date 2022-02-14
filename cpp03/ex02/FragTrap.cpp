#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap ()
{
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap (const std::string &name) : ClapTrap (name)
{
	std::cout << "FragTrap " << name << " constructor (const std::string &name) called." << std::endl;
}

FragTrap::~FragTrap ()
{
	std::cout << "FragTrap " << m_name << " destructor called." << std::endl;
}

void FragTrap::attack (const std::string &target)
{
	if (m_hit_points > 0 && m_energy_points > 0)
	{
		std::cout << "FragTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!" << std::endl;
		m_energy_points -= 1;
	}
}

void FragTrap::highFiveGuys ()
{
	std::cout << "FragTrap " << m_name << " wants a high five." << std::endl;
}
