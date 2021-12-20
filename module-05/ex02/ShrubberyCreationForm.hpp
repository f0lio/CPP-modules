
#pragma once

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    void execute(Bureaucrat const & executor);
private:
std::string target;

};
