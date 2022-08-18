#include "iter.hpp"
#include <iostream>

template<typename T>
void print (T &elem, size_t idx)
{
	(void)idx;
	std::cout << elem << std::endl;
}

template<typename T>
void multiply (T &elem, size_t idx)
{
	elem *= static_cast<T> (idx);
}

int main()
{
	int array[] = { 10, 11, 12, 13, 14 };
	iter (array, sizeof (array) / sizeof (array[0]), print);
	std::cout << "===================" << std::endl;
	iter (array, sizeof (array) / sizeof (array[0]), multiply);
	std::cout << "===================" << std::endl;
	iter (array, sizeof (array) / sizeof (array[0]), print);
	std::cout << "===================" << std::endl;

	return 0;
}
