#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    PRINT("WrongAnimal Default Constructor()");
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
    PRINT("WrongAnimal Copy Constructor()");
    type = src.type;
}


WrongAnimal::~WrongAnimal()
{
    PRINT("WrongAnimal Default ~Destructor()");
}

WrongAnimal & WrongAnimal::operator = ( WrongAnimal const & rhs )
{
    PRINT("WrongAnimal Assignment Operator");
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}

const std::string & WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    PRINT("WrongAnimal is making a sound or something..");
}