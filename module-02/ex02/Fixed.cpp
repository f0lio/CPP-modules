
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
	_fp = std::roundf(f * (1 << _frac_bits));
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
	return ((float)_fp / (1 << _frac_bits));
}

int Fixed::toInt() const
{
	return (_fp >> _frac_bits);
}

std::ostream &operator<<(std::ostream & ostream, Fixed const & f)
{
	ostream << f.toFloat();
	return ostream;
}

bool Fixed::operator>(Fixed const & f) const
{
	return this->_fp > f._fp;
}

bool Fixed::operator<(const Fixed & f) const
{
	return this->_fp < f._fp;
}

bool Fixed::operator>=(const Fixed & f) const
{
	return this->getRawBits() >= f.getRawBits();
}

bool Fixed::operator<=(const Fixed & f) const
{
	return this->getRawBits() <= f.getRawBits();;
}

bool Fixed::operator==(const Fixed & f) const
{
	return this->getRawBits() == f.getRawBits();;
}

bool Fixed::operator!=(const Fixed & f) const
{
	PRINT(*this);
	PRINT(f);
	return !(*this == f);
}

Fixed Fixed::operator+(const Fixed & f) const
{
	return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed & f) const
{
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed & f) const
{
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed & f) const
{
	if(f.toInt() > 0)
		return Fixed(this->toFloat() / f.toFloat());
	else throw std::runtime_error("Cannot divide by zero");
}

Fixed & Fixed::operator++()
{
	this->_fp++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed fixed(*this);
	++_fp;
	return fixed;
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return a._fp < b._fp ? a : b;
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	return a._fp < b._fp ? a : b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return a._fp > b._fp ? a : b;
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	return a._fp > b._fp ? a : b;
}
