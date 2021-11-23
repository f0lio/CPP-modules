
#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon & w)
{
	name = n;
	_w = w;
}

HumanA::~HumanA() {}

void HumanA::setName(std::string n)
{
	name = n;
}

void HumanA::setWeapon(std::string t)
{
	_w.setType(t);
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << _w.getType() << std::endl;
}
