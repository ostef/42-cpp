#include "Karen.hpp"
#include <iostream>

const char *Karen::LEVELS[] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

Karen::Karen ()
{
}

Karen::~Karen ()
{
}

void Karen::complain (std::string level)
{
	int level_index = -1;
	for (int i = 0; i < 4; i += 1)
	{
		if (level == LEVELS[i])
		{
			level_index = i;

			break;
		}
	}

	switch (level_index)
	{
	case 0:
		std::cout << "[" << LEVELS[0] << "]" << std::endl;
		debug ();
	
	case 1:
		std::cout << "[" << LEVELS[1] << "]" << std::endl;
		info ();

	case 2:
		std::cout << "[" << LEVELS[2] << "]" << std::endl;
		warning ();

	case 3:
		std::cout << "[" << LEVELS[3] << "]" << std::endl;
		error ();
	}
}

void Karen::debug ()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info ()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning ()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error ()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
