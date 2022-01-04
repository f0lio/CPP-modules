
#include <iostream>
#include "iter.hpp"

void uppercase(char c)
{
    std::cout << (char)(c - 32);
}

void power(int x)
{
    std::cout << x * x << " ";
}

#define ARR_SIZE 6

int main()
{
    char    str[ARR_SIZE + 1] = "abcdef";
    int     arr[ARR_SIZE] = {0, 1, 2, 3, 4, 5};

    iter(str, ARR_SIZE, uppercase);
    std::cout << std::endl;;
    
    iter(arr, ARR_SIZE, power);
    std::cout << std::endl;;

    return 0;
}
