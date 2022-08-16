#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main ()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria *a, *b;
	a = src->createMateria("ice");
	me->equip(a);
	b = src->createMateria("cure");
	me->equip(b);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip (0);
	me->unequip (1);

	// Now that the character has unequipped the items,
	// we should delete them ourselves. Otherwise, it does it itself.
	// If we lose focus of the character, how do we know if
	// it still has items equipped, and if we need to delete them ourselves?
	// Well, we can't and either we leak or the program crashes because of a
	// double free, so this fucking exercise is fucked up, as always.
	delete a;
	delete b;

	delete bob;
	delete me;
	delete src;

	return 0;
}