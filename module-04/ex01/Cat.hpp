#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#define PRINT(X_X) std::cout << X_X << std::endl
#define NL std::cout << std::endl;

class Cat : public Animal
{
public:
    Cat();
    Cat(Cat const &src);
    virtual ~Cat();

    Cat &operator=(Cat const &rhs);

    const std::string &getType() const;
    void makeSound() const;

    const Brain &getBrain() const;

private:
    Brain *brain;
};

#endif