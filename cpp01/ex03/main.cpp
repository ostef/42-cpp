#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#include <iostream>
int main ()
{
	Weapon vampire_killer = Weapon ("vampire killer");
	Weapon subweapon = Weapon ("axe");
	Weapon sword = Weapon ("sword");
	{
		HumanA simon = HumanA ("Simon", vampire_killer);
		simon.attack ();
		simon.attack ();
		simon.attack ();
	}
	{
		HumanB richter = HumanB ("Richter");
		richter.attack ();
		subweapon.setType ("holy water");
		richter.setWeapon (&subweapon);
		richter.attack ();
		subweapon.setType ("holy cross");
		richter.attack ();
		richter.setWeapon (&vampire_killer);
		richter.attack ();
		richter.attack ();
	}
	HumanA alucard = HumanA ("Alucard", sword);
	alucard.attack ();
	alucard.attack ();
	alucard.attack ();
	alucard.attack ();

	return 0;
}
