#include "ClapTrap.hpp"

int main()
{
	ClapTrap c1;
	ClapTrap c2 = ClapTrap ("DaBaby");
	c1.setAttackDamage (69);
	c1.attack ("Monsieur le controlleur");
	c1.takeDamage (1);
	c2.setAttackDamage (105);
	c2.attack ("Maximus Pepinus");
	c2.takeDamage (100);
	c2.attack ("THIS SHOULDN'T WORK");
	c2.beRepaired (10);
	c2.attack ("Michel");
	return 0;
}
