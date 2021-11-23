
#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon _w;
	public:
		HumanB(std::string);
		HumanB();
		~HumanB();
		void setName(std::string);
		std::string const & getName();
		void setWeapon(Weapon);
		// void attack();
};

#endif
