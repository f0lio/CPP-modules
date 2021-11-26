
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#define BRACKETS(X_X)	"[" << X_X << "]"

int main()
{
	{
		std::cout << std::endl;
		std::cout << "** HumanA **" << std::endl;
		Weapon club = Weapon("crude spiked club");

		std::cout << &club.getType() << std::endl;
		HumanA bob("Bob", club);
		std::cout << &club.getType() << std::endl;
		bob.attack();
		
		club.setType("some other type of club");

		std::cout << club.getType() << " " << BRACKETS(&club.getType()) << std::endl;

		bob.attack();
		
		std::cout << &club.getType() << std::endl;
		std::cout << std::endl;

		
	}
	{
		std::cout << std::endl;
		std::cout << "** HumanB **" << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");

		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		std::cout << &club.getType() << std::endl;
		std::cout << std::endl;
	}
}
