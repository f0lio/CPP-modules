
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

#define ACTIONS_PROMPT		"Available actions: ADD, SEARCH, EXIT: "
#define CONTACT_ID_PROMPT	"Enter a contact ID: "
#define INVALID_CONT_ID		"Invalid Contact ID"
#define NO_SUCH_CONTACT		"There is no such contact. Choose an existing ID."
#define NO_CONTACTS_MSG		"There is no contact yet. Try to ADD some."
#define OUTPUT_PADDING		5
#define CONTACTS_COUNT		8

class Phonebook
{
	private:
		Contact contacts[CONTACTS_COUNT];
		int	_count;
	public:
		bool addContact(int index);
		bool printOneContact();
		void printAllContacts();
		int getCount();
};

#endif
