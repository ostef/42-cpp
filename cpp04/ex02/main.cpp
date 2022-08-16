#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define COUNT 10

int main()
{
	Dog scooby;
	Dog doobydoo;
	scooby = doobydoo;

	const Animal *j = new Dog;
	const Animal *i = new Cat;

	delete j;
	delete i;

	//Animal animal;	// This should not compile!

	return 0;
}
