
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{


    
    try 
    {
        Bureaucrat b("B", 1);
        Intern hbo_fan_boy;
        Form *f;
        f = hbo_fan_boy.makeForm("robotomy request", "Bender");
        if (f)
        {
            f->beSigned(b);
            f->execute(b);
        }
    }
    catch (std::exception & e)
    {
        std::cout<< e.what() <<std::endl;
    }
        

    return 0;
}
