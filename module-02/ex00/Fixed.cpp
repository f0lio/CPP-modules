
#include "Fixed.hpp"

Fixed::Fixed() : _fp(0)
{
	PRINT("Constructor()");
}

Fixed::~Fixed()
{
	PRINT("~Destructor()");
}

Fixed::Fixed(Fixed const & f)
{
	PRINT("Copy constructor called");
	*this = f;
}

Fixed & Fixed::operator=(const Fixed & f)
{
	PRINT("Operator=");
	if (this != &f)
		this->_fp = f.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	PRINT("getRawBits() called");
	return _fp;
}

void Fixed::setRawBits(int const raw)
{
	PRINT("setRawBits() called");
	_fp = raw;
}
