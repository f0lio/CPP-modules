#include "Form.hpp"

Form::Form()
{
    PRINT("Form Default Constructor()");
}

Form::Form(const std::string & name, int grade) : name(name)
{
    PRINT("Param' Constructor()");
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Form::Form(const Form &src) : name(src.name)
{
    PRINT("Form Copy Constructor()");
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    grade = src.grade;
}

Form::~Form()
{
    PRINT("Form Default ~Destructor()");
}

Form & Form::operator=(Form const &rhs)
{
    PRINT("Form Assignment Operator");
    if (this != &rhs)
    {
        grade = rhs.grade;
    }
    return *this;
}

const std::string &Form::getName() const
{
    return name;
}
int Form:: getGrade() const
{
    return grade;
}

void Form::increment()
{
    grade--;
}
void Form::decrement()
{
    grade++;
}

std::ostream & operator<<(std::ostream & ostream, Form const & b)
{
	ostream << "Name: "  << b.getName() << std::endl;
	ostream << "Grade: " << b.getGrade() << std::endl;
	return ostream;
}
