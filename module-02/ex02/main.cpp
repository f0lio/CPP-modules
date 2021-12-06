
#include "Fixed.hpp"

int main()
{
	Fixed a(1.2f);
	Fixed const b(Fixed(5.05f) * Fixed(2));

	PRINT(a);
	PRINT(++a);
	PRINT(a++);
	PRINT(a);
	PRINT(b);
	PRINT(Fixed::max(a, b));
	PRINT(Fixed::min(a, b));

	return 0;
}
