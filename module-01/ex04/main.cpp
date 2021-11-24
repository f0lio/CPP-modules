
#include <iostream>
#include <fstream>

#define PRINT(X_X)				std::cout << X_X << std::endl
#define PRINT_ERR(X_X)			std::cerr << X_X << std::endl
#define SET_OUTPUT_NAME(X_X)	std::string(X_X) + ".replace"

std::string line_replace(
	std::string &line,
	std::string &target,
	std::string &needle)
{
	std::string new_line(line);

	line.find(needle, 0);

	return new_line;
}

void replace(
	std::ifstream &input_file,
	std::ofstream &output_file,
	std::string &haystack,
	std::string &needle)
{
	std::string line;
	std::string new_line;
	while ( std::getline (input_file, line) )
    {
		// new_line = line_replace(line, target, needle);
		output_file << new_line << '\n';
    }
}

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		PRINT_ERR("usage: replace file1 file2");
		return 1;
	}
	
	std::ifstream input_file (argv[1]);
	if (!input_file.is_open())
	{
		PRINT_ERR("Error at opening " << argv[1]);
		return 1;
	}
	
	std::ofstream output_file (SET_OUTPUT_NAME(argv[1]));
	if (!output_file.is_open())
	{
		PRINT_ERR("Error at creating " << SET_OUTPUT_NAME(argv[1]));
		return 1;
	}

	std::string haystack(argv[2]);
	std::string needle(argv[3]);

	replace(input_file, output_file, haystack, needle);
	input_file.close();
	output_file.close();
	return 0;
}
