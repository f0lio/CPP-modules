
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define COUNT 4

int main()
{
	{
		PRINT("###############");

		Animal *animals[COUNT];

		PRINT("###############");

		for (size_t i = 0; i < COUNT / 2; i++)
			animals[i] = new Dog();
		for (size_t i = COUNT / 2; i < COUNT; i++)
			animals[i] = new Cat();
		for (size_t i = 0; i < COUNT; i++)
			delete animals[i];
		PRINT("###############");
	}

	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		PRINT("###############");
		delete j;
		delete i;
		PRINT("###############");
	}

	{
		Cat *cat = new Cat();
		Cat *copy = new Cat(*cat);
		PRINT(cat->getBrain());
		delete cat;
		PRINT(copy->getBrain());
	}

	{
		Dog *dog = new Dog();
		Dog *copy = new Dog(*dog);
		NL;
		PRINT(dog->getBrain());
		delete dog;
		NL;
		PRINT(copy->getBrain());
	}

	Dog basic;
	{
		Dog tmp = basic;
	}
	NL;
	PRINT(basic.getBrain());

	return 0;
}