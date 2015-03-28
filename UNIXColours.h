/* UNIX colours
- Allows changes to the colours of characters printed to the console
- Only characters written after method calls are altered
- Uses ANSI codes
Programmed by Warren Golin
*/

#ifndef UNIX_COLOURS
#define UNIX_COLOURS

enum colour
{
	black = 0,
	white,
	gray,
	red,
	green,
	yellow,
	blue,
	magenta, 
	cyan    
};

class  TextModifier
{
public:
	void resetColour();
	void setColour(colour);
};

#endif