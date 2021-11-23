
#include "Zombie.hpp"

int main()
{
	Zombie *zh;

	std::cout << "\nHeap" << std::endl;
	std::cout << "-------" << std::endl;
	zh = new Zombie("Alpha");
	std::cout << zh->getName() << std::endl;
	zh->announce();
	delete zh;
	std::cout << "-------------" << std::endl;

	std::cout << "\nStack" << std::endl;
	std::cout << "-------" << std::endl;
	Zombie zs = Zombie("Beta");
	zs.~Zombie();
	std::cout << "-------------" << std::endl;

	std::cout << "\nNew function:" << std::endl;
	std::cout << "-------" << std::endl;
	Zombie *zn = newZombie("Delta");
	std::cout << zn->getName() << std::endl;
	delete zh;

	std::cout << "-------------" << std::endl;

	std::cout << "\nStack auto destroy:" << std::endl;
	std::cout << "-------" << std::endl;
	randomChump("Gamma");
	std::cout << "-------------" << std::endl;

	return 0;
}
