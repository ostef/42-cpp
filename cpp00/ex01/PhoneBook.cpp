#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook () : m_cursor (0), m_count (0)
{}

void PhoneBook::add_contact (Contact contact)
{
	if (m_count == MAX_CONTACTS)
	{
		m_contacts[m_cursor] = contact;
		m_cursor += 1;
	}
	else
	{
		m_contacts[m_count] = contact;
		m_count += 1;
	}
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
	for (int i = 0; i < m_count; i += 1)
	{
		std::cout << "|" << std::setw (10) << std::right << i;
		std::cout << "|" << std::setw (10) << std::right << truncate (m_contacts[i].first_name, 10, ".");
		std::cout << "|" << std::setw (10) << std::right << truncate (m_contacts[i].last_name, 10, ".");
		std::cout << "|" << std::setw (10) << std::right << truncate (m_contacts[i].nickname, 10, ".");
		std::cout << "|" << std::endl; 
	}
}

Contact PhoneBook::get_contact (int index) const
{
	if (index < 0 || index >= m_count)
		return Contact ();
	return m_contacts[index];
}

int PhoneBook::get_count () const
{
	return m_count;
}

bool PhoneBook::is_full () const
{
	return m_count == MAX_CONTACTS;
}
