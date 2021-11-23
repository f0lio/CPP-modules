
#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string &stringREF = s;
	std::string *stringPTR = &s;

	if (stringPTR && stringREF == "")
		;

	std::cout << &s << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	return 0;
}
