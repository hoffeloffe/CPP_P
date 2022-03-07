#pragma once
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

class masterText
{
public:
	masterText(string name, int colorValue);
	string name;
	int colorValue;
	void SetColor(HANDLE color);
private:
};
