#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define PRINT(X_X) std::cout << X_X << std::endl


class Intern
{
public:
    Intern();
    Intern(Intern const &);
    Intern & operator=(Intern const &);
    ~Intern();

    Form *makeForm(std::string, std::string);
};

#endif