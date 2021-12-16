

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Name", 13);
        std::cout << b;
        b.decrement();
        std::cout << b;
        b.increment();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
