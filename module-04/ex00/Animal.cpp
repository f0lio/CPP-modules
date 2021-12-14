#include "Animal.hpp"

Animal::Animal()
{
    PRINT("Animal Default Constructor()");
    type = "Animal";
}

Animal::Animal(const Animal &src)
{
    PRINT("Animal Copy Constructor()");
    type = src.type;
}

Animal::~Animal()
{
    PRINT("Animal Default ~Destructor()");
}

Animal &Animal::operator=(Animal const &rhs)
{
    PRINT("Animal Assignment Operator");
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return *this;
}

const std::string &Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    PRINT("Animal is making a sound or something..");
}
