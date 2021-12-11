#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon (const std::string &type) : type (type)
{
}

Weapon::~Weapon ()
{
}

const std::string &Weapon::getType () const
{
	return type;
}

void Weapon::setType (const std::string &new_type)
{
	std::cout << type << " is now " << new_type << "." << std::endl;
	type = new_type;
}
