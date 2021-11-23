#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;	
	public:
		Zombie();
		Zombie(std::string);
		~Zombie();
		void announce( void );
		void setName(std::string);
		std::string getName();
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name );

#endif
