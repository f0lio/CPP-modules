
#include "Array.hpp"

int main()
{

    Array<int> a(10);

    std::cout << "\nNormal Test:" << std::endl;
    std::cout << "size: " << a.size() << std::endl;
    for (unsigned int i = 0; i < a.size(); i++)
        a[i] = i;

    Array<int> b(a);
    for (unsigned int i = 0; i < b.size(); i++)
    {
        std::cout << i << " : " << b[i] << std::endl;
    }

    std::cout << "\nCopy Test" << std::endl;
    {
        b[0] = 245;
        std::cout << "b: " << b[0] << std::endl;
        std::cout << "a: " << a[0] << std::endl;
    }


    std::cout << "\nString Test" << std::endl;
    {
        Array<std::string> s(10);
        for (unsigned int i = 0; i < s.size(); i++)
            s[i] = "str_" + std::to_string(i);

        for (unsigned int i = 0; i < s.size(); i++)
            std::cout << i << " : " << s[i] << std::endl;
    }

    std::cout << "\nException Test:" << std::endl;
    try
    {
        Array<int> a(2);
        std::cout << a[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
