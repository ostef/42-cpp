#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

#ifndef MAX_CONTACTS
# define MAX_CONTACTS 8
#endif

class PhoneBook
{
public:
	PhoneBook ();

	void add_contact (Contact contact);
	void display () const;
	Contact get_contact (int index) const;
	int get_count () const;
	bool is_full () const;

private:
	Contact m_contacts[MAX_CONTACTS];
	int     m_cursor;
	int     m_count;
};

#endif
