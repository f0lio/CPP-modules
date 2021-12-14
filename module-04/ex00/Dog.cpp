#include "Dog.hpp"

Dog::Dog()
{
	PRINT("Dog Default Constructor()");
    type = "Dog";
}

Dog::Dog(const Dog &src)
{
	PRINT("Dog Copy Constructor()");
	type = src.type;
}

Dog::~Dog()
{
	PRINT("Dog Default ~Destructor()");
}

Dog & Dog::operator = (Dog const &rhs)
{
	PRINT("Dog Assignment Operator");
	if (this != &rhs)
	{
		type = rhs.type;
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