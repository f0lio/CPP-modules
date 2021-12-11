
#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const &);
		FragTrap(std::string const &);
		~FragTrap();
		
		FragTrap & operator=(const FragTrap &);

		void attack(std::string const &);
        void highFivesGuys(void);
		void guardGate(void);
};

#endif
