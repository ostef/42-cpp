#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () :
	ClapTrap (),
	m_name ("unnamed")
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap (const std::string &name, const std::string &clap_name) :
	ClapTrap (clap_name),
	m_name (name)
{
	std::cout << "DiamondTrap " << name << " constructor (const std:string &name, const std::string &clap_name) called." << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap ()
{
	std::cout << "DiamondTrap " << m_name << " destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &other)
{
	ClapTrap::operator = (other);
	std::cout << "DiamondTrap assignment operator called." << std::endl;
	m_name = other.m_name;

	return *this;
}

void DiamondTrap::whoAmI ()
{
	std::cout << "I am " << m_name << " as a DiamonTrap, but deep inside, I know I am " << ClapTrap::m_name << " as a ClapTrap." << std::endl;
}
