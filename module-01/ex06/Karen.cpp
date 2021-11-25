
#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void)
{
	std::cout << "DEBUG: " << MSG_DEBUG << std::endl;
}

void Karen::info(void)
{
	std::cout << "INFO : " << MSG_INFO << std::endl;	
}

void Karen::warning(void)
{
	std::cout << "WARN : " << MSG_WARN << std::endl;
}

void Karen::error(void)
{
	std::cout << "ERROR: " << MSG_ERROR << std::endl;
}

void Karen::complain(std::string logging_level)
{
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	short i;
	for (i = 0; i < LEVELS_COUNT; i++)
		if (levels[i] == logging_level)
			break ;

	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
		default:
			break;
	}	
}
