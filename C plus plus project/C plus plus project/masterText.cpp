#include "masterText.h"
#include <windows.h>

masterText::masterText(string name, int colorValue)
{
	this->name = name;
	this->colorValue = colorValue;
}

void masterText::SetColor(HANDLE color)
{
	//Sets the color of the console.
	SetConsoleTextAttribute(color, colorValue);
}