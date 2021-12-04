
#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>

#define PRINT(X_X)  std::cout << X_X << std::endl

class Fixed
{
	private:
		int _fp;
		static int const _frac_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & f);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed & operator=(const Fixed & f);
};

#endif
