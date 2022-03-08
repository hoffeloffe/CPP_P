#pragma once
#include <string>
using namespace std;

class Player
{
public:
	string *name;
	int* score;

	Player();
	Player(string name, int score);
};

