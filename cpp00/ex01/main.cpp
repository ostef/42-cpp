#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <limits>

int main ()
{
	PhoneBook book = PhoneBook ();
	std::string command = std::string ();
	while (true)
	{
		std::cout << ">";
		std::getline (std::cin, command);
		if (command == "ADD")
		{
			if (book.is_full ())
				std::cout << "Cannot add more than " << MAX_CONTACTS << " contacts." << std::endl;
			else
				book.add_contact (Contact::read_from_stdin ());
		}
		else if (command == "SEARCH")
		{
			book.display ();
			int contact_index = 0;
			std::cout << "Which contact do you want to see ? ";
			std::cin >> contact_index;
			// Ignore everything after the number we just read, until the '\n'.
			std::cin.ignore (std::numeric_limits<std::streamsize>::max (), '\n');
			if (contact_index < 0 || contact_index >= book.get_count ())
				std::cout << "Invalid contact index." << std::endl;
			else
				book.get_contact (contact_index).display ();
		}
		else if (command == "EXIT")
			break;
	}
	
	return 0;
}
