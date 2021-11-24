
#include <iostream>

std::string	truncate(std::string s, int len)
{
	if (s.length() > (size_t) len)
	{
		s = s.substr(0, len);
		s[9] = '.';
	}
	return s;
}

std::string prefixWith(std::string s, char c, int count)
{
	for (int i = 0; i < count; i++)
		s += c;
	return s;
}

std::string formatOutput(std::string s)
{
	s = truncate(s, 10);
	if (s.length() < 10)
		return prefixWith(s, ' ', 10 - s.length());
	return s;
}
