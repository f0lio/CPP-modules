
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pr", 25, 5), target(target)
{
    PRINT("PresidentialPardonForm Default Constructor()");
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    PRINT("PresidentialPardonForm Destructor()");
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
    PRINT("PresidentialPardonForm Copy Constructor()");
    name = src.name;
    s_grade = src.s_grade;
    e_grade = src.e_grade;
    status = src.status;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    PRINT("PresidentialPardonForm Assignment Operator");
    if (this != &rhs)
    {
        s_grade = rhs.s_grade;
        e_grade = rhs.e_grade;
        status = rhs.status;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    PRINT("PresidentialPardonForm Executor() called");
    if (this->status == false)
        throw NotSigned();
    PRINT(executor.getName() << " has been pardoned by Zafod Beeblebrox");
}
