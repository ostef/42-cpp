#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *wrong = new WrongAnimal ();
	const WrongAnimal *wrong_cat = new WrongCat ();
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong->makeSound ();
	wrong_cat->makeSound ();

	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete wrong_cat;

	return 0;
}
