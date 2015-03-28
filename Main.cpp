//Colour Test
#include <iostream>
#include "WindowsColours.h"
using namespace std;

int main()
{
	TextModifier *txt = new TextModifier();
	
	txt->setColour(black);
	cout << "black" << endl;

	txt->setColour(white);
	cout << "white" << endl;
	
	txt->setColour(gray);
	cout << "gray" << endl;
	
	txt->setColour(red);
	cout << "red" << endl;
	
	txt->setColour(green);
	cout << "green" << endl;
	
	txt->setColour(yellow);
	cout << "yellow" << endl;
	
	txt->setColour(blue);
	cout << "blue" << endl;
	
	txt->setColour(magenta);
	cout << "magenta" << endl;
	
	txt->setColour(cyan);
	cout << "cyan" << endl;
	
	txt->resetColour();
	cout << "reset" << endl;
	return 0;
}