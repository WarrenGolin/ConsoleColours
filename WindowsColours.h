/* Windows win32 console colours
- Allows changes to the colours of characters printed to the console
- Only characters written after method calls are altered

Programmed by Warren Golin
*/

#ifndef TEXT_COLOURS
#define TEXT_COLOURS

#include <Windows.h>

//Enumerate the console character attributes
//which are parameters for SetConsoleTextAttribute function
enum colour
{
	black    = 0,
	white    = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	gray     =                        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	red      = FOREGROUND_INTENSITY | FOREGROUND_RED                                     ,
	green    = FOREGROUND_INTENSITY |                  FOREGROUND_GREEN                  ,
	yellow   = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN                  ,
	blue     = FOREGROUND_INTENSITY |                                     FOREGROUND_BLUE,
	magenta  = FOREGROUND_INTENSITY | FOREGROUND_RED |                    FOREGROUND_BLUE,
	cyan     = FOREGROUND_INTENSITY |                  FOREGROUND_GREEN | FOREGROUND_BLUE
};

class  TextModifier
{
public:
	void resetColour();
	void setColour(colour);
};
#endif