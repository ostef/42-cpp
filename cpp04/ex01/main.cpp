#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define COUNT 10

int main()
{
	Animal *animal[COUNT];
	for (int i = 0; i < COUNT / 2; i += 1)
		animal[i] = new Dog;
	for (int i = COUNT / 2; i < COUNT; i += 1)
		animal[i] = new Cat;

	for (int i = 0; i < COUNT; i += 1)
		delete animal[i];

	Dog scooby;
	Dog doobydoo;
	scooby = doobydoo;

	const Animal *j = new Dog;
	const Animal *i = new Cat;

	delete j;
	delete i;

	return 0;
}
