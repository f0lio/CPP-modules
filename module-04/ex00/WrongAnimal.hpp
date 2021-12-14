#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

#define PRINT(X_X) std::cout << X_X << std::endl

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &src);
    virtual ~WrongAnimal();

    WrongAnimal &operator=(WrongAnimal const &rhs);

    const std::string &getType() const;
    void makeSound() const;

protected:
    std::string type;
};

#endif