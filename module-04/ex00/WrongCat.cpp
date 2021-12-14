#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    PRINT("WrongCat Default Constructor()");
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
    PRINT("WrongCat Copy Constructor()");
    type = src.type;
}

WrongCat::~WrongCat()
{
    PRINT("WrongCat Default ~Destructor()");
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    PRINT("WrongCat Assignment Operator");
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return *this;
}

const std::string &WrongCat::getType() const
{
    return type;
}

void WrongCat::makeSound() const
{
    PRINT("WrongCat is making a sound or something..");
}
