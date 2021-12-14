#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define PRINT(X_X) std::cout << X_X << std::endl

class Animal
{
public:
    Animal();
    Animal(Animal const &src);
    virtual ~Animal();

    Animal &operator=(Animal const &rhs);

    virtual const std::string &getType() const;
    virtual void makeSound() const;

protected:
    std::string type;
};

#endif