

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Name", 9);
        std::cout <<  "\n";
        Form x("not a form", 10, 10);
        b.signForm(x);
        std::cout << x << "\n";
        Form y("Forma", 0, 10);
        b.signForm(y);
        std::cout << x << "\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
