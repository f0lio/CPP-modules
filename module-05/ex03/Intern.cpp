
#include "Intern.hpp"

Intern::Intern()
{
    PRINT("Intern Default Constructor()");
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern()
{
    PRINT("Intern Destructor()");
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
    {
        PRINT("Assignment Op called!");
    }
    return *this;
}

Form *Intern::makeForm(std::string request, std::string name)
{
    std::string msg[3] =
        {
            "presidential pardon",
            "robotomy request",
            "shrubbery creation"
        };
    try
    {
        for (int i = 0; i < 3; i++)
            if (msg[i] == request)
                throw i;
        std::cout << "The requested Form is not Found" << std::endl;
    }
    catch (int target)
    {
        std::cout << target << std::endl;
        switch (target)
        {
        case 0:
            std::cout << "Intern creates PresidentialPardonForm" << std::endl;
            return new PresidentialPardonForm(name);
        case 1:
            std::cout << "Intern creates RobotomyRequestForm" << std::endl;
            return new RobotomyRequestForm(name);
        case 2:
            std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
            return new ShrubberyCreationForm(name);
        }
    }
    return NULL;
}
