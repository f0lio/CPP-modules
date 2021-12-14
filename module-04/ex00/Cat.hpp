#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

#define PRINT(X_X) std::cout << X_X << std::endl

class Cat : public Animal
{

public:
    Cat();
    Cat(Cat const &src);
    virtual ~Cat();

    Cat &operator=(Cat const &rhs);

    const std::string &getType() const;
    void makeSound() const;
};

#endif