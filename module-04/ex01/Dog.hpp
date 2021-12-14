#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#define PRINT(X_X) std::cout << X_X << std::endl

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog const &src);
    virtual ~Dog();

    Dog &operator=(Dog const &rhs);

    const std::string &getType() const;
    void makeSound() const;
    const Brain & getBrain() const;

private:
    Brain *brain;
};

#endif
