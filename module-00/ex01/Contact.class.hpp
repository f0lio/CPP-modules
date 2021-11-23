
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include "utils.hpp"

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _darkestSecret;
		std::string _phoneNumber;
	public:
		bool setInfo();
		void printAllInfo();
		void printInfoRow(int index);
};

#endif
