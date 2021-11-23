
#include "Phonebook.class.hpp"

int main(void)
{
	std::string	cmd;
	Phonebook	pb;
	short 		i;

	i = 0;
	while (1)
	{
		std::cout << ACTIONS_PROMPT;
		if (!std::getline(std::cin, cmd))
			break ;
		if (cmd == "ADD")
		{
			if (i == CONTACTS_COUNT)
				i %= CONTACTS_COUNT;
			if (pb.addContact(i))
				return 1;
			i++;
		}
		else if (cmd == "SEARCH")
		{
			if (pb.getCount())
			{
				pb.printAllContacts();
				if (pb.printOneContact())
					break ;
			}
			else
				std::cout << NO_CONTACTS_MSG << std::endl;
		}
		else if (cmd == "EXIT")
			return 0;
	}
    return 0;
}
