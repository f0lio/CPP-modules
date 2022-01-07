#include "span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span::~Span() {}

Span::Span(Span const &obj) : _vec(obj._vec), _size(obj._size) {}

void Span::addNumber(int x)
{
    if (_size == 0)
        throw ContainerIsFull();
    _vec.push_back(x);
    _size--;
}

int Span::shortestSpan()
{
    if (_vec.size() < 2)
        throw SpanNotFound();

    std::sort(_vec.begin(), _vec.end());
    int span = abs(_vec[0] - _vec[1]);
    unsigned int len  = _vec.size() - 1;

    for (unsigned int i = 0; i < len; i++)
        span = std::min(span, abs(_vec[i] - _vec[i + 1]));
    return span;
}

int Span::longestSpan()
{
    if (_vec.size() < 2)
        throw SpanNotFound();
    std::sort(_vec.begin(), _vec.end());
    return _vec[_vec.size() - 1] - _vec[0];
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        _vec = obj._vec;
        _size = obj._size;
    }
    return *this;
}

const char *Span::SpanNotFound::what(void) const throw()
{
    return "Span not found";
}

const char *Span::ContainerIsFull::what(void) const throw()
{
    return "Container is full";
}