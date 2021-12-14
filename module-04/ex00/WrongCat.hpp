#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

#define PRINT(X_X) std::cout << X_X << std::endl

class WrongCat : public WrongAnimal
{

public:
    WrongCat();
    WrongCat(WrongCat const &src);
    ~WrongCat();

    WrongCat &operator=(WrongCat const &rhs);

    const std::string &getType() const;
    void makeSound() const;
};

#endif