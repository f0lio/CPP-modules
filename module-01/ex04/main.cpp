
#include <iostream>
#include <fstream>

#define PRINT(X_X)				std::cout << X_X << std::endl
#define PRINT_ERR(X_X)			std::cerr << X_X << std::endl
#define SET_OUTPUT_NAME(X_X)	std::string(X_X) + ".replace"

//empty file?
std::string line_replace(
	std::string &line,
	std::string &needle,
	std::string &replace_with)
{
	std::string new_line;
	std::size_t pos;
	std::size_t start;

	start = 0;
	while (1)
	{
		pos = line.find(needle, start);
		if (pos != (std::size_t)-1)
		{
			new_line += line.substr(start, pos - start) + replace_with;
			start = pos + needle.length();
		}
		else
			return new_line + line.substr(start);
	}
	return new_line;
}

void replace(
	std::ifstream &input_file,
	std::ofstream &output_file,
	std::string &needle,
	std::string &replace_with)
{
	std::string line;
	std::string new_line;

	while ( std::getline (input_file, line) )
		output_file << line_replace(line, needle, replace_with) << "\n";
}

int main(int argc, char const *argv[])
{

	if (argc != 4)
	{
		PRINT_ERR("usage: replace <file> <target> <new_token>");
		return 1;
	}
	
	std::ifstream input_file (argv[1]);
	if (!input_file.is_open())
	{
		PRINT_ERR("Error\nFailed at opening " << argv[1]);
		return 1;
	}
	else if (input_file.peek() == std::ifstream::traits_type::eof())
	{
		PRINT_ERR("Error\nFile is empty");
		return 1;
	}
	
	std::ofstream output_file (SET_OUTPUT_NAME(argv[1]));
	if (!output_file.is_open())
	{
		PRINT_ERR("Error\nFailed at creating " << SET_OUTPUT_NAME(argv[1]));
		return 1;
	}

	std::string needle(argv[2]);
	std::string replace_with(argv[3]);

	replace(input_file, output_file, needle, replace_with);
	input_file.close();
	output_file.close();
	return 0;
}
