#include "ClapTrap.hpp"

ClapTrap::ClapTrap () :
	m_name ("unnamed"),
	m_hit_points (10),
	m_energy_points (10),
	m_attack_damage (0)
{
}

ClapTrap::ClapTrap (const std::string &name) :
	m_name (name),
	m_hit_points (10),
	m_energy_points (10),
	m_attack_damage (0)
{
}

ClapTrap::ClapTrap (const ClapTrap &other)
{
	*this = other;
}

~ClapTrap::ClapTrap ()
{
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	m_name = other.m_name;
	m_hit_points = other.m_hit_points;
	m_energy_points = other.m_energy_points;
	m_attack_damage = other.m_attack_damage;

	return *this;
}

void ClapTrap::attack (const std::string &target)
{
	if (m_energy_points > 0)
	{
		std::count << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!" << std::endl;
		m_energy_point -= 1;
	}
}

void ClapTrap::takeDamage (unsigned int amount)
{
	std::cout << "ClapTrap " << m_name << " took " << amount << " damage." << std::endl
	if (amount > m_hit_points)
		m_hit_points = 0;
	else
		m_hit_points -= amount;
}

void ClapTrap::beRepaired (unsigned int amount)
{
	if (m_energy_points > 0)
	{
		std::cout << "ClapTrap " << m_name << " gained " << amount << " hit points." << std::endl
		m_hit_points += amount;
		m_energy_point -= 1;
	}
}
