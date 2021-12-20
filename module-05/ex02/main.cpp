
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{

    try
    {
        Bureaucrat a("A", 1);
        Bureaucrat b("B", 7);

        ShrubberyCreationForm s("S");
        PresidentialPardonForm p("P");
        RobotomyRequestForm r("R");

        p.beSigned(b);

        b.signForm(s);
        b.signForm(r);
        b.signForm(p);

        s.execute(b);
        p.execute(b);
        r.execute(b);

        r.beSigned(b);
        r.execute(b);
        
        s.beSigned(b);
        s.execute(b);

        Bureaucrat x("B", 700);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
