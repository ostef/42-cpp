#include "Zombie.hpp"

int main ()
{
	Zombie *naysayer = newZombie ("Naysayer");
	Zombie niels = Zombie ("Niels");
	randomChump ("Mickael Jackson");
	naysayer->announce ();
	delete naysayer;
	niels.announce ();

	return 0;
}
