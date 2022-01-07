
#include "span.hpp"

int main()
{
        Span sp = Span(5);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "\n-- Normal test -- " << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;


    std::cout << "\n-- BIG container test -- " << std::endl;
    {
        Span sp = Span((int)1e5);
        for (size_t i = 0; i < 1e5; i++)
            sp.addNumber(i);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }

    std::cout << "\nAdd using a range" << std::endl;
    {
        Span sp = Span((int)100);
        std::vector<int> vec(100);

        sp.addNumber(vec.begin(), vec.end());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    }

    std::cout << "\nExceeding the container's limit" << std::endl;
    try
    {
        sp.addNumber(23131);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
