
#include "Phonebook.class.hpp"

void Phonebook::printAllContacts()
{
	std::cout << std::endl;
	std::cout << "   INDEX  |";
	std::cout << "FIRST NAME|";
	std::cout << "LAST NAME |";
	std::cout << " NICKNAME |";
	std::cout << std::endl;
	for (int i = 0; i < _count; i++)
		contacts[i].printInfoRow(i);
	std::cout << std::endl;
}

bool Phonebook::printOneContact()
{
	std::string index;
	int			x;

	while (1)
	{
		std::cout << CONTACT_ID_PROMPT;
		if (!std::getline(std::cin, index))
			return 1;
		x = index[0] - 48;
		if (index.length() != 1 || x > _count - 1 || x < 0)
			std::cout << NO_SUCH_CONTACT << std::endl;
		else
			break ;
	}
	std::cin.clear();
	contacts[x].printAllInfo();
	return 0;
}

bool Phonebook::addContact(int index)
{
	if (_count < CONTACTS_COUNT)
		_count++;
	return contacts[index].setInfo();
}

int Phonebook::getCount()
{
	return _count;
}
