#pragma once
#include <string>
#include <vector>
#include "Player.h"


using namespace std;
class Highscore
{
private:
	

public:
	vector<Player*> players;
	Player player;

	//Constructor
	Highscore();

	//Function
	void PrintScore();
};

