/* UNIX colours
- Allows changes to the colours of characters printed to the console
- Only characters written after method calls are altered
- Uses ANSI codes
Programmed by Warren Golin
*/
#include "UNIXColours.h"
#include <iostream>

 void TextModifier::resetColour()
 {
	 std::cout << "\x1b[0m";
 }

void TextModifier::setColour(colour c)
{
	switch (c)
	{
	case 0:
		std::cout << "\x1b[30m";	//black
		break;
	case 1:
		std::cout << "\x1b[37;1m";  //white
		break;
	case 2:
		std::cout << "\x1b[30;1m";     //gray 
		break;
	case 3:
		std::cout << "\x1b[31;1m";    //red
		break;
	case 4:
		std::cout << "\x1b[32;1m";     //green
		break;
	case 5:
		std::cout << "\x1b[33;1m";   //yellow
		break;
	case 6:
		std::cout << "\x1b[34;1m";    //blue
		break;
	case 7:
		std::cout << "\x1b[35;1m";  //magenta
		break;
	case 8:
		std::cout << "\x1b[36;1m";   //cyan
		break;
	}
}

