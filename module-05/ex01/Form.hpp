#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

#define PRINT(X_X) std::cout << X_X << std::endl

class Form
{
public:
    Form();
    Form(std::string, int, int);
    Form(Form const &src);
    ~Form();
     void signForm(const Form&);
    Form &operator=(Form const &rhs);

    class GradeTooHighException : public std::exception

    {
        const char *what(void) const throw()
        {
            return "Grade is too High";
        }
    };

    class GradeTooLowException : public std::exception
    {
        const char *what(void) const throw()
        {
            return "Grade is too Low";
        }
    };

private:
    std::string name;
    int e_grade;
    int s_grade;
    bool status;
};

std::ostream & operator<<(std::ostream & ostream, Form const & b);

#endif