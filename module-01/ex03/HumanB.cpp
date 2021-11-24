
#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	name = n;
}

HumanB::HumanB() {}

HumanB::~HumanB() {}

void HumanB::setName(std::string n)
{
	name = n;
}

void HumanB::setWeapon(Weapon w)
{
	_w = &w;
}

void HumanB::attack()
{
	if (_w)
		std::cout << name << " attacks with his " << _w->getType() << std::endl;
	else
		std::cout << name << " attacks with his hands" << std::endl;

}