
#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector <int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    try
    {
        easyfind(vec, 3);
        easyfind(vec, 40);
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
    

    return 0;
}
