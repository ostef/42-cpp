#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap ()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap (const std::string &name) : ClapTrap (name)
{
	std::cout << "ScavTrap " << name << " constructor (const std::string &name) called." << std::endl;
}

ScavTrap::~ScavTrap ()
{
	std::cout << "ScavTrap " << m_name << " destructor called." << std::endl;
}

void ScavTrap::attack (const std::string &target)
{
	if (m_hit_points > 0 && m_energy_points > 0)
	{
		std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!" << std::endl;
		m_energy_points -= 1;
	}
}

void ScavTrap::guardGate ()
{
	std::cout << "ScavTrap " << m_name << " entered gate keeper mode (whatever that means)." << std::endl;
}
