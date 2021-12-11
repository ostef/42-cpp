#include "Zombie.hpp"

int main ()
{
	Zombie *naysayer = newZombie ("Naysayer");
	Zombie niels = Zombie ("Niels");
	randomChump ("Mickael Jackson");
	naysayer->announce ();
	delete naysayer;
	niels.announce ();
	Zombie *horde = zombieHorde (10, "Johnny");
	for (int i = 0; i < 10; i += 1)
		horde[i].announce ();
	delete[] horde;

	return 0;
}
