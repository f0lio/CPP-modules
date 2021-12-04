
#include "Fixed.hpp"

Fixed::Fixed() : _fp(0)
{
	PRINT("Constructor()");
}

Fixed::Fixed(const int x)
{
	PRINT("Fixed(const int x);");
	_fp = (x << _frac_bits);
}

Fixed::Fixed(const float f)
{
	PRINT("Float constructor called");
	_fp = std::roundf(f * (1 << 8));
}

Fixed::~Fixed()
{
	PRINT("~Destructor()");
}

int Fixed::getRawBits() const
{
	return _fp;
}

void Fixed::setRawBits(int const raw)
{
	_fp = raw;
}

Fixed::Fixed(Fixed const & f)
{
	PRINT("Copy constructor()");
	*this = f;
}

Fixed & Fixed::operator=(const Fixed & f)
{
	PRINT("Operator=");
	if (this != &f)
		this->_fp = f.getRawBits();
	return *this;
}

float Fixed::toFloat() const
{
	return ((float)_fp / (1 << 8));
}

int Fixed::toInt() const
{
	return (_fp >> _frac_bits);
}

std::ostream & operator<<(std::ostream & ostream, Fixed const & f)
{
	ostream << f.toFloat();
	return ostream;
}
