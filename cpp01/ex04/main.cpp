#include <iostream>
#include <string>

int main (int argc, char **args)
{
	if (argc != 4)
		return 1;
	std::string filename = std::string (args[1]);
	if (filename.empty ())
		return 1;
	std::string s1 = std::string (args[2]);
	if (s1.empty ())
		return 1;
	std::string s2 = std::string (args[3]);
	if (s2.empty ())
		return 1;
	std::ifstream in = std::ifstream (filename);
	if (!in.good ())
		return 1;
	std::ofstream out = std::ofstream (filename + ".replace");
	if (!out.good ())
		return 1;
	while (in.good ())
	{
		std::string line;
		std::getline (in, line);
		
	}
	return 0;
}
