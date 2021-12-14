#include "Cat.hpp"

Cat::Cat() 
{
    PRINT("Cat Default Constructor()");
    type = "Cat";
}

Cat::Cat( const Cat & src )
{
    PRINT("Cat Copy Constructor()");
    type = src.type;
}


Cat::~Cat()
{
    PRINT("Cat Default ~Destructor()");
}

Cat & Cat::operator = ( Cat const & rhs )
{
    PRINT("Cat Assignment Operator");
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}

const std::string & Cat::getType() const
{
    return type;
}

void Cat::makeSound() const
{
    PRINT("Cat is making a sound or something..");
}