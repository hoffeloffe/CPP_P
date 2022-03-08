#pragma once
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

class masterText
{
public:
	string name;
	int colorValue;
	
	masterText(string name, int colorValue);
	
	void SetColor(HANDLE color);

private:
};
