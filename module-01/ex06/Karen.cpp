
#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void)
{
	std::cout << MSG_DEBUG << std::endl;
}

void Karen::info(void)
{
	std::cout << MSG_INFO << std::endl;	
}

void Karen::warning(void)
{
	std::cout << MSG_WARN << std::endl;
}

void Karen::error(void)
{
	std::cout << MSG_ERROR << std::endl;
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
		{
			std::cout << "[ " << logging_level << " ]" << std::endl;
			break ;
		}

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
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}	
}
