
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	PRINT("Default Constructor()");
}

ClapTrap::ClapTrap(ClapTrap const & c)
{
	PRINT("Copy Constructor()");
	*this = c;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	PRINT("Param' Constructor()");
}

ClapTrap::~ClapTrap()
{
	PRINT("~Destructor()");
}

ClapTrap & ClapTrap:: operator=(ClapTrap const & c)
{
	_name = c._name;
	_hit_points = c._hit_points;
	_energy_points = c._energy_points;
	_attack_dmg = c._attack_dmg;
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	PRINT("ClapTrap " << _name << " attacks " << target << ", causing " << _attack_dmg <<  " points of damage");
}

void ClapTrap::takeDamage(unsigned int amount)
{
	PRINT(_name << " has taken a damage of " << amount);
	_attack_dmg -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	PRINT(_name << " has been repaired, and has " << amount << " energy point");
	_energy_points += amount;
}

std::string ClapTrap::getName() const
{
	return _name;
}

int ClapTrap::getEnergyPoints() const
{
	return _energy_points;
}

int ClapTrap::getHitPoints() const
{
	return _hit_points;
}

int ClapTrap::getAttackDamage() const
{
	return _attack_dmg;
}

std::ostream & operator<<(std::ostream & ostream, ClapTrap const & c)
{
	ostream << c.getName() << " has " << c.getHitPoints() << " hit points, and " << c.getAttackDamage() << " attack damage";
	return ostream;
}
