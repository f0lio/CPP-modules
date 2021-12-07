
#include "Fixed.hpp"

int main()
{
	Fixed a(1);
	Fixed b(Fixed(5.05f) * Fixed(2));

	PRINT(a);
	PRINT(++a);
	PRINT(a++);
	PRINT(--a);
	PRINT(a--);
	PRINT(a);
	PRINT(b);
	PRINT(Fixed::max(a, b));
	PRINT(Fixed::min(a, b));
	
	a = b;
	if (a == b)
		PRINT("## A is equal to B ##");

	a = b + 1;
	if (a > b)
		PRINT("## A is bigger than B ##");
	
	b = a + 1;
	if (a < b)
		PRINT("## A is smaller than B ##");

	b = a + 1;
	if (a != b)
		PRINT("## A is not equal to B ##");

	return 0;
}
