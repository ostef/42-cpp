#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure () : AMateria ("cure")
{
}

Cure::Cure (const Cure &other) : AMateria ("cure")
{
	*this = other;
}

Cure::~Cure ()
{
}

Cure &Cure::operator= (const Cure &other)
{
	AMateria::operator= (other);

	return *this;
}

AMateria *Cure::clone () const
{
	return new Cure;
}

void Cure::use (ICharacter &target)
{
	std::cout << "* heals " << target.getName () << "’s wounds *" << std::endl;
}
