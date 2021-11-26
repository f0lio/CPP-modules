
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

void HumanB::setWeapon(Weapon & w)
{
	wp = &w;
}

void HumanB::attack()
{
	if (wp)
		std::cout << name << " attacks with his " << wp->getType() << std::endl;
	else
		std::cout << name << " attacks with his hands" << std::endl;
}
