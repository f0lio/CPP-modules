
#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon & w) : wp(w)
{
	name = n;
}

HumanA::~HumanA() {}

void HumanA::setName(std::string n)
{
	name = n;
}

void HumanA::setWeapon(std::string t)
{
	wp.setType(t);
}

void HumanA::attack()
{	
	std::cout << name << " attacks with his " << wp.getType() << std::endl;
}
