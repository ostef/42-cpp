#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook ()
{
	count = 0;
}

bool PhoneBook::add_contact (Contact contact)
{
	if (count == MAX_CONTACTS)
		return false;
	
	contacts[count] = contact;
	count += 1;
	
	return true;
}

static std::string truncate (const std::string &str, size_t width, const std::string &replace)
{
	if (str.length () > width)
		return str.substr (0, width - replace.length ()) + replace;

	return str;
}

void PhoneBook::display () const
{
	static const char *COLUMNS[] = {
		"index",
		"first name",
		"last name",
		"nickname"
	};

	for (int i = 0; i < 4; i += 1)
		std::cout << "|" << std::setw (10) << std::right << COLUMNS[i];
	std::cout << "|" << std::endl;
	for (int i = 0; i < 4; i += 1)
		std::cout << "===========";
	std::cout << "=" << std::endl;
	for (int i = 0; i < count; i += 1)
	{
		std::cout << "|" << std::setw (10) << std::right << i;
		std::cout << "|" << std::setw (10) << std::right << truncate (contacts[i].first_name, 10, ".");
		std::cout << "|" << std::setw (10) << std::right << truncate (contacts[i].last_name, 10, ".");
		std::cout << "|" << std::setw (10) << std::right << truncate (contacts[i].nickname, 10, ".");
		std::cout << "|" << std::endl; 
	}
}

Contact PhoneBook::get_contact (int index) const
{
	if (index < 0 || index >= count)
		return Contact ();
	return contacts[index];
}

int PhoneBook::get_count () const
{
	return count;
}

bool PhoneBook::is_full () const
{
	return count == MAX_CONTACTS;
}
