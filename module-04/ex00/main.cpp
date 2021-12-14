
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void whatSound(const Animal *a)
{
	PRINT(a->getType());
	a->makeSound();
}

int main()
{
	const Animal *animal = new Animal();
	const Cat *a_cat = new Cat();
	const Animal *cat = new Cat(*a_cat);
	const Animal *dog = new Dog();
	
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << std::endl;


	std::cout << "-Animal is  : " << animal->getType() << " " << std::endl;
	std::cout << "-Cat is     : " << cat->getType() << " " << std::endl;
	std::cout << "-Dog is     : " << dog->getType() << " " << std::endl;
	std::cout << "-WrongCat is: " << wrongCat->getType() << " " << std::endl;
	
	std::cout << std::endl;

	whatSound(a_cat);

	std::cout << std::endl;


	animal->makeSound();
	cat->makeSound(); // will output the cat sound!
	dog->makeSound();
	wrongCat->makeSound(); // will output the WrongAnimal sound!
	
	std::cout << std::endl;
	
	delete dog;
	Dog a, b;

	a = b;
	a.makeSound();

	std::cout << std::endl;

	std::cout << std::endl;
	delete animal;
	delete a_cat;
	delete cat;
	std::cout << std::endl;

	return 0;
}