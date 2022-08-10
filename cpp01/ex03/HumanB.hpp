#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	HumanB (const std::string &name);
	~HumanB ();

	void attack ();
	Weapon *getWeapon ();
	void setWeapon (Weapon *new_weapon);

private:
	std::string name;
	Weapon *weapon;
};

#endif
