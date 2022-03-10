#pragma once
#include <string>
using namespace std;

class Player
{
public:
	string *name;
	int* score;

	//constructor
	Player();
	Player(string name);
	Player(string name, int score);

	//deconstructor
	~Player();
};

