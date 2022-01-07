
#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

#define PRINT(X_X) std::cout << X_X << std::endl

class Span
{
private:
    std::vector<int> _vec;
    unsigned int _size;

public:
    Span();
    Span(unsigned int);
    Span(Span const &);
    ~Span();

    void addNumber(int);

    template <typename T>
    void addNumber(T start, T end)
    {
        if (_size == 0)
            throw ContainerIsFull();
        while (start < end)
        {
            addNumber(*start);
            start++;
        }
    }

    int shortestSpan();
    int longestSpan();

    Span &operator=(Span const &);

    class SpanNotFound : public std::exception
    {
        const char *what(void) const throw();
    };

    class ContainerIsFull : public std::exception
    {
        const char *what(void) const throw();
    };
};
