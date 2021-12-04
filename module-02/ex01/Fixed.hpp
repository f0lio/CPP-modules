
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
		Fixed(const int x);
		Fixed(const Fixed & f);
		Fixed(float const x);
		~Fixed();
		Fixed &operator=(const Fixed & f);
		int getRawBits() const;
		void setRawBits(int raw);

		float toFloat() const;
		int toInt() const;

};

std::ostream &operator<<(std::ostream &ostream, Fixed const & f);

#endif
