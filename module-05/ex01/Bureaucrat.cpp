#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    PRINT("Bureaucrat Default Constructor()");
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
    PRINT("Bureaucrat Param' Constructor()");
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name)
{
    PRINT("Bureaucrat Copy Constructor()");
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    grade = src.grade;
}

Bureaucrat::~Bureaucrat()
{
    PRINT("Bureaucrat Default ~Destructor()");
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    PRINT("Bureaucrat Assignment Operator");
    if (this != &rhs)
    {
        grade = rhs.grade;
    }
    return *this;
}

const std::string &Bureaucrat::getName() const
{
    return name;
}
int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increment()
{
    grade--;
}

void Bureaucrat::decrement()
{
    grade++;
}

void Bureaucrat::signForm(Form &f)
{
    f.setStatus(f.getSignGrade() >= grade);
    PRINT(name << (f.getStatus() ? " signs " : " cannot sign ")
               << f.getName() << (f.getStatus() ? "" : " because grade is too low!"));
}

std::ostream &operator<<(std::ostream &ostream, Bureaucrat const &b)
{
    ostream << "Name: " << b.getName() << std::endl;
    ostream << "Grade: " << b.getGrade() << std::endl;
    return ostream;
}
