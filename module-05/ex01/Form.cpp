#include "Form.hpp"

Form::Form()
{
    PRINT("Form Default Constructor()");
}

Form::Form  (std::string  name, int s_grade, int e_grade) : name(name)
{
    PRINT("Form Param' Constructor()");
    if (s_grade > 150 || e_grade > 150)
        throw GradeTooLowException();
    else if (s_grade < 1 || e_grade < 1)
        throw GradeTooHighException();
    this->s_grade = s_grade;
    this->e_grade = e_grade;
    status = false;
}

Form::Form(const Form &src) : name(src.name)
{
    PRINT("Form Copy Constructor()");
    if (s_grade > 150 || e_grade > 150)
        throw GradeTooLowException();
    else if (s_grade < 1 || e_grade < 1)
        throw GradeTooHighException();
    s_grade = src.s_grade;
    e_grade = src.e_grade;
    status = src.status;
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
        s_grade = rhs.s_grade;
        e_grade = rhs.e_grade;
        status =  rhs.status;
    }
    return *this;
}

const std::string &Form::getName() const
{
    return name;
}

int Form::getSignGrade() const
{
    return s_grade;
}

int Form::getExecutionGrade() const 
{
    return e_grade;
}

int Form::getStatus() const 
{
    return status;
}

void Form::setStatus(bool st)
{
    this->status = st;
}

std::ostream & operator<<(std::ostream & ostream, Form const & b)
{
	ostream << "Form details: "  << std::endl;
	ostream << "Name: "  << b.getName() << std::endl;
	ostream << "Grade: " << b.getSignGrade() << std::endl;
	ostream << "Execution: " << b.getExecutionGrade() << std::endl;
	ostream << "Status: " <<( b.getStatus() ? "signed" : "not signed")  << std::endl;
	return ostream;
}
