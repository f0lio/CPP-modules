#include "Dog.hpp"

Dog::Dog() : brain(new Brain)
{
	PRINT("Dog Default Constructor()");
    type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	PRINT("Dog Copy Constructor()");
	type = src.type;
    brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	PRINT("Dog Default ~Destructor()");
    delete brain;
}

Dog & Dog::operator = (Dog const &rhs)
{
	PRINT("Dog Assignment Operator");
	if (this != &rhs)
	{
		type = rhs.type;
        brain = new Brain(*rhs.brain);
	}
	return *this;
}

const std::string &Dog::getType() const
{
	return type;
}

void Dog::makeSound() const
{
	PRINT("Dog is making a sound or something..");
}

const Brain &Dog::getBrain() const {
	return *brain;
}
