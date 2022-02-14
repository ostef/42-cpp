#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "========== ClapTrap ==========" << std::endl;
	ClapTrap c1;
	std::cout << "===" << std::endl;
	ClapTrap c2 = ClapTrap ("DaBaby");
	std::cout << "===" << std::endl;
	c1.setAttackDamage (69);
	std::cout << "===" << std::endl;
	c1.attack ("Monsieur le controlleur");
	std::cout << "===" << std::endl;
	c1.takeDamage (1);
	std::cout << "===" << std::endl;
	c2.setAttackDamage (105);
	std::cout << "===" << std::endl;
	c2.attack ("Maximus Pepinus");
	std::cout << "===" << std::endl;
	c2.takeDamage (1000);
	std::cout << "===" << std::endl;
	c2.attack ("THIS SHOULDN'T WORK");
	std::cout << "===" << std::endl;
	c2.beRepaired (10);
	std::cout << "===" << std::endl;
	c2.attack ("Michel");

	std::cout << "========== ScavTrap ==========" << std::endl;
	ScavTrap scav;
	std::cout << "===" << std::endl;
	scav = ScavTrap ("Scoobydoo");
	std::cout << "===" << std::endl;
	scav.attack ("Un mec random");
	std::cout << "===" << std::endl;
	scav.guardGate ();

	std::cout << "========== FragTrap ==========" << std::endl;
	FragTrap frag;
	std::cout << "===" << std::endl;
	frag = FragTrap ("Scoobydoo but different");
	std::cout << "===" << std::endl;
	frag.attack ("Un mec random");
	std::cout << "===" << std::endl;
	frag.highFiveGuys ();

	std::cout << "========== DiamondTrap ==========" << std::endl;
	DiamondTrap diamond;
	std::cout << "===" << std::endl;
	diamond = DiamondTrap ("I wanna die", "but I wanna live");
	std::cout << "===" << std::endl;
	diamond.attack ("Socrate");
	std::cout << "===" << std::endl;
	diamond.whoAmI ();

	return 0;
}
