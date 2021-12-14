#include "Cat.hpp"

Cat::Cat() : brain(new Brain)
{
	PRINT("Cat Default Constructor()");
	type = "Cat";
}

Cat::Cat(Cat const & src)
{
	PRINT("Cat Copy Constructor()");
	type = src.type;
	brain = new Brain(*src.brain);
}

Cat::~Cat()
{
	PRINT("Cat Default ~Destructor()");
    delete brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
	PRINT("Cat Assignment Operator");
	if (this != &rhs)
	{
		type = rhs.type;
        brain = new Brain(*rhs.brain);
	}
	return *this;
}

const std::string &Cat::getType() const
{
	return type;
}

void Cat::makeSound() const
{
	PRINT("Cat is making a sound or something..");
}

const Brain &Cat::getBrain() const
{
	return *brain;
}
