/* Windows win32 console colours
 - Allows changes to the colours of characters printed to the win32 console
 - Only characters written after method calls are altered

 Programmed by Warren Golin
 */
#include "WindowsColours.h"

void TextModifier::resetColour()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), gray);
}

void TextModifier::setColour(colour c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}