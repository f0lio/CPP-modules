
#include "Weapon.hpp"
	
Weapon::Weapon(std::string t)
{
	type = t;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}

void Weapon::setType(std::string t)
{
	type = t;
}

std::string const & Weapon::getType()
{
	return type;
}