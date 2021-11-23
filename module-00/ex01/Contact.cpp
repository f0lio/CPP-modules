
#include "Contact.class.hpp"

bool Contact::setInfo()
{
	std::cout << "-First Name     : ";
	if (!std::getline(std::cin, _firstName))
		return 1;
	std::cout << "-Last Name      : ";	
	if (!std::getline(std::cin, _lastName))
		return 1;
	std::cout << "-Nickname       : ";	
	if (!std::getline(std::cin, _nickname))
		return 1;
	std::cout << "-Phone Number   : ";	
	if (!std::getline(std::cin, _phoneNumber))
		return 1;
	std::cout << "-Darkest secret : ";	
	if (!std::getline(std::cin, _darkestSecret))
		return 1;
	return 0;
}

void Contact::printAllInfo()
{
	std::cout << std::endl;
	std::cout << "-First Name          : "
		<< _firstName << std::endl;
	std::cout << "-Last Name           : "
		<< _lastName << std::endl;
	std::cout << "-Nickname            : "
		<< _nickname << std::endl;
	std::cout << "-Darkest Secret      : "
		<< _darkestSecret << std::endl;
	std::cout << "-Phone Number        : "
		<< _phoneNumber << std::endl;
	std::cout << std::endl;
}

void Contact::printInfoRow(int index)
{
	std::cout << "     " << index << "    |";
	std::cout << formatOutput(_firstName) << "|";
	std::cout << formatOutput(_lastName)  << "|";
	std::cout << formatOutput(_nickname)  << "|";
	std::cout << std::endl;
}
