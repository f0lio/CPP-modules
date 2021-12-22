
#include <iostream>
#include "iter.hpp"

void uppercase(int c)
{
    std::cout << (char)(c - 32);
}

void power(int x)
{
    std::cout << x * x << " ";
}

int main()
{
    char    str[10] = "abcdefgh";
    int     arr[10] = {0, 1, 2, 3, 4, 5, 6};


    iter(str, 5, uppercase);
    std::cout << std::endl;;
    
    iter(arr, 5, power);
    std::cout << std::endl;;

    return 0;
}
