#include <iostream>
#include <fstream>
#include <string>

static std::string replace_all (
	const std::string &str,
	const std::string &from,
	const std::string &to
)
{
	std::string result = std::string ();
	size_t i = 0;
	while (i < str.length ())
	{
		bool found = true;
		for (size_t j = 0; j < from.length (); j += 1)
		{
			if (i + j >= str.length () || str[i + j] != from[j])
			{
				found = false;
				break;
			}
		}
		if (!found)
		{
			result += str[i];
			i += 1;
		}
		else
		{
			result += to;
			i += from.length ();
		}
	}

	return result;
}

int main (int argc, char **args)
{
	if (argc != 4)
	{
		std::cerr << "Usage: replace filename s1 s2" << std::endl;
		return 1;
	}
	
	std::string filename = std::string (args[1]);
	if (filename.empty ())
	{
		std::cerr << "filename can't be empty." << std::endl;
		return 1;
	}
	
	std::string s1 = std::string (args[2]);
	if (s1.empty ())
	{
		std::cerr << "s1 can't be empty." << std::endl;
		return 1;
	}
	
	std::string s2 = std::string (args[3]);
	if (s2.empty ())
	{
		std::cerr << "s2 can't be empty." << std::endl;
		return 1;
	}
	
	std::ifstream in;
	in.open (filename.c_str ());
	if (!in.good ())
	{
		std::cerr << "Could not open file " << filename << " for reading." << std::endl;
		return 1;
	}
	
	std::ofstream out;
	out.open ((filename + ".replace").c_str ());
	if (!out.good ())
	{
		std::cerr << "Could not open file " << filename << ".replace for writing." << std::endl;
		return 1;
	}
	
	while (in.good ())
	{
		std::string line;
		std::getline (in, line);
		out << replace_all (line, s1, s2);
		if (!in.eof ())
			out << std::endl;
	}

	return 0;
}
