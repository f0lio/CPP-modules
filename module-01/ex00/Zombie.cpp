
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name <<  " has been destroyed!" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << _name << " Braiiiiiiinnnzzz" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

std::string Zombie::getName()
{
	return _name;
}
