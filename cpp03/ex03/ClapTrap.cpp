#include "ClapTrap.hpp"

ClapTrap::ClapTrap () :
	m_name ("unnamed"),
	m_hit_points (100),
	m_energy_points (50),
	m_attack_damage (20)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap (const std::string &name) :
	m_name (name),
	m_hit_points (100),
	m_energy_points (50),
	m_attack_damage (20)
{
	std::cout << "ClapTrap " << m_name << " constructor (const std::string &name) called." << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapTrap " << m_name << " destructor called." << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	std::cout << "ClapTrap assignment operator called." << std::endl;
	m_name = other.m_name;
	m_hit_points = other.m_hit_points;
	m_energy_points = other.m_energy_points;
	m_attack_damage = other.m_attack_damage;

	return *this;
}

void ClapTrap::attack (const std::string &target)
{
	if (m_hit_points > 0 && m_energy_points > 0)
	{
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!" << std::endl;
		m_energy_points -= 1;
	}
}

void ClapTrap::takeDamage (unsigned int amount)
{
	if (m_hit_points == 0)
		return;
	if (amount > m_hit_points)
		amount = m_hit_points;
	std::cout << "ClapTrap " << m_name << " took " << amount << " damage." << std::endl;
	m_hit_points -= amount;
}

void ClapTrap::beRepaired (unsigned int amount)
{
	if (m_energy_points > 0)
	{
		std::cout << "ClapTrap " << m_name << " gained " << amount << " hit points." << std::endl;
		m_hit_points += amount;
		m_energy_points -= 1;
	}
}

void ClapTrap::setAttackDamage (unsigned int damage)
{
	m_attack_damage = damage;
}
