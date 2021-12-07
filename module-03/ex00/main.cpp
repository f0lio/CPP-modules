
#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Gamma");

	std::cout << "-- Copy constructor --\n";

	ClapTrap b(a);

	std::cout << "-- -------------------- --\n\n";
	
	std::cout << "-- Param' Constructor --\n";

	ClapTrap c("Alpha");
	
	std::cout << "-- -------------------- --\n\n";
	
	std::cout << "-- Member functions --\n";
	
	a.attack("Alpha");
	
	a.takeDamage(30);
	a.beRepaired(20);
	
	std::cout << "-- -------------------- --\n\n";
	std::cout << "-- Copy Assignment Operator --\n";
	
	a = b;
	
	std::cout << "-- -------------------- --\n\n";
	
	std::cout << "-- ostream overloading --\n";

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << "-- -------------------- --\n\n";

	return 0;
}
