
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	PRINT("ScavTrap: Constructor()");
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
}

ScavTrap::~ScavTrap()
{
	PRINT("ScavTrap: ~Destructor()");
}

ScavTrap::ScavTrap(ScavTrap const & s): ClapTrap(s)
{
	PRINT("ScavTrap Copy Constructor()");
	*this = s;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & s) {
	if (this != &s) {
		PRINT("ScavTrap Assignment Operator");
		_hit_points =  s._hit_points;
		_energy_points = s._energy_points;
		_attack_dmg = s._attack_dmg;
	}
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap: ";
	PRINT("ScavTrap " << _name << " attacks " << target
	<< ", causing " << _attack_dmg <<  " points of damage");
}

void ScavTrap::guardGate(void)
{
	PRINT("[[ ScavTrap have entered in Gate keeper mode ]]");
}
