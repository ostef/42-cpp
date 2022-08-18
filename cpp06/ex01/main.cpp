#include "serialize_deserialize.hpp"
#include <iostream>

int main()
{
	Data data;
	data.name = "soumanso";
	data.flags = 0xb00b;
	data.x = 69;
	data.y = 105;

	if (deserialize (serialize (&data)) == &data)
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO!" << std::endl;

	return 0;
}
