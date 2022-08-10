#include "Karen.hpp"

int main (int argc, char **args)
{
	if (argc != 2)
		return 1;
	
	Karen karen = Karen ();
	karen.complain (args[1]);
	
	return 0;
}
