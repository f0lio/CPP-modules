
#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

# include "FragTrap.hpp"

// class DiamondTrap : public ClapTrap, public FragTrap
class DiamondTrap : public ClapTrap
{
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const &);
		DiamondTrap(std::string const &);
		~DiamondTrap();
		
		DiamondTrap & operator = (const DiamondTrap &);

		void whoAmI(void);
		void swap(DiamondTrap&, DiamondTrap &);
};

#endif
