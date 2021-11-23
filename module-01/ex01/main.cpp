
#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(10, "Aristotle");

	for (size_t i = 0; i < 10; i++)
		z[i].announce();
	
	std::cout << "Destroying zombies.." << std::endl;
	for (size_t i = 0; i < 10; i++)
		z[i].~Zombie();
	
	return 0;
}
