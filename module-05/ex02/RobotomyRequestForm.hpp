
#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    void execute(Bureaucrat const &executor);

private:
    std::string target;
};
