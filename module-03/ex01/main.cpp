
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	ScavTrap b("John");

	a = b;
;
	PRINT(a.getName());

	a.takeDamage(30);
	a.beRepaired(20);

	a.attack("TARGET");
	b.attack("Enemy");
	PRINT(a);
	
	return 0;
}
