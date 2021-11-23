
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		std::string str(argv[i]);
		for (size_t j = 0; j < str.length(); j++)
			str[j] = (char)std::toupper(str[j]);
		std::cout << str;
	}
	std::cout << std::endl;
	return 0;
}
