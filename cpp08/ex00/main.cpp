#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 100; i += 1)
		vec.push_back (i);

	std::vector<int>::iterator it = easyfind (vec, 10);
	if (it == vec.end () || *it != 10)
		std::cout << "KO" << std::endl;
	else
		std::cout << "OK" << std::endl;
	it = easyfind (vec, 150);
	if (it == vec.end ())
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO" << std::endl;

	return 0;
}
