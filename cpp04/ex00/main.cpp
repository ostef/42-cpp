#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << ">>> Wrong animal tests" << std::endl;

	const WrongAnimal *wrong1 = new WrongAnimal ();
	const WrongCat *wrong_cat = new WrongCat ();
	const WrongAnimal *wrong_cat2 = new WrongCat ();
	wrong1->makeSound ();
	wrong_cat->makeSound ();
	wrong_cat2->makeSound ();

	delete meta;
	delete j;
	delete i;
	delete wrong1;
	delete wrong_cat;
	delete wrong_cat2;

	return 0;
}
