
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	PRINT("FragTrap: Constructor()");
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
}

FragTrap::~FragTrap()
{
	PRINT("FragTrap: ~Destructor()");
}

FragTrap::FragTrap(FragTrap const & s): ClapTrap(s)
{
	PRINT("FragTrap Copy Constructor()");
	*this = s;
}

FragTrap & FragTrap::operator=(const FragTrap & s) {
	if (this != &s) {
		PRINT("FragTrap Assignment Operator");
		_hit_points =  s._hit_points;
		_energy_points = s._energy_points;
		_attack_dmg = s._attack_dmg;
	}
	return *this;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap: ";
	PRINT("FragTrap " << _name << " attacks " << target
	<< ", causing " << _attack_dmg <<  " points of damage");
}

void FragTrap::guardGate(void)
{
	PRINT("[[ Hi Five!! ]]");
}
