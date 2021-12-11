#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB (const std::string &name) : name (name), weapon (NULL)
{
	std::cout << name << " enters the castle of Dracula! *Castlevania music kicks in*" << std::endl;
}

HumanB::~HumanB ()
{
	std::cout << name << " died fighting werewolf boss. *game over music*" << std::endl;
}

void HumanB::attack ()
{
	if (weapon)
		std::cout << name << " attacks werewolf boss with his " << weapon->getType () << std::endl;
	else
		std::cout << name << " is unarmed!" << std::endl;
}

Weapon *HumanB::getWeapon ()
{
	return weapon;
}

void HumanB::setWeapon (Weapon *new_weapon)
{
	std::cout << name << " switches weapon to " << new_weapon->getType () << std::endl;
	weapon = new_weapon;
}
