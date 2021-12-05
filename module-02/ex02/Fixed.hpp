
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

#define PRINT(X_X)  std::cout << X_X << std::endl

class Fixed
{
	private:
		int _fp;
		static const int _frac_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed & f);
		Fixed(const int x);
		Fixed(float const x);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int raw);

		float	toFloat() const;
		int		toInt() const;

		Fixed &	operator =	(const Fixed & f);
		Fixed	operator +	(const Fixed &) const;
		Fixed	operator -	(const Fixed &) const;
		Fixed	operator *	(const Fixed &) const;
		Fixed	operator /	(const Fixed &) const;
		Fixed	operator ++	(int);
		Fixed & operator ++	();

		bool	operator ==	(const Fixed &) const;
		bool	operator !=	(const Fixed &) const;
		bool	operator <	(const Fixed &) const;
		bool	operator >	(const Fixed &) const;
		bool	operator >=	(const Fixed &) const;
		bool	operator <=	(const Fixed &) const;

		static Fixed & min(Fixed &, Fixed &);
		static Fixed & max(Fixed &, Fixed &);
		static const Fixed & min(const Fixed &, const Fixed &);
		static const Fixed & max(const Fixed &, const Fixed &);
};

std::ostream &operator<<(std::ostream & ostream, Fixed const & f);

#endif
