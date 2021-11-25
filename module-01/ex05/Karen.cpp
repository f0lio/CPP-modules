
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
	std::string logging_levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	KAREN_FUNC levels[] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
		};
	
	for (short key = 0; key < LEVELS_COUNT; key++)
		if (logging_levels[key] == logging_level)
			(this->*levels[key])();
}
