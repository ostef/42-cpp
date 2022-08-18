#include "Array.hpp"
#include <string>
#include <iostream>

template<typename T>
void print(const Array<T> &a)
{
	for (size_t i = 0; i < a.size (); i += 1)
		std::cout << a[i] << std::endl;
}

int main()
{
	Array<std::string> a (3);
	a[0] = "Hello";
	a[1] = "Sailor";
	a[2] = "!";
	print (a);

	try {
		a[3] = "BADBADBAD";
	}
	catch (std::exception &e) {
		std::cout << "a[3]: " << e.what () << std::endl;
	}

	std::cout << "==============" << std::endl;

	Array<std::string> b (8);
	b[0] = "There";
	b[1] = "Are";
	b[2] = "69,105";
	b[3] = "Leaves";
	b[4] = "In";
	b[5] = "The";
	b[6] = "Pile";
	b[7] = "!";
	print (b);
	std::cout << "==============" << std::endl;

	a = b;
	print (a);
	std::cout << "==============" << std::endl;
	
	b[2] = "69,106";
	print (b);
	std::cout << "==============" << std::endl;

	return 0;
}
