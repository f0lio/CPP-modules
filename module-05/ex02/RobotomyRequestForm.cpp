
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Rb", 72, 45), target(target)
{
    PRINT("RobotomyRequestForm Default Constructor()");
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    PRINT("RobotomyRequestForm Destructor()");
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
    PRINT("RobotomyRequestForm Copy Constructor()");
    name = src.name;
    s_grade = src.s_grade;
    e_grade = src.e_grade;
    status = src.status;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    PRINT("RobotomyRequestForm Assignment Operator");
    if (this != &rhs)
    {
        s_grade = rhs.s_grade;
        e_grade = rhs.e_grade;
        status = rhs.status;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    PRINT("RobotomyRequestForm Executor() called");
    if (this->status == false)
        throw NotSigned();
    if (rand() & 1)
        std::cout << executor.getName() << " has been robotomized successfully\n";
    else
        std::cout << executor.getName() << " couldn't be robotomized!\n";
}
