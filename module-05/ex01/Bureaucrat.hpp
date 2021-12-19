#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

#define PRINT(X_X) std::cout << X_X << std::endl


class Form;

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &rhs);

    const std::string &getName() const;
    int getGrade() const;

    void decrement();
    void increment();

    void signForm(Form &);


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
    const std::string name;
    int grade;
};

std::ostream & operator<<(std::ostream & ostream, Bureaucrat const & b);

#endif