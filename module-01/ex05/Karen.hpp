
#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

#define LEVELS_COUNT	4

#define MSG_DEBUG		"I love to get extra memory. I just love it."
#define MSG_INFO		"I cannot believe adding extra conditions cost more CPU."
#define MSG_WARN		"How do you like it when I film you?"
#define MSG_ERROR		"This is unacceptable, I want to speak to the manager now."

class Karen
{

	void debug( void );
	void info( void );
	void warning( void );
	void error( void ) ;
	public:
		Karen();
		~Karen();
		void complain(std::string logging_level);
};

typedef void (Karen::*KAREN_FUNC)(void);

#endif