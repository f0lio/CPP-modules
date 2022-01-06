
#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _size;

public:
    Array()
    {
        _arr = new T;
        _size = 0;
    }

    Array(unsigned int n)
    {
        _arr = new T[n];
        _size = n;
    }

    Array(Array &obj)
    {
        this->_size = obj.size();
        this->_arr = new T[this->_size];

        for (unsigned int i = 0; i < this->_size; i++)
        {
            this->_arr[i] = obj[i];
        }
    }

    ~Array()
    {
        _size = 0;
        delete[] _arr;
    }

    unsigned int size(void) const
    {
        return _size;
    }

    class OutOfRange : public std::exception
    {
        const char *what() const throw()
        {
            return "index out of range";
        }
    };

    Array<T> &operator=(const Array<T> &rhs)
    {        
        this->_size = rhs->size();

        for (unsigned int i = 0; i < rhs->_size; i++)
            this->_arr[i] = rhs[i];

        return *this;
    }

    T &operator[](unsigned int i)
    {
        if (i >= _size)
            throw OutOfRange();
        return this->_arr[i];
    };

    T &getArray() const
    {
        return this->_arr;
    }
};
