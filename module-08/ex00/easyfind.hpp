
#pragma once

template <typename T>
void easyfind(T container, int target)
{
    if (std::find(container.begin(), container.end(), target) != container.end())
        std::cout << "Found" << std::endl;
    else
        throw "Target Not Found";
}
