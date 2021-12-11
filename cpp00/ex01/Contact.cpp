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

	std::cout << "First name: ";
	std::getline (std::cin, result.first_name);
	std::cout << "Last name: ";
	std::getline (std::cin, result.last_name);
	std::cout << "Nickname: ";
	std::getline (std::cin, result.nickname);
	std::cout << "Phone number: ";
	std::getline (std::cin, result.phone_number);
	std::cout << "Darkest secret: ";
	std::getline (std::cin, result.darkest_secret);

	return result;
}

void Contact::display () const
{
	std::cout << first_name << " " << last_name << " (aka " << nickname << "): " << phone_number << std::endl;
}
