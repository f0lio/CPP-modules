

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

#define PRINT(X_X)	std::cout << X_X << std::endl

class ClapTrap
{
	protected:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_dmg;
	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(ClapTrap const &);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const &);

		void attack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);

		std::string getName() const ;
		int getEnergyPoints() const ;
		int getHitPoints() const ;
		int getAttackDamage() const ;
};

std::ostream & operator<<(std::ostream &, ClapTrap const &);

#endif
