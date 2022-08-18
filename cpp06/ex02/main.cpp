#include "identify.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	srand (time (NULL));
	Base *base = generate ();
	identify (base);
	identify (*base);
}
