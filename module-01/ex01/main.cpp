
#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(10, "Aristotle");

	for (size_t i = 0; i < 10; i++)
		z[i].announce();
	
	std::cout << "\nDestroying zombies.." << std::endl;
	delete[] z;

	return 0;
}
