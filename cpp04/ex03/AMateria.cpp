#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria (const std::string &type) : m_type (type)
{
}

AMateria::AMateria ()
{}

AMateria::AMateria (const AMateria &other) : m_type ("")
{
	m_type = other.m_type;
}

AMateria::~AMateria ()
{
}

AMateria &AMateria::operator= (const AMateria &other)
{
	m_type = other.m_type;

	return *this;
}

const std::string &AMateria::getType () const
{
	return m_type;
}

void AMateria::use (ICharacter &target)
{
	std::cout << "Default implementation of AMateria::use on " << target.getName () << "." << std::endl;
}
