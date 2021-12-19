
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Name", 13);
        
        for (size_t i = 0; i < 200; i++)
            b.decrement();

        std::cout << b;
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
