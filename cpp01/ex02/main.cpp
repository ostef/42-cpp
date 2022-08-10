#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "&str       is " << &str << std::endl;
	std::cout << "stringPTR  is " << stringPTR << std::endl;
	std::cout << "&stringREF is " << &stringREF << std::endl;
	std::cout << "*stringPTR is " << *stringPTR << std::endl;
	std::cout << "stringREF  is " << stringREF << std::endl;

	return 0;
}
