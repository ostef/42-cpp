#include "Contact.hpp"
#include <iostream>

Contact::Contact ()
{
	first_name     = std::string ();
	last_name      = std::string ();
	nickname       = std::string ();
	phone_number   = std::string ();
	darkest_secret = std::string ();
}

Contact::Contact (
	std::string first_name,
	std::string last_name,
	std::string nickname,
	std::string phone_number,
	std::string darkest_secret
) :
	first_name (first_name),
	last_name (last_name),
	nickname (nickname),
	phone_number (phone_number),
	darkest_secret (darkest_secret)
{
}

Contact Contact::read_from_stdin ()
{
	Contact result = Contact ();

	while (result.first_name.empty () && std::cin.good ())
	{
		std::cout << "First name: ";
		std::getline (std::cin, result.first_name);
		if (result.first_name.empty ())
			std::cout << "You must enter a non empty string!" << std::endl;
	}

	while (result.last_name.empty () && std::cin.good ())
	{
		std::cout << "Last name: ";
		std::getline (std::cin, result.last_name);
		if (result.last_name.empty ())
			std::cout << "You must enter a non empty string!" << std::endl;
	}

	while (result.nickname.empty () && std::cin.good ())
	{
		std::cout << "Nickname: ";
		std::getline (std::cin, result.nickname);
		if (result.nickname.empty ())
			std::cout << "You must enter a non empty string!" << std::endl;
	}

	while (result.phone_number.empty () && std::cin.good ())
	{
		std::cout << "Phone number: ";
		std::getline (std::cin, result.phone_number);
		if (result.phone_number.empty ())
			std::cout << "You must enter a non empty string!" << std::endl;
	}

	while (result.darkest_secret.empty () && std::cin.good ())
	{
		std::cout << "Darkest secret: ";
		std::getline (std::cin, result.darkest_secret);
		if (result.darkest_secret.empty ())
			std::cout << "You must enter a non empty string!" << std::endl;
	}

	return result;
}

void Contact::display () const
{
	std::cout << first_name << " " << last_name << " (aka " << nickname << "): " << phone_number << std::endl;
}
