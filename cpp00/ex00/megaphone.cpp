#include <iostream>

int main (int argc, char **args)
{
	if (argc == 1)
		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i += 1)
		for (int j = 0; args[i][j]; j += 1)
			std::cout << (char)std::toupper (args[i][j]);
	std::cout << std::endl;
	return 0;
}
