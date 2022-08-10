#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA (const std::string &name, Weapon &weapon) : name (name), weapon (weapon)
{
	std::cout << name << " enters the castle of Dracula with his " << weapon.getType () << "! *Castlevania music kicks in*" << std::endl;
}

HumanA::~HumanA ()
{
	std::cout << name << " died fighting doppleganger. *game over music*" << std::endl;
}

void HumanA::attack ()
{
	std::cout << name << " attacks doppleganger with his " << weapon.getType () << std::endl;
}

Weapon &HumanA::getWeapon ()
{
	return weapon;
}

