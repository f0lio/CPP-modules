#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

#define PRINT(X_X) std::cout << X_X << std::endl

class Form
{
public:
    Form();
    Form(std::string, int, int);
    Form(Form const &src);
    ~Form();
    Form &operator=(Form const &rhs);

	int getSignGrade() const;
	int getExecutionGrade() const ;
    int getStatus() const ;
    void setStatus(bool) ;

    const std::string & getName() const;
    void beSigned(Bureaucrat &);

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
    
    class NotSigned : public std::exception
    {
        const char *what(void) const throw()
        {
            return "Not Signed";
        }
    };

protected:
    std::string name;
    int e_grade;
    int s_grade;
    bool status;
};

std::ostream & operator<<(std::ostream & ostream, Form const & b);

#endif