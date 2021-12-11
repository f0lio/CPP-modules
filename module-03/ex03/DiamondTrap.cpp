
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	PRINT("DiamondTrap: Constructor()");
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
}

DiamondTrap::~DiamondTrap()
{
	PRINT("DiamondTrap: ~Destructor()");
}

DiamondTrap::DiamondTrap(DiamondTrap const & s): ClapTrap(s)
{
	PRINT("DiamondTrap Copy Constructor()");
	*this = s;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & s) {
	if (this != &s) {
		PRINT("DiamondTrap Assignment Operator");
		_hit_points =  s._hit_points;
		_energy_points = s._energy_points;
		_attack_dmg = s._attack_dmg;
	}
	return *this;
}
