
#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Missing argument" << std::endl;
		return 1;
	}
	Karen k;

	k.complain(std::string(argv[1]));

	return 0;
}
