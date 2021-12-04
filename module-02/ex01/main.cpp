
#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(10);
	// Fixed const c(42.42f);
	// Fixed const d(b);
	
	a = Fixed(1310.1234f);
	
	PRINT("a is " << a);
	PRINT("b is " << b << "CADCADCADCADC");
	// PRINT("c is " << c);
	// PRINT("d is " << d);
	// PRINT("a is " << a.toInt() << " as integer");
	// PRINT("b is " << b.toInt() << " as integer");
	// PRINT("c is " << c.toInt() << " as integer");
	// PRINT("d is " << d.toInt() << " as integer");

	return 0;
}
