
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string);
		Weapon();
		~Weapon();
		void setType(std::string t);
		std::string const & getType();
};

#endif