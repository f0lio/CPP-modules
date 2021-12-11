
#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &);
		ScavTrap(std::string const &);
		~ScavTrap();
		
		ScavTrap & operator=(const ScavTrap &);

		void attack(std::string const &);
		void guardGate();
};

#endif
