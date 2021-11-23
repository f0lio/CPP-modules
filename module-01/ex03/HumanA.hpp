
#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon _w;
	public:
		HumanA(std::string, Weapon &);
		~HumanA();
		void setName(std::string);
		std::string const & getName();
		void setWeapon(std::string);
		void attack();
};

#endif
